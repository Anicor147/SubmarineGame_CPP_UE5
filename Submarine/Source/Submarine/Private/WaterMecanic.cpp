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

	WaterComponent = CreateDefaultSubobject<UNiagaraComponent>("Water");
	WaterComponent->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AWaterMecanic::BeginPlay()
{
	Super::BeginPlay();
}

void AWaterMecanic::WaterLevel(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation.Z += waterSpeed * DeltaTime;
	if (CurrentLocation.Z > 240.f)
	{
		PlayerIsDrown = true;
		CurrentLocation.Z = 240.f;
	}
	SetActorLocation(CurrentLocation);
}

void AWaterMecanic::DrainWater(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation.Z -= waterSpeed * DeltaTime;
	if (CurrentLocation.Z < 0.f)
	{
		CurrentLocation.Z = 0.f;
	}
	SetActorLocation(CurrentLocation);
}

// Called every frame
void AWaterMecanic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// UE_LOG(LogTemp, Warning, TEXT("PatchLeak : %d"), PatchedLeak);

	if (PatchedLeak >= WaterLeaks.Num())
	{
		WaterLeaksPatched = true;
		
		// UE_LOG(LogTemp, Warning, TEXT("Water should not rise "));
	}
	else
	{
		WaterLevel(DeltaTime);
		// UE_LOG(LogTemp, Warning, TEXT("Water is rising "));
	}

	if (RepairedGenerator <= Generators.Num())
	{
		GeneratorPatched = true;
	}
	
	if (GeneratorPatched && WaterLeaksPatched)
	{
		DrainWater(DeltaTime);
		
		 UE_LOG(LogTemp, Warning, TEXT("Should be draining "));
	}
}
