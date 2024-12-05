// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "NumPad.generated.h"

UCLASS()
class ANumPad : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANumPad();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Base;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Cube;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Lights; //might change for a niagara light
	UPROPERTY(VisibleAnywhere)
	UTextRenderComponent* Text;

private:
	UPROPERTY(EditAnywhere)
	int value;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
