// Fill out your copyright notice in the Description page of Project Settings.


#include "02_Cube/Slice.h"

#include "Kismet/KismetMathLibrary.h"
#include "RubikCube/02_Cube/Cublet.h"

// Sets default values for this component's properties
USlice::USlice()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}
void USlice::AddCublet(ACublet* cubletToAdd)
{
	if(!Cublets.Contains(cubletToAdd))
	{
		Cublets.Add(cubletToAdd);
	}
}
void USlice::RotateStart(FRotator Direction)
{
	InitialRotation= GetRelativeRotation();
	FinalRotation= InitialRotation+ Direction;
	RotationDelta=0;
	bIsRotating=true;
}

void USlice::OnRotationEnd()
{
	
	SetRelativeRotation(FinalRotation);
	bIsRotating=false;
	RotationDelta=0;
}

void USlice::OnRotate(float delta)
{
	const auto DeltaRotator = UKismetMathLibrary::RLerp(InitialRotation,FinalRotation,RotationDelta,false);
	SetRelativeRotation(DeltaRotator);
	RotationDelta+=delta;
	if(RotationDelta>=1)
	{
		OnRotationEnd();
	}
}


void USlice::TryRotate(FRotator Direction)
{
	if(bIsRotating) return;
	if(Cublets.Num()>0)
	{
		for (ACublet* cublet : Cublets)
		{
			const FAttachmentTransformRules Rules = FAttachmentTransformRules(EAttachmentRule::KeepWorld,true);
			cublet->AttachToComponent(this,Rules);			
			
			
		}
		RotateStart(Direction);
	}
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

	if(bIsRotating)
	{
		OnRotate(DeltaTime);
	}
	// ...
}

