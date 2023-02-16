// Fill out your copyright notice in the Description page of Project Settings.


#include "02_Cube/Cube.h"

#include "RubikCube/02_Cube/Cublet.h"

// Sets default values
ACube::ACube()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

void ACube::CreateCube()
{
	if(Cublets.Num()>0)
	{
		for (int x=0;x<Cublets.Num();x++)
			Cublets[x]->DestroyCublet();
		Cublets.Empty();
	}
	
	for (int x=0;x<Dimension;x++)
		for (int y=0;y<Dimension;y++)
			for (int z=0;z<Dimension;z++)
			{
				auto newCublet=	GetWorld()->SpawnActor<ACublet>(CubletBase,FVector(x*100,y*100,z*100),FRotator::ZeroRotator);
				Cublets.Add(newCublet);
			}
}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();
	CreateCube();
}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

