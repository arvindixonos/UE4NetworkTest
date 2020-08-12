// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkSessionTestGameMode.h"
#include "NetworkSessionTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkSessionTestGameMode::ANetworkSessionTestGameMode()
{
	//// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}
