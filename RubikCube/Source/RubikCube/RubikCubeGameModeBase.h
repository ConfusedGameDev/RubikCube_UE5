// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RubikCubeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RUBIKCUBE_API ARubikCubeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int Dimension;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	bool hasWon;


	//Public  Methods	 
	UFUNCTION(BlueprintCallable)
	bool hasCublet();
	
};
