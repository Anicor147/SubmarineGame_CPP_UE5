// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "LockerLock.generated.h"

class ASubmarineCharacter;

UCLASS()
class ALockerLock : public AActor , public IInteractE
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALockerLock();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* LockerMesh;
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* LockMesh	;

	UPROPERTY(EditAnywhere)
	UAnimSequence* AnimSequence;

	ASubmarineCharacter* Player;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact() override;
	
};
