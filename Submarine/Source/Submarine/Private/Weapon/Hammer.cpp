// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Hammer.h"

// Sets default values
AHammer::AHammer()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	SkeletalMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AHammer::BeginPlay()
{
	Super::BeginPlay();

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
			if (SubmarineCharacter)
			{
				USceneComponent* WeaponOrigin = SubmarineCharacter->GetWeaponOrigin();
				if (WeaponOrigin)
				{
					AttachToComponent(WeaponOrigin, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
					// FRotator CurrentRotation = WeaponOrigin->GetComponentRotation();
					SubmarineCharacter ->SetAsHammer(true);
				}
			}
		}
	}
}
