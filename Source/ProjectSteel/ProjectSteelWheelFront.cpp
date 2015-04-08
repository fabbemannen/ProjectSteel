// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectSteel.h"
#include "ProjectSteelWheelFront.h"

UProjectSteelWheelFront::UProjectSteelWheelFront(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShapeRadius = 18.f;
	ShapeWidth = 15.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 40.f;
}
