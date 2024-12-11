// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

class ASubmarinePlayerController;
class UTextBlock;
class UButton;
/**
 * 
 */
UCLASS()
class UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public :
	UFUNCTION()
	void PlayGame();
	UFUNCTION()
	void QuitGame();

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* PlayButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Title;
	
	ASubmarinePlayerController* PlayerController;
	
private:
	virtual void NativeConstruct() override;
};
