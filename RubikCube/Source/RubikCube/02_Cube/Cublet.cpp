// Fill out your copyright notice in the Description page of Project Settings.


#include "Cublet.h"



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
	 
	if( FMath::Abs(Normal.Z)>0.75f)
		{
			float Direction = Normal.Z>0? 1:-1;
			if(FMath::Abs(DeltaX)>FMath::Abs(DeltaY) && OwningSliceX)
			OwningSliceX->AddLocalRotation(FRotator(0,0, DeltaX>0?90*Direction:-90*Direction));
		}
	
	 
}

void ACublet::SetupSlice(USlice* NewOwningSlice)
{
	OwningSliceX= NewOwningSlice;
	
	const FAttachmentTransformRules Rules = FAttachmentTransformRules(EAttachmentRule::KeepWorld,true);				

	AttachToComponent(OwningSliceX,Rules);
}

