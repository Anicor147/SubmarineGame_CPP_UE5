// Fill out your copyright notice in the Description page of Project Settings.


#include "NumpadButton.h"

#include "Components/TextBlock.h"

// Sets default values
ANumpadButton::ANumpadButton()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	Base->SetupAttachment(RootComponent);

	// Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	// Cube->SetupAttachment(Base);

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	Text->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ANumpadButton::BeginPlay()
{
	Super::BeginPlay();
	auto text = FString::FromInt(Value);
	Text->SetText(FText::FromString(text));
}

// Called every frame
void ANumpadButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANumpadButton::Interact()
{
	Numpad->CheckSequence(Value);
}




