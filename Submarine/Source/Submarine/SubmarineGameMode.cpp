// Copyright Epic Games, Inc. All Rights Reserved.

#include "SubmarineGameMode.h"
#include "SubmarineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASubmarineGameMode::ASubmarineGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
