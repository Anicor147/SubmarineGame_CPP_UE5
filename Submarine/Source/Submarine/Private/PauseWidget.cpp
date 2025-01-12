// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseWidget.h"

#include "Components/Button.h"
#include "Components/Slider.h"
#include "GameFramework/PlayerInput.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundClass.h"
#include "Submarine/SubmarineCharacter.h"

void UPauseWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UPauseWidget::OnResumeButton);
	}

	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UPauseWidget::OnQuitButton);
	}

	if (SensivitySlider)
	{
		SensivitySlider->OnValueChanged.AddDynamic(this, &UPauseWidget::SensivitySliderValue);
	}

	if (SoundSlider)
	{
		SoundSlider->OnValueChanged.AddDynamic(this, &UPauseWidget::SoundSliderValue);
	}
	PlayerController = Cast<ASubmarinePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	Player = Cast<ASubmarineCharacter>(PlayerController->GetPawn());

	Player->SetSensitivityValue(SensivitySlider->GetValue());
}

void UPauseWidget::OnResumeButton()
{
	PauseGame();
}

void UPauseWidget::OnQuitButton()
{
	PlayerController->ConsoleCommand("quit");
}

void UPauseWidget::SoundSliderValue(float Value)
{
	SoundClass->Properties.Volume = Value;
}	

void UPauseWidget::SensivitySliderValue(float Value)
{

	Player->SetSensitivityValue(Value);
}

void UPauseWidget::PauseGame()
{
	if (IsValid(this))
	{
		if (this->IsVisible())
		{
			this->SetVisibility(ESlateVisibility::Hidden);
			UGameplayStatics::SetGamePaused(GetWorld(), false);
			PlayerController->SetInputMode(FInputModeGameOnly());

			PlayerController->bShowMouseCursor = false;
		}
		else
		{
			this->SetVisibility(ESlateVisibility::Visible);
			UGameplayStatics::SetGamePaused(GetWorld(), true);
			PlayerController->bShowMouseCursor = true;
			PlayerController->SetInputMode(FInputModeUIOnly());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseWidget is invalid!"));
	}
}
