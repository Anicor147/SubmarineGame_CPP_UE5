// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Hammer.h"

#include "PlayerWidget.h"

// Sets default values
AHammer::AHammer()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	Hammer = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Hammer->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AHammer::BeginPlay()
{
	Super::BeginPlay();

	Rotation = GetActorRotation();
	Player = GetWorld()->GetFirstPlayerController();
}

// Called every frame
void AHammer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AHammer::Interact()
{
	if (Player)
	{
		APawn* PlayerPawn = Player->GetPawn();
		if (PlayerPawn)
		{
			auto SubmarineCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
			if (SubmarineCharacter && SubmarineCharacter->HeldItem == nullptr)
			{
				USceneComponent* WeaponOrigin = SubmarineCharacter->GetWeaponOrigin();
				if (WeaponOrigin && Hammer)
				{
					Hammer->SetSimulatePhysics(false);
					Hammer->SetCollisionEnabled(ECollisionEnabled::NoCollision);

					this->AttachToComponent(WeaponOrigin, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
					// this->AttachToComponent(WeaponOrigin, FAttachmentTransformRules::KeepRelativeTransform);

					this->SetActorLocation(WeaponOrigin->GetComponentLocation());

					FTransform AttachTransform = FTransform(WeaponOrigin->GetComponentRotation(),
					                                        WeaponOrigin->GetComponentLocation(),
					                                        Hammer->GetComponentScale());
					// Hammer->SetRelativeRotation(Rotation);
					Hammer->SetWorldTransform(AttachTransform);
					Hammer->SetWorldLocation(WeaponOrigin->GetComponentLocation());
					SubmarineCharacter->SetAsHammer(true);
					SubmarineCharacter->HeldItem = this;
					SubmarineCharacter->PlayerWidget->SetPromptG(true);
				}
			}
		}
	}
}


void AHammer::DropItems()
{
	if (Hammer)
	{
		Hammer->SetSimulatePhysics(true);
		Hammer->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	if (Player)
	{
		APawn* PlayerPawn = Player->GetPawn();
		auto SubmarineCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
		if (SubmarineCharacter)
		{
			SubmarineCharacter->HeldItem = nullptr;
			UE_LOG(LogTemp, Warning, TEXT("HeldItem has been cleared. The character is no longer holding any item."));
			SubmarineCharacter->SetAsHammer(false);

			SubmarineCharacter->PlayerWidget->SetPromptG(false);
		}
	}
}
