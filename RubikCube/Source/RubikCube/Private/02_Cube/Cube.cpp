// Fill out your copyright notice in the Description page of Project Settings.


#include "02_Cube/Cube.h"

#include "GSRubikCube.h"
#include "Camera/CameraComponent.h"
#include  "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "02_Cube/Slice.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RubikCube/02_Cube/Cublet.h"
//This is for Createing Runtime Objects
#include "UObject/UObjectGlobals.h"
// Sets default values
ACube::ACube()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer= EAutoReceiveInput::Player0;
	SpringComponent= CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring"));
	SpringComponent->SetupAttachment(GetRootComponent());
	SpringComponent->TargetArmLength=250.0f;
	SpringComponent->bEnableCameraRotationLag=false;
	CameraComponent= CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringComponent);
	 
	
}

void ACube::CreateCube()
{
	if(Cublets.Num()>0)
	{
		for (int x=0;x<Cublets.Num();x++)
			Cublets[x]->DestroyCublet();
		Cublets.Empty();
		delete(Cublets3D);
	}
	Cublets3D= new  ACublet*[Dimension*Dimension*Dimension];
	Cublets3D2= new ACublet***[Dimension];
	for (int x=0;x<Dimension;x++)
	{
		Cublets3D2[x]= new ACublet**[Dimension];
		for (int y=0;y<Dimension;y++)
		{
			Cublets3D2[x][y]= new  ACublet*[Dimension];			
		}
	}
	
	int SliceCounter=0;
	for (int x=0;x<Dimension;x++)
	{
		for (int y=0;y<Dimension;y++)
		{
			for (int z=0;z<Dimension;z++)
			{				
				auto newCublet=	GetWorld()->SpawnActor<ACublet>(CubletBase,FVector((x-1)*CubletSize,(y-1)*CubletSize,(z-1)*CubletSize),FRotator::ZeroRotator);
				Cublets.Add(newCublet);
				newCublet->UpdateCoords(x,y,z);
				InsertCubletAtIndex(x,y,z,newCublet);
				if(SlicesX.Num()>SliceCounter)
				newCublet->SetupSlice(SlicesX[SliceCounter]);
				 
			}
		}
		SliceCounter++;
	}
}

ACublet* ACube::GetCubletAtIndex(int x, int y, int z)
{
	 
		auto CUblet=(Cublets3D+x*Dimension*Dimension+y*Dimension+z); 
		
		auto CUblet2=Cublets3D2[x][y][z];
		return CUblet2;  
	 
}

void ACube::InsertCubletAtIndex(int x, int y, int z, ACublet* newCublet)
{
	*(Cublets3D+x*Dimension*Dimension+y*Dimension+z)=newCublet; 
		
	Cublets3D2[x][y][z]=newCublet;
	UE_LOG(LogTemp,Warning,TEXT("added cube %i , %i , %i"),x,y,z);
}

float ACube::GetValidAngle(float angle)
{
	if (angle > 360.f) angle -= 360.f;
	else if (angle < 0.f) angle += 360.f;
	return angle;
}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();
	
	if(APlayerController* Player= Cast<APlayerController>(Controller))
	{		
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Player->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(CubeInputContext,0);
			
		}
		Player->bShowMouseCursor=true;
	}
	
	CreateCube();
}

void ACube::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	for (int i=0; i<Dimension; i++)
	{
		USlice* NewSliceX= NewObject<USlice>(this, FName(TEXT("SliceX_%i"),i),EObjectFlags::RF_Standalone);
		NewSliceX->RegisterComponent();
		
		NewSliceX->SetupAttachment(GetRootComponent());
		NewSliceX->SetRelativeLocation(FVector((i-(Dimension/2))*CubletSize,0,0));
		SlicesX.Add(NewSliceX);

		USlice* NewSliceY=   NewObject<USlice>(this, FName(TEXT("SliceY_%i"),i),EObjectFlags::RF_Standalone);
		NewSliceY->RegisterComponent();
		
		NewSliceY->SetupAttachment(GetRootComponent());
		NewSliceY->SetRelativeLocation(FVector(0,(i-(Dimension/2))*CubletSize,0));
		SlicesY.Add(NewSliceY);
		USlice* NewSliceZ=   NewObject<USlice>(this, FName(TEXT("SliceZ_%i"),i),EObjectFlags::RF_Standalone);
		NewSliceZ->RegisterComponent();		
		NewSliceZ->SetupAttachment(GetRootComponent());
		NewSliceZ->SetRelativeLocation(FVector(0,0,(i-(Dimension/2))*CubletSize));
		SlicesZ.Add(NewSliceY);
		
	}
	 
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
	
	if(UEnhancedInputComponent* UEIC= CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		UEIC->BindAction(ClickInputAction,ETriggerEvent::Started,this,&ACube::OnMouseClickStart);
		UEIC->BindAction(RotateCameraInputAction,ETriggerEvent::Triggered,this,&ACube::OnCameraMove);
		UEIC->BindAction(ZoomInputAction, ETriggerEvent::Triggered,this, &ACube::OnCameraZoom);
		UEIC->BindAction(ClickInputAction,ETriggerEvent::Completed,this,&ACube::OnMouseClickEnd);
	}
}

void ACube::OnMouseClickStart(const FInputActionValue& Value)
{
	GEngine->AddOnScreenDebugMessage(0,1.f,FColor(1,0,0),FString::Printf(TEXT("OnClick start")));

	if(auto PlayerController=Cast<APlayerController>(Controller))
	{
		PlayerController->GetMousePosition(MouseInitialPos.X,MouseInitialPos.Y);
		FHitResult Hit;
		PlayerController->GetHitResultAtScreenPosition(MouseInitialPos,ECollisionChannel::ECC_Visibility,false,Hit);
		CurrentCublet= Cast<ACublet>(Hit.GetActor());
		//Normal Z1= Top Y1= side X1= Front
		lastHitNormal= Hit.Normal;
		if(!CurrentCublet)
		{
			return;
		}
 		
		auto CurrentCublet2= GetCubletAtIndex(CurrentCublet->CooordX,
		                                      CurrentCublet->CoordY,
		                                      CurrentCublet->CoordZ);
		if(CurrentCublet2)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),FString::Printf(TEXT("Found Cube %s with Normal %s"),*CurrentCublet2->GetName(), *Hit.Normal.ToString()));
		}
	}
}

void ACube::OnCameraMove(const FInputActionValue& Value)
{
	if(!CurrentCublet && SpringComponent)
	{
		FRotator OriginalRotation= SpringComponent->GetRelativeRotation();
		FVector2D RotationDelta=Value.Get<FVector2D>();
		if(FMath::Abs(RotationDelta.X)>FMath::Abs(RotationDelta.Y))
		{
			RotationDelta.Y=0;
		}
		else
		{
			RotationDelta.X=0;
		}
		RotationDelta.Y= OriginalRotation.Pitch+ RotationDelta.Y>MaxRotationX.X && OriginalRotation.Pitch+RotationDelta.Y<MaxRotationX.Y? RotationDelta.Y:0;
		RotationDelta.X= GetValidAngle(RotationDelta.X);
		 
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f , %f, %f"), OriginalRotation.GetComponentForAxis(EAxis::X), OriginalRotation.GetComponentForAxis(EAxis::Y),OriginalRotation.GetComponentForAxis(EAxis::Z)));
		auto newRot=SpringComponent->GetRelativeRotation()+FRotator(RotationDelta.Y,RotationDelta.X,0);
		newRot.Roll=0;
		SpringComponent->SetRelativeRotation(newRot);
	}
}

void ACube::OnCameraZoom(const FInputActionValue& Value)
{
	auto newZoom= FMath::Clamp(SpringComponent->TargetArmLength+Value.Get<float>()*CameraZoomSpeed,MaxMinZoom.X,MaxMinZoom.Y); 
	SpringComponent->TargetArmLength= newZoom;
}
void ACube::OnMouseClickEnd(const FInputActionValue& Value)
{
	GEngine->AddOnScreenDebugMessage(0,1.f,FColor(1,0,0),FString::Printf(TEXT("OnClick end")));

	if(auto PlayerController=Cast<APlayerController>(Controller))
	{
		if(!CurrentCublet) return;
		
		PlayerController->GetMousePosition(MouseFinalPos.X,MouseFinalPos.Y);
		float DeltaX= MouseFinalPos.X-MouseInitialPos.X;
		float DeltaY= MouseFinalPos.Y-MouseInitialPos.Y;
		if(FMath::Abs(DeltaX)>MouseSlideMinimum.X||FMath::Abs(DeltaY)>MouseSlideMinimum.Y)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),FString::Printf(TEXT("Should Slide")));
			CurrentCublet->TryToRotate(DeltaX,DeltaY,lastHitNormal);
			
		}
		CurrentCublet=nullptr;
	}
}

