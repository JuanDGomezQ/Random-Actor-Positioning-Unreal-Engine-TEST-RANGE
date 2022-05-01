// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestRangeGameMode.h"
#include "TestRangeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestRangeGameMode::ATestRangeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
