// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

public :
	UFUNCTION(BlueprintCallable)
	void SetPromptF(bool Visible);

	UFUNCTION(BlueprintCallable)
	void SetPromptE(bool Visible);

	UFUNCTION(BlueprintCallable)
	void SetPromptG(bool Visible);

protected :
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PromptG;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PromptE;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PromptF;

private:
	virtual void NativeConstruct() override;
};
