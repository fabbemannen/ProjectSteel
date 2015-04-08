// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectSteel.h"
#include "ProjectSteelGameMode.h"
#include "ProjectSteelPawn.h"
#include "ProjectSteelHud.h"

AProjectSteelGameMode::AProjectSteelGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AProjectSteelPawn::StaticClass();
	HUDClass = AProjectSteelHud::StaticClass();
}
