// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Detach.h"
#include "Interaction.h"
#include "NiagaraComponent.h"
#include "GameFramework/Actor.h"
#include "Generator.generated.h"

UCLASS()
class AGenerator : public AActor, public IInteraction
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGenerator();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Cube;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Panel;
	UPROPERTY(VisibleDefaultsOnly)
	USceneComponent* Screws;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Screw1;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Screw2;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Screw3;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Screw4;
	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* LightComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact(FHitResult HitComponent) override;
};
