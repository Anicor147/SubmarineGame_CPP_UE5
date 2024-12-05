// Fill out your copyright notice in the Description page of Project Settings.


#include "NumPad.h"

#include "Components/Button.h"

// Sets default values
ANumPad::ANumPad()
{
	PrimaryActorTick.bCanEverTick = true;
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
