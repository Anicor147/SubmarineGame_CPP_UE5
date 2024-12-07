// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "LeverCondition.generated.h"

class ALever;

UCLASS()
class ALeverCondition : public AActor , public IInteractE
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALeverCondition();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Button;
	
	UPROPERTY(EditAnywhere, Category = "Sequence")
	TArray<int> SequenceArray;

	UPROPERTY(EditAnywhere, Category = "Lever")
	TArray<ALever*> LeverArray;

	TArray<int> StoreSequenceArray;
	
	int CurrentIndex = 0;
	bool ResetSequence;
	int SequenceCorrect;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual  void CheckSequence(int Sequence);
	virtual void ResetLevers();
	virtual void Interact() override;
};
