// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseWidget.h"

#include "EnhancedInputComponent.h"
#include "ErrorCodes.h"
#include "GameFramework/Character.h"
#include "GenericPlatform/GenericPlatformChunkInstall.h"
#include "Kismet/GameplayStatics.h"
#include "Preferences/PersonaOptions.h"
#include "Submarine/SubmarineCharacter.h"

void UPauseWidget::PauseGame()
{
	if (IsValid(this))
	{
		if (this->IsVisible())
		{
			this->SetVisibility(ESlateVisibility::Hidden);
			// this->RemoveFromParent();
			UGameplayStatics::SetGamePaused(GetWorld(), false);
		}
		else
		{
			
			this->SetVisibility(ESlateVisibility::Visible);
			// this->AddToViewport();
			UGameplayStatics::SetGamePaused(GetWorld(), true);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseWidget is invalid!"));
	}
}
