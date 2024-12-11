// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Submarine/SubmarinePlayerController.h"
#include "PauseWidget.generated.h"
class ASubmarineCharacter;
class UButton;
class USlider;
/**
 * 
 */
UCLASS()
class UPauseWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnResumeButton();
	UFUNCTION()
	void OnQuitButton();

	UFUNCTION()
	void SoundSliderValue(float Value);

	UFUNCTION()
	void SensivitySliderValue(float Value);
public:
	virtual void PauseGame();


	UPROPERTY(meta = (BindWidget))
	UButton* ResumeButton;
	
	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	USlider* SoundSlider;

	UPROPERTY(meta = (BindWidget))
	USlider* SensivitySlider;
	
private:
	ASubmarinePlayerController* PlayerController;
	
	ASubmarineCharacter* Player;
};
