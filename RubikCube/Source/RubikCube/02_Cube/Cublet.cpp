// Fill out your copyright notice in the Description page of Project Settings.


#include "Cublet.h"

#include "02_Cube/Slice.h"


void ACublet::DestroyCublet()
{
	Destroy();
}

// Sets default values
ACublet::ACublet()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubletMesh"));
	SetRootComponent(Mesh);

}

// Called when the game starts or when spawned
void ACublet::BeginPlay()
{
	Super::BeginPlay();
	
}

 

// Called every frame
void ACublet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACublet::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACublet::TryToRotate(float DeltaX, float DeltaY, FVector Normal)
{
	
	 //Rotate X Slice
	if( FMath::Abs(Normal.Z)>0.75f)
		{
			float Direction = Normal.Z>0? 1:-1;
			if(FMath::Abs(DeltaX)>FMath::Abs(DeltaY) && OwningSliceX)
			{
				
				OwningSliceX->TryRotate(FRotator(0,0, DeltaX>0?90*Direction:-90*Direction));
			}
		}
	//Rotate Y Slice
	else if( FMath::Abs(Normal.Y)>0.75f)
	{
		float Direction = Normal.Y>0? 1:-1;
		if(FMath::Abs(DeltaX)<FMath::Abs(DeltaY) && OwningSliceY)
		{
		 
			OwningSliceY->TryRotate (FRotator(0,0, DeltaX>0?90*Direction:-90*Direction));
		}
	}
	//Rotate Z Slice
	else if( FMath::Abs(Normal.X)>0.75f)
	{
		float Direction = Normal.X>0? 1:-1;
		if(FMath::Abs(DeltaX)>FMath::Abs(DeltaY) && OwningSliceZ)
		{
			 
			OwningSliceZ->TryRotate(FRotator(0,DeltaX>0?90*Direction:-90*Direction, 0));
		}
		else if(OwningSliceY)
		{
		 
			OwningSliceY->TryRotate (FRotator(DeltaY>0?-90*Direction:90*Direction,0, 0));
		}
	}
	
	 
}

void ACublet::SetupSlice(USlice* NewOwningSlice, ESliceType SliceType)
{
	NewOwningSlice->AddCublet(this);			
	switch (SliceType)
	{
		case ESliceType::ESliceTypeX:
			OwningSliceX= NewOwningSlice;
			
			break;
		case ESliceType::ESliceTypeY:
			OwningSliceY= NewOwningSlice;
			 
			break;
		case ESliceType::ESliceTypeZ:
			OwningSliceZ= NewOwningSlice;
			 
			break;
		default: ;
	}
	
}

