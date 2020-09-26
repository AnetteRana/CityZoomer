// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CityZoomerHUD.generated.h"

UCLASS()
class ACityZoomerHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACityZoomerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

