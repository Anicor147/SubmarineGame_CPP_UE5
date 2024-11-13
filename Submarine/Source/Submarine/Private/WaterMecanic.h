// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "WaterMecanic.generated.h"

UCLASS()
class AWaterMecanic : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWaterMecanic();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	
	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* WaterComponent;

private:
	 float Timer;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void WaterLevel();
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

};
