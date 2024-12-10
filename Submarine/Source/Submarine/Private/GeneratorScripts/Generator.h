// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Generator.generated.h"

UCLASS()
class AGenerator : public AActor , public  IInteractE
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerator();
	UPROPERTY(visibleAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(visibleAnywhere)
	USceneComponent* Slot1;
	
	UPROPERTY(visibleAnywhere)
	USceneComponent* Slot2;
	
	UPROPERTY(visibleAnywhere)
	USceneComponent* Slot3;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;


	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	private:
	TArray<USceneComponent*> SlotArray;
	APlayerController* Player;

	bool Slot1AsBattery;
	bool Slot2AsBattery;
	bool Slot3AsBattery;
	int Index;	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact() override;
};
