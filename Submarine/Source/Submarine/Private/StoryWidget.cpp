// Fill out your copyright notice in the Description page of Project Settings.


#include "StoryWidget.h"

#include "FStoryData.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Submarine/SubmarinePlayerController.h"

void UStoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (NextButton)
	{
		NextButton->OnClicked.AddDynamic(this, &UStoryWidget::NextButtonClicked);
	}
	StoryRow.DataTable->GetAllRows("", StoryData);

	PlayerController = Cast<ASubmarinePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	StoryText->SetText(StoryData[0]->Story);
	RowIndex = 1;
}

void UStoryWidget::NextButtonClicked()
{
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	PlayerController->SetInputMode(FInputModeUIOnly());
	PlayerController->SetShowMouseCursor(true);
	if (RowIndex < StoryData.Num())
	{
		PlayerController->bShowMouseCursor = true;
		StoryText->SetText(StoryData[RowIndex]->Story);
		RowIndex++;
	}
	else
	{
		PlayerController->SetInputMode(FInputModeGameOnly());

		UGameplayStatics::SetGamePaused(GetWorld(), false);

		PlayerController->SetShowMouseCursor(false);
		// PlayerController->bShowMouseCursor = false;
		this->SetVisibility(ESlateVisibility::Hidden);
	}
}
