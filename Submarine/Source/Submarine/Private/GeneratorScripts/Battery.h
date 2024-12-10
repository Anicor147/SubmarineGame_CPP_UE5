// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DropItems.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Battery.generated.h"

UCLASS()
class ABattery : public AActor, public IInteractE , public IDropItems
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABattery();

	UPROPERTY(EditAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BatteryMesh;

private:
	APlayerController* Player;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact() override;
	virtual void Detach();
	virtual void DropItems() override;
};
