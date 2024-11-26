// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lever.generated.h"

UCLASS()
class ALever : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALever();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* base;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* cylinder;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ball;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
