// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Submarine/SubmarineCharacter.h"
#include "Submarine/SubmarinePlayerController.h"

void UMainMenuWidget::PlayGame()
{
	
	UGameplayStatics::OpenLevel(this, FName("Gameplay"));
	// auto Player = PlayerController->GetPawn();
	// auto SubmarineCharacter = Cast<ASubmarineCharacter>(Player);
	// SubmarineCharacter -> MainMenuWidget->SetVisibility(ESlateVisibility::Hidden);
}

void UMainMenuWidget::QuitGame()
{
	PlayerController->ConsoleCommand("quit");
}

void UMainMenuWidget::NativeConstruct()
{
	if (PlayButton)
	{
		PlayButton->OnClicked.AddDynamic(this, &UMainMenuWidget::PlayGame);
	}

	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::QuitGame);
	}

	PlayerController = Cast<ASubmarinePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}
