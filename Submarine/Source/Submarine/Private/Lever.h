// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lever.generated.h"

class ALeverCondition;

UCLASS()
class ALever : public AActor
{
	GENERATED_BODY()

private:
	float LeverAngle = 40;

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

	UPROPERTY(EditAnywhere, category = "Lever Condition")
	ALeverCondition* condition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ActivateLever();
	virtual void ResetLever();
private:
	UPROPERTY(EditAnywhere)
	int value;
	bool doOnce;
};
