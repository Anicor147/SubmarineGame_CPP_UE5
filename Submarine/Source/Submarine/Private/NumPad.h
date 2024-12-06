// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "InteractE.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "NumPad.generated.h"
class ANumpadButton;
class APlayerController;

UCLASS()
class ANumPad : public AActor , public IInteractE
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
	UPROPERTY(EditAnywhere ,Category = "Sequence")
	TArray<int> SequenceArray;
	UPROPERTY(EditAnywhere)
	TArray<int> ReceivedValueArray;

	UPROPERTY(EditAnywhere)
	AActor* Blockage;
	
	int CurrentIndex = 0;
	int SequenceCorrect;
	FString CurrentCode;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckSequence(int Value);
	void ResetSequence();
	virtual void Interact() override;
};
