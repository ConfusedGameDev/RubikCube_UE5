// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cublet.generated.h"

UCLASS()
class RUBIKCUBE_API ACublet : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* Mesh;

	FVector OriginalPosition;
	FVector CurrentPosition;

	int CooordX, CoordY,CoordZ;

	void SetPositionAndName(FVector Position);

	void DestroyCublet();

	void SetParent(AActor* newParent);

	inline  void UpdateCoords(int x, int y, int z)
	{
		CooordX=x;
		CoordY= y;
		CoordZ= z;
	}

	ACublet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
