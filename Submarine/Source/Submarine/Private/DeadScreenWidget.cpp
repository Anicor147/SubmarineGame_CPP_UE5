// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadScreenWidget.h"

#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Submarine/SubmarinePlayerController.h"

void UDeadScreenWidget::Restart()
{
	UGameplayStatics::OpenLevel(this, FName("FirstPersonMap"));
}

void UDeadScreenWidget::MainMenu()
{
	UGameplayStatics::OpenLevel(this, FName("MainMenu"));
}

void UDeadScreenWidget::Quit()
{
	PlayerController->ConsoleCommand("quit");
}

void UDeadScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (RestartButton)
	{
		RestartButton->OnClicked.AddDynamic(this, &UDeadScreenWidget::Restart);
	}
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UDeadScreenWidget::Quit);
	}
	if (MainMenuButton)
	{
		MainMenuButton->OnClicked.AddDynamic(this, &UDeadScreenWidget::MainMenu);
	}

	PlayerController = Cast<ASubmarinePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}
