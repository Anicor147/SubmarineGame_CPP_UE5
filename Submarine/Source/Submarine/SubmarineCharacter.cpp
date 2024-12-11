// Copyright Epic Games, Inc. All Rights Reserved.

#include "SubmarineCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "MainMenuWidget.h"
#include "PauseWidget.h"
#include "PlayerWidget.h"
#include "Blueprint/UserWidget.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Private/InteractE.h"
DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ASubmarineCharacter

ASubmarineCharacter::ASubmarineCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	InvisibleBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("InvisibleBody"));
	InvisibleBody->SetupAttachment(FirstPersonCameraComponent);

	InspectOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("InspectOrigin"));
	InspectOrigin->SetupAttachment(FirstPersonCameraComponent);
	InspectOrigin->SetRelativeLocation(FVector(40.f, 0.f, 0.f)); // Position the camera	

	WeaponOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponOrigin"));
	WeaponOrigin->SetupAttachment(FirstPersonCameraComponent);
}

void ASubmarineCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	InvisibleBody->SetVisibility(false);

	auto UserWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerWidgetClass);

	if (UserWidget)
	{
		PlayerWidget = Cast<UPlayerWidget>(UserWidget);
		PlayerWidget->AddToViewport();
	}


	if (PauseWidgetClass)
	{
		auto UserPauseWidget = CreateWidget<UUserWidget>(GetWorld(), PauseWidgetClass);
		if (UserPauseWidget)
		{
			PauseWidget = Cast<UPauseWidget>(UserPauseWidget);
		}
		if (PauseWidget)
		{
			PauseWidget->AddToViewport();
			PauseWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
	if (MainMenuWidgetClass && CurrentLevelName=="MainMenu" )
	{
		auto UserMainMenuWidget = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass); 
		if (UserMainMenuWidget)
		{
			MainMenuWidget = Cast<UMainMenuWidget>(UserMainMenuWidget);
			if (MainMenuWidget)
			{
				MainMenuWidget->AddToViewport();
				MainMenuWidget->SetVisibility(ESlateVisibility::Visible);
			}
		}
	}
}

void ASubmarineCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsInspecting)
	{
		FHitResult Hit;
		FVector Start = FirstPersonCameraComponent->GetComponentLocation();
		FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * 5000.f;
		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);


		FVector PlayerLocation = GetActorLocation();
		// FVector Direction = (End - Start).GetSafeNormal();


		if (GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, ObjectQueryParams, QueryParams) && IsValid(
			Hit.GetActor()))
		{
			float DistanceToActor = FVector::Dist(PlayerLocation, Hit.GetActor()->GetActorLocation());

			if (DistanceToActor < maxDistance)
			{
				if (Hit.GetActor()->Implements<UInteractE>())
				{
					InteractActor = Hit.GetActor();

					PlayerWidget->SetPromptE(true);
				}

				if (Hit.GetActor()->ActorHasTag("Inspect"))
				{
					CurrentInspectActor = Hit.GetActor();

					PlayerWidget->SetPromptF(true);
				}
			}
			else
			{
				InteractActor = nullptr;
				CurrentInspectActor = nullptr;
				PlayerWidget->SetPromptF(false);
				PlayerWidget->SetPromptE(false);
			}
		}
		else
		{
			InteractActor = nullptr;
			CurrentInspectActor = nullptr;
			PlayerWidget->SetPromptF(false);
			PlayerWidget->SetPromptE(false);
		}
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void ASubmarineCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASubmarineCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASubmarineCharacter::Look);


		EnhancedInputComponent->BindAction(EnterInspectAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::EnterInspect);
		EnhancedInputComponent->BindAction(ExitInspectAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::ExitInspect);
		EnhancedInputComponent->BindAction(RotateInspectAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::RotateInspect);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::InteractWithObject);

		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::PauseGameAction);

		EnhancedInputComponent->BindAction(DropAction, ETriggerEvent::Triggered, this,
		                                   &ASubmarineCharacter::DropObjectAction);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error,
		       TEXT(
			       "'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."
		       ), *GetNameSafe(this));
	}
}


void ASubmarineCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ASubmarineCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X * SensitivityValue);
		AddControllerPitchInput(LookAxisVector.Y * SensitivityValue);
	}
}

void ASubmarineCharacter::EnterInspect()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Entering Inspect"));

	if (!IsInspecting && CurrentInspectActor)
	{
		IsInspecting = true;
		PlayerWidget->SetPromptF(false);
		InspectOrigin->SetRelativeRotation(FRotator::ZeroRotator);
		InitialInspectTransform = CurrentInspectActor->GetActorTransform();
		CurrentInspectActor->AttachToComponent(InspectOrigin, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		InitialSize = CurrentInspectActor->GetActorScale3D();
		auto ModifiedSize = InitialSize * 0.3f;
		CurrentInspectActor->SetActorScale3D(ModifiedSize);


		auto PlayerController = Cast<APlayerController>(GetController());
		auto InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
			PlayerController->GetLocalPlayer());
		InputSubsystem->RemoveMappingContext(DefaultMappingContext);
		InputSubsystem->AddMappingContext(InspectMappingContext, 0);
	}
}

void ASubmarineCharacter::ExitInspect()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Exit Inspect"));

	if (IsInspecting && CurrentInspectActor)
	{
		IsInspecting = false;
		CurrentInspectActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		CurrentInspectActor->SetActorTransform(InitialInspectTransform);
		CurrentInspectActor = nullptr;
	}
	if (auto PlayerController = Cast<APlayerController>(GetController()))
	{
		if (auto InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
			PlayerController->GetLocalPlayer()))
		{
			InputSubsystem->RemoveMappingContext(InspectMappingContext);
			InputSubsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}


void ASubmarineCharacter::RotateInspect(const FInputActionValue& Value)
{
	if (IsInspecting && CurrentInspectActor)
	{
		FVector2D RotateInput = Value.Get<FVector2D>();
		FRotator NewRotation = FRotator(RotateInput.Y * 0.5f, RotateInput.X * 0.5f, 0.f);
		CurrentInspectActor->AddActorLocalRotation(NewRotation);
	}


	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Entering Inspect"));
}

void ASubmarineCharacter::InteractWithObject()
{
	if (InteractActor)
	{
		if (InteractActor->GetClass()->ImplementsInterface(UInteractE::StaticClass()))
		{
			Cast<IInteractE>(InteractActor)->Interact();
		}
	}
}

void ASubmarineCharacter::PauseGameAction()
{
	if (PauseWidget)
	{
		PauseWidget->PauseGame();
	}
}

void ASubmarineCharacter::DropObjectAction()
{
	if (HeldItem != nullptr)
	{
		HeldItem->DropItems();
	}
}
