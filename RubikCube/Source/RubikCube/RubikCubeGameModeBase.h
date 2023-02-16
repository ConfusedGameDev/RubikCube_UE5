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
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	bool hasWon;

	virtual  void BeginPlay() override;

	//Public  Methods	 
	UFUNCTION(BlueprintCallable)
	bool hasCublet();
	
};
