// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorScripts/Generator.h"

#include "Battery.h"
#include "Submarine/SubmarineCharacter.h"

// Sets default values
AGenerator::AGenerator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Slot1 = CreateDefaultSubobject<USceneComponent>(TEXT("Slot1"));
	Slot1->SetupAttachment(Root);

	Slot2 = CreateDefaultSubobject<USceneComponent>(TEXT("Slot2"));
	Slot2->SetupAttachment(Root);

	Slot3 = CreateDefaultSubobject<USceneComponent>(TEXT("Slot3"));
	Slot3->SetupAttachment(Root);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AGenerator::BeginPlay()
{
	Super::BeginPlay();
	Player = GetWorld()->GetFirstPlayerController();
	Slot1AsBattery= false;
	Slot2AsBattery= false;
	Slot3AsBattery= false;
	SlotArray = {Slot1, Slot2, Slot3 };
	Index =0;
}

// Called every frame
void AGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AGenerator::Interact()
{
	if (Player && Index < SlotArray.Num())
	{
		APawn* PlayerPawn = Player->GetPawn();
		if (PlayerPawn)
		{
			auto PlayerCharacter = Cast<ASubmarineCharacter>(PlayerPawn);
			if (PlayerCharacter)
			{
				if (PlayerCharacter->GetAsBattery())
				{
					ABattery* AttachedBattery = PlayerCharacter->GetBattery();
					if (AttachedBattery)
					{
						AttachedBattery->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

						AttachedBattery->SetActorEnableCollision(false);

						FTransform AttachTransform = FTransform(SlotArray[Index]->GetComponentRotation(),
						                                        SlotArray[Index]->GetComponentLocation(),
						                                        AttachedBattery->BatteryMesh->GetComponentScale());
						AttachedBattery->BatteryMesh->SetWorldTransform(AttachTransform);
						AttachedBattery->AttachToComponent(
							SlotArray[Index], FAttachmentTransformRules::KeepWorldTransform);

						PlayerCharacter->SetAsBattery(false);
						Slot1AsBattery = true;
						PlayerCharacter->HeldItem = nullptr;
						Index++;
					}
				}
			}
		}
	}
}

