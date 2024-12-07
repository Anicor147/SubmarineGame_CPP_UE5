// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Submarine/SubmarineCharacter.h"
#include "Hammer.generated.h"

UCLASS()
class AHammer : public AActor , public IInteractE
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHammer();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SkeletalMesh;
	
private:
	APlayerController* Player;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    virtual void Interact() override;
};
