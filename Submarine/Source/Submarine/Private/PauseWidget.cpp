// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseWidget.h"

#include "Kismet/GameplayStatics.h"

void UPauseWidget::PauseGame()
{
	if (IsValid(this))
	{
		if (this->IsVisible())
		{
			this->SetVisibility(ESlateVisibility::Hidden);
			UGameplayStatics::SetGamePaused(GetWorld(), false);
		}
		else
		{
			
			this->SetVisibility(ESlateVisibility::Visible);
			UGameplayStatics::SetGamePaused(GetWorld(), true);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseWidget is invalid!"));
	}
}
