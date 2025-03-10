// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "WaterMecanic.h"
#include "GameFramework/Actor.h"
#include "Lever.generated.h"

class ALeverCondition;

UCLASS()
class ALever : public AActor ,public IInteractE 
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
	USkeletalMeshComponent* skeletal;

	UPROPERTY(EditAnywhere, category = "Lever Condition")
	ALeverCondition* condition;


	UPROPERTY(EditAnywhere, category = "Lever Montage")
	UAnimMontage* ActionnerMontage;

	UPROPERTY(EditAnywhere, category = "Lever Montage")
	UAnimMontage* DesactionnerMontage;
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ActivateLever();
	virtual void ResetLever();
	virtual void Interact() override;
	
private:

	UPROPERTY(EditAnywhere)
	AWaterMecanic* WaterMecanic;
	void InitAnimations();
	void InteractMontage();
	UPROPERTY(EditAnywhere)
	int value;
	bool doOnce;
};
