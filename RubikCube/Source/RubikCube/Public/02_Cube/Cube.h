// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cube.generated.h"

UCLASS()
class RUBIKCUBE_API ACube : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	TSubclassOf<class ACublet> CubletBase;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int Dimension;
	
	TArray< ACublet*> Cublets;
	 
	// Sets default values for this pawn's properties
	ACube();
	UFUNCTION(BlueprintCallable)
	void CreateCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
