// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterMecanic.h"

// Sets default values
AWaterMecanic::AWaterMecanic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	waterSpeed = 0.5f;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	Plane = CreateDefaultSubobject<UStaticMeshComponent>("Plane");
	Plane->SetupAttachment(Root);
	
	// WaterComponent = CreateDefaultSubobject<UNiagaraComponent>("Water");
	// WaterComponent->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AWaterMecanic::BeginPlay()
{
	Super::BeginPlay();
}

void AWaterMecanic::WaterLevel()
{
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation.Z = waterSpeed * GetWorld()->GetTimeSeconds();
	if (CurrentLocation.Z > 155.f)
	{
		CurrentLocation.Z = 155.f;
	}
	SetActorLocation(CurrentLocation);
}

// Called every frame
void AWaterMecanic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 WaterLevel();
}

