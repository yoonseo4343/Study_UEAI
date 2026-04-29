// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEAIGameMode.h"
#include "UEAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEAIGameMode::AUEAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
