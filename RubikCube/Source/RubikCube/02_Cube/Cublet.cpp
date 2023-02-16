// Fill out your copyright notice in the Description page of Project Settings.


#include "Cublet.h"


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

