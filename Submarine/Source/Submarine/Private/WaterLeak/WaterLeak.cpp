// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterLeak/WaterLeak.h"


// Sets default values
AWaterLeak::AWaterLeak()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;

	Patch = CreateDefaultSubobject<USkeletalMeshComponent>("Patch");
	Patch->SetupAttachment(Root);


	WaterLeak = CreateDefaultSubobject<UNiagaraComponent>("WaterLeak");
	WaterLeak->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AWaterLeak::BeginPlay()
{
	Super::BeginPlay();

	const auto PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		Player = Cast<ASubmarineCharacter>(PlayerController ->GetPawn());
	}
	Patch->SetHiddenInGame(true);
}

// Called every frame
void AWaterLeak::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWaterLeak::Interact()
{
	if (Player)
	{
		if (Player ->GetAsHammer())
		{
			Patch ->SetHiddenInGame(false);
			WaterLeak ->Deactivate();
		}
	}
}
