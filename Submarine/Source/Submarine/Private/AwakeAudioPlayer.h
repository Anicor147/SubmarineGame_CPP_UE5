// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AwakeAudioPlayer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UAwakeAudioPlayer : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAwakeAudioPlayer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere ,Category=Audio)
	AActor* Target;
	UPROPERTY(EditAnywhere ,Category=Audio)
	USoundBase* Sound;
	
		
};
