// Fill out your copyright notice in the Description page of Project Settings.


#include "Locker.h"

#include "MaterialHLSLTree.h"

// Sets default values
ALocker::ALocker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(Root);
}


// Called when the game starts or when spawned
void ALocker::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALocker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ALocker::OpenDoor()
{
	SkeletalMesh ->PlayAnimation(AnimSequence , false);
	SkeletalMesh ->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

