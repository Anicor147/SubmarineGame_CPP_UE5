// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "NiagaraComponent.h"
#include "GameFramework/Actor.h"
#include "Submarine/SubmarineCharacter.h"
#include "WaterLeak.generated.h"

UCLASS()
class AWaterLeak : public AActor, public IInteractE
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWaterLeak();
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* Patch;

	UPROPERTY(EditAnywhere)
	UNiagaraComponent* WaterLeak;

	bool GetIsPatched() { return IsPatched; }

	bool SetIsPatched(const bool Value)
	{
		IsPatched = Value;
		return IsPatched;
	}

private:
	ASubmarineCharacter* Player;
	bool IsPatched;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() override;
};
