// Copyright Epic Games, Inc. All Rights Reserved.

#include "EndlessSummonerGameMode.h"
#include "EndlessSummonerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEndlessSummonerGameMode::AEndlessSummonerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
