// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "GeneratorScripts/Generator.h"
#include "WaterLeak/WaterLeak.h"
#include "WaterMecanic.generated.h"

class ASubmarinePlayerController;

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
	UStaticMeshComponent* Plane;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* WaterComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> DeadWidgetClass;

	
	class UDeadScreenWidget* DeadScreenWidget;
	bool GetWaterLeaksFixed() const { return WaterLeaksPatched; }
	bool GetGeneratorIsFix()const { return GeneratorPatched; }
private:
	float Timer;
	int PatchedLeak;
	int RepairedGenerator;

	UPROPERTY(EditAnywhere)
	TArray<AWaterLeak*> WaterLeaks;
	
	UPROPERTY(EditAnywhere)
	TArray<AGenerator*> Generators;
	bool WaterLeaksPatched = false;
	bool GeneratorPatched = false;
	bool PlayerIsDrown = false;
public:
	UPROPERTY(EditAnywhere)
	float waterSpeed;

	ASubmarinePlayerController* PlayerController;
	void DecreasePatchedLeak() { PatchedLeak++; }
	void GeneratorsFixed() { RepairedGenerator++; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void WaterLevel(float DeltaTime);
	virtual void DrainWater(float DeltaTime);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
