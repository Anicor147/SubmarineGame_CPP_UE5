// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/TextBlock.h"

#include "PlayerWidget.h"

void UPlayerWidget::SetPromptF(bool Visible)
{
		if (Visible)
    	{
    		PromptF->SetText(FText::FromString(TEXT("F : Inspect")));
    	}
    	else
    	{
    		
    		PromptF->SetText(FText::FromString(TEXT("")));
    	}
    	
}

void UPlayerWidget::SetPromptE(bool Visible)
{
		if (Visible)
    	{
    		PromptE->SetText(FText::FromString(TEXT("E : Interact")));
    	}
    	else
    	{
    		
    		PromptE->SetText(FText::FromString(TEXT("")));
    	}
    	
}

void UPlayerWidget::SetPromptG(bool Visible)
{

	if (Visible)
	{
		PromptG->SetText(FText::FromString(TEXT("G : Drop")));
	}
	else
	{
		
		PromptG->SetText(FText::FromString(TEXT("")));
	}
	
}

void UPlayerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	SetPromptG(false);
	SetPromptF(false);
	SetPromptE(false);
}
