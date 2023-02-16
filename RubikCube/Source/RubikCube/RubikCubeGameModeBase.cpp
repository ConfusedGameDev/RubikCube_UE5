// Copyright Epic Games, Inc. All Rights Reserved.


#include "RubikCubeGameModeBase.h"

#include "02_Cube/Cublet.h"

void ARubikCubeGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ARubikCubeGameModeBase::hasCublet()
{
	return  false;
}
