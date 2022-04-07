// Copyright Epic Games, Inc. All Rights Reserved.

#include "BP_projectGameMode.h"
#include "BP_projectHUD.h"
#include "BP_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABP_projectGameMode::ABP_projectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABP_projectHUD::StaticClass();
}
