// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StoryWidget.generated.h"

class ASubmarinePlayerController;
class UTextBlock;
class UButton;
struct FStoryData;
/**
 * 
 */
UCLASS()
class UStoryWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UButton* NextButton;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* StoryText;

	ASubmarinePlayerController* PlayerController;
	int RowIndex;
	TArray<FStoryData*> StoryData;
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "StoryWidget")
	FDataTableRowHandle StoryRow;
	
	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void NextButtonClicked();
};
