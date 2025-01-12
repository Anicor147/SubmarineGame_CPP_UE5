// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeadScreenWidget.generated.h"

class UButton;
class ASubmarinePlayerController;
/**
 * 
 */
UCLASS()
class UDeadScreenWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* RestartButton;

	UPROPERTY(meta = (BindWidget))
	UButton* MainMenuButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitButton;

	
	ASubmarinePlayerController* PlayerController;
public:

	
	UFUNCTION()
	void Restart();
	UFUNCTION()
	void MainMenu();
	UFUNCTION()
	void Quit();
	virtual void NativeConstruct() override;
};
