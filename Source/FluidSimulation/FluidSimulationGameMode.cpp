// Copyright Epic Games, Inc. All Rights Reserved.

#include "FluidSimulationGameMode.h"
#include "FluidSimulationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFluidSimulationGameMode::AFluidSimulationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
