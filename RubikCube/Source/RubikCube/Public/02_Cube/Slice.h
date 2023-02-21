// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Slice.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RUBIKCUBE_API USlice : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USlice();

	FTimer RotationTimer;
	bool isRotating;
	void RotateStart(FRotator Direction);
	void OnRotationEnd();
	void OnRotate();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
