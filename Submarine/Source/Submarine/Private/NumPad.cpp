// Fill out your copyright notice in the Description page of Project Settings.


#include "NumPad.h"

#include "Components/Button.h"

// Sets default values
ANumPad::ANumPad()
{
	PrimaryActorTick.bCanEverTick = true;
	// ReceivedValueArray = {0, 0, 0, 0, 0};
	SequenceCorrect = 0;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	Base->SetupAttachment(Root);

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube->SetupAttachment(Base);

	Lights = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lights"));
	Lights->SetupAttachment(RootComponent);

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	Text->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ANumPad::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANumPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANumPad::CheckSequence(int Value)
{
	if (ReceivedValueArray.Num() < SequenceArray.Num())
	{
		ReceivedValueArray.Push(Value);

		CurrentCode += FString::FromInt(Value);

		Text->SetText(FText::FromString(CurrentCode));
	}
	if (ReceivedValueArray.Num() == SequenceArray.Num())
	{
		for (int i = 0; i < SequenceArray.Num(); i++)
		{
			if (ReceivedValueArray[i] == SequenceArray[i])
			{
				SequenceCorrect++;
			}
			else
			{
				SequenceCorrect--;
				break;
			}
		}
	}
}

void ANumPad::ResetSequence()
{
	CurrentIndex = 0;
	SequenceCorrect = 0;
	CurrentCode = 0;
	ReceivedValueArray.Empty();
}

void ANumPad::Interact()
{
	if (SequenceCorrect == SequenceArray.Num())
	{
		Text->SetText(FText::FromString("Success"));
	}
	else
	{
		Text->SetText(FText::FromString("Error"));
		ResetSequence();
	}
}
