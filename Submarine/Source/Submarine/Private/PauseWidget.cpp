// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseWidget.h"

#include "Kismet/GameplayStatics.h"

void UPauseWidget::PauseGame()
{
	if (IsValid(this))
	{
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

		if (this->IsVisible())
		{
			this->SetVisibility(ESlateVisibility::Hidden);
			UGameplayStatics::SetGamePaused(GetWorld(), false);
		}
		else
		{
			
			this->SetVisibility(ESlateVisibility::Visible);
			UGameplayStatics::SetGamePaused(GetWorld(), true);
			PlayerController ->bShowMouseCursor = true;
			PlayerController->SetInputMode(FInputModeUIOnly());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseWidget is invalid!"));
	}
}
