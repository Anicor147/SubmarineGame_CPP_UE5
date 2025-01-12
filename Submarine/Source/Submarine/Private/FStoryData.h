#pragma once
#include "FStoryData.generated.h"

USTRUCT(BlueprintType)
struct SUBMARINE_API FStoryData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="StoryData")
	FText Story;
};
