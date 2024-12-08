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

	BatteryMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BatteryMesh"));
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
    					// SubmarineCharacter ->SetAsHammer(true);
    				}
    			}
    		}
    	}
}

