// Fill out your copyright notice in the Description page of Project Settings.


#include "02_Cube/Slice.h"

// Sets default values for this component's properties
USlice::USlice()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}

void USlice::RotateStart(FRotator Direction)
{
	
}

void USlice::OnRotationEnd()
{
	
}

void USlice::OnRotate()
{
	
}


// Called when the game starts
void USlice::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USlice::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

