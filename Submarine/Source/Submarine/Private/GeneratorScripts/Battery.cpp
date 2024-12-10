// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorScripts/Battery.h"

#include "Submarine/SubmarineCharacter.h"

// Sets default values
ABattery::ABattery()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	BatteryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BatteryMesh"));
	BatteryMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ABattery::BeginPlay()
{
	Super::BeginPlay();

	Player = GetWorld()->GetFirstPlayerController();
}

// Called every frame
void ABattery::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABattery::Interact()
{
	if (Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player trouver"));
		APawn* PlayerPawn = Player->GetPawn();
		if (PlayerPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("Pawn trouver"));
			auto SubmarineCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
			if (SubmarineCharacter && SubmarineCharacter->HeldItem == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Cast Fonctionnel"));
				USceneComponent* WeaponOrigin = SubmarineCharacter->GetWeaponOrigin();

				if (BatteryMesh)
				{
					BatteryMesh->SetSimulatePhysics(false);
					BatteryMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				    BatteryMesh->SetWorldLocation(WeaponOrigin->GetComponentLocation());
				}
				if (WeaponOrigin)
				{
					FTransform AttachTransform = FTransform(WeaponOrigin->GetComponentRotation(), WeaponOrigin->GetComponentLocation(), BatteryMesh->GetComponentScale());
					BatteryMesh->SetWorldTransform(AttachTransform);
					AttachToComponent(WeaponOrigin, FAttachmentTransformRules::KeepWorldTransform);
					SubmarineCharacter->SetBattery(this);
					SubmarineCharacter->SetAsBattery(true);
					 SubmarineCharacter->HeldItem = this;
				}	
			}
		}
	}
}

void ABattery::Detach()
{
	BatteryMesh->SetSimulatePhysics(true);
	BatteryMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	APawn* PlayerPawn = Player->GetPawn();
	auto SubmarineCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
	SubmarineCharacter->SetAsBattery(false);
	SubmarineCharacter->SetBattery(nullptr);
}
void ABattery::DropItems()
{
	if (BatteryMesh)
	{
		BatteryMesh->SetSimulatePhysics(true);
		BatteryMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	if (Player)
	{
		APawn* PlayerPawn = Player->GetPawn();
		auto SubmarineCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
		if (SubmarineCharacter)
		{
			SubmarineCharacter->HeldItem = nullptr; 
			SubmarineCharacter->SetAsBattery(false); 
			SubmarineCharacter->SetBattery(nullptr); 
		}
	}
}


