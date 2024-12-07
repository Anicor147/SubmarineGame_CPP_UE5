// Fill out your copyright notice in the Description page of Project Settings.
#include "LeverCondition.h"

#include "Lever.h"
#include "Components/Button.h"
// Sets default values
ALeverCondition::ALeverCondition()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StoreSequenceArray = {0, 0, 0, 0, 0};
	SequenceCorrect = 0;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Button = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Button"));
	Button->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ALeverCondition::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALeverCondition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALeverCondition::CheckSequence(int Sequence)
{
	StoreSequenceArray[CurrentIndex++] = Sequence;

	if (CurrentIndex < SequenceArray.Num()) return;

	for (int i = 0; i < SequenceArray.Num(); i++)
	{
		if (StoreSequenceArray[i] == SequenceArray[i])
		{
			SequenceCorrect++;
		}
		else
		{
			SequenceCorrect--;
		}
	}
}

void ALeverCondition::ResetLevers()
{
	for (auto Element : LeverArray)
	{
		Element->ResetLever();
	}

	for (auto Lever : StoreSequenceArray)
	{
		Lever = 0;
	}
	CurrentIndex = 0;
	SequenceCorrect = 0;
}

void ALeverCondition::Interact()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise, TEXT("From Button Interact"));
	if (SequenceCorrect == SequenceArray.Num())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("The Sequence is Correct"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("GIT  GUB SCRUB"));
		ResetLevers();
	}
}
