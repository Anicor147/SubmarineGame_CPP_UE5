// Fill out your copyright notice in the Description page of Project Settings.


#include "Generator.h"

#include "NiagaraComponent.h"

// Sets default values
AGenerator::AGenerator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube->SetupAttachment(Root);

	Panel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Panel"));
	Panel->SetupAttachment(Root);

	Screws = CreateDefaultSubobject<USceneComponent>(TEXT("Screws"));
	Screws ->SetupAttachment(Root);

	Screw1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Screw1"));
	Screw1->SetupAttachment(Screws);

	Screw2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Screw2"));
	Screw2->SetupAttachment(Screws);

	Screw3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Screw3"));
	Screw3->SetupAttachment(Screws);

	Screw4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Screw4"));
	Screw4->SetupAttachment(Screws);



	LightComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LightComponent"));
	LightComponent->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AGenerator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGenerator::Interact(FHitResult HitComponent)
{
	IInteraction::Interact(HitComponent);

	if (HitComponent.GetComponent()->ComponentHasTag("Screw"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("It has Screw"));
	}
}
