// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Locker.generated.h"

UCLASS()
class ALocker : public AActor 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALocker();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* SkeletalMesh;
	
	UPROPERTY(EditAnywhere)
	UAnimSequence* AnimSequence;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OpenDoor() ;
};
