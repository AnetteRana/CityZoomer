// Copyright Epic Games, Inc. All Rights Reserved.

#include "CityZoomerGameMode.h"
#include "CityZoomerHUD.h"
#include "CityZoomerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACityZoomerGameMode::ACityZoomerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACityZoomerHUD::StaticClass();
}
