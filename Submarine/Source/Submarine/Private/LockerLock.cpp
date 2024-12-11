// Fill out your copyright notice in the Description page of Project Settings.


#include "LockerLock.h"

#include "Kismet/GameplayStatics.h"
#include "Submarine/SubmarineCharacter.h"

// Sets default values
ALockerLock::ALockerLock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	LockerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LockerMesh"));
	LockerMesh->SetupAttachment(Root);
	LockMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LockMesh"));
	LockMesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ALockerLock::BeginPlay()
{
	Super::BeginPlay();
	const auto PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		Player = Cast<ASubmarineCharacter>(PlayerController->GetPawn());
	};
}

// Called every frame
void ALockerLock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALockerLock::Interact()
{
	if (Player->GetAsHammer())
	{
		LockMesh->SetVisibility(false);
		LockerMesh->PlayAnimation(AnimSequence, false);
		LockerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}
