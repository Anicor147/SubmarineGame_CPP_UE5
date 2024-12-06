// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <rapidjson/document.h>

#include "CoreMinimal.h"
#include "InteractE.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "NumPad.h"
#include "NumpadButton.generated.h"

UCLASS()
class ANumpadButton : public AActor , public IInteractE
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANumpadButton();
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Base;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Cube;
	UPROPERTY(VisibleAnywhere)
	UTextRenderComponent* Text;

	UPROPERTY(EditAnywhere, Category = "1-Numpad")
	ANumPad* Numpad;
	
private:
	UPROPERTY(EditAnywhere)
	int Value;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Interact() override;
};
