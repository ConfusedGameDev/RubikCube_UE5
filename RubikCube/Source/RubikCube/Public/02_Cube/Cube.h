// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Pawn.h"
#include "Cube.generated.h"

UCLASS()
class RUBIKCUBE_API ACube : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	TSubclassOf<class ACublet> CubletBase;
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="Rubik")
	int Dimension;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Rubik")
	float CubletSize=105;
	TArray< ACublet*> Cublets;
	ACublet** Cublets3D;
	ACublet**** Cublets3D2;
	ACublet* CurrentCublet;

	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UCameraComponent* CameraComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class USpringArmComponent* SpringComponent;

	UPROPERTY(VisibleAnywhere)
	TArray<class USlice*> SlicesX;
	UPROPERTY(VisibleAnywhere)
	TArray<USlice*> SlicesY;
	UPROPERTY(VisibleAnywhere)
	TArray<USlice*> SlicesZ;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input)
	class UInputMappingContext* CubeInputContext;

	
	
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input)
	//class UInputMappingContext* CubeInputContext;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Input)
	class UInputAction* ClickInputAction;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Input)
	class UInputAction* RotateCameraInputAction;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Input)
	class UInputAction* ZoomInputAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector2D MouseInitialPos;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector2D MouseFinalPos;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector2D MouseSlideMinimum=FVector2D(100,100);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	FVector2D  MaxRotationX= FVector2D(-180,180);
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	FVector2D  MaxMinZoom= FVector2D(250,750);
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	float CameraZoom=250.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Camera")
	float CameraZoomSpeed=25.f;

	FVector lastHitNormal;
	// Sets default values for this pawn's properties
	ACube();
	UFUNCTION(BlueprintCallable)
	void CreateCube();

	UFUNCTION(BlueprintCallable)
	ACublet* GetCubletAtIndex(int x, int y, int z);

	void InsertCubletAtIndex(int x, int y, int z, ACublet* newCublet);

	float GetValidAngle(float angle);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual  void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnMouseClickStart(const FInputActionValue& Value);
	void OnCameraMove(const FInputActionValue& Value);
	void OnMouseClickEnd(const FInputActionValue& Value);
	void OnCameraZoom(const FInputActionValue& Value);
	
};

