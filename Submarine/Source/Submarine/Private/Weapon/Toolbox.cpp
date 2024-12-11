// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Toolbox.h"

#include "Submarine/SubmarineCharacter.h"

// Sets default values
AToolbox::AToolbox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	ToolBMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LockerMesh"));
	ToolBMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AToolbox::BeginPlay()
{
	Super::BeginPlay();
	const auto PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		Player = Cast<ASubmarineCharacter>(PlayerController->GetPawn());
	}
}

// Called every frame
void AToolbox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AToolbox::Interact()
{
	if (Player)
	{
		Player->SetAsToolBox(true);
		ToolBMesh->SetVisibility(false);
	}
}
