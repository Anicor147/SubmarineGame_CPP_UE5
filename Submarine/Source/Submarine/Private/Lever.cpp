// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"
#include "LeverCondition.h"

// Sets default values
ALever::ALever()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	base->SetupAttachment(Root);

	cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
	cylinder->SetupAttachment(Root);

	ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	ball->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALever::ActivateLever()
{
	if (!doOnce)
	{
		cylinder->SetRelativeRotation(FRotator(0, 0, -40));
		condition->CheckSequence(value);
		doOnce = true;
	}
}

void ALever::ResetLever()
{
	doOnce = false;
	cylinder->SetRelativeRotation(FRotator(0, 0, 30));
}

void ALever::Interact()
{
	if (!doOnce)
	{
		cylinder->SetRelativeRotation(FRotator(0, 0, -40));
		condition->CheckSequence(value);
		doOnce = true;
	}
}
