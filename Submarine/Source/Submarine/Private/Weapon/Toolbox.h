// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Toolbox.generated.h"

class ASubmarineCharacter;

UCLASS()
class AToolbox : public AActor, public IInteractE
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AToolbox();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ToolBMesh;

	ASubmarineCharacter* Player;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact() override;
};
