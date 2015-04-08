// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "ProjectSteelHud.generated.h"


UCLASS(config = Game)
class AProjectSteelHud : public AHUD
{
	GENERATED_BODY()

public:
	AProjectSteelHud(const FObjectInitializer& ObjectInitializer);

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
