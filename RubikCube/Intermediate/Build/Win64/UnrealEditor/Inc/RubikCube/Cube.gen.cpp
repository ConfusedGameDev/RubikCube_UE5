// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubikCube/Public/02_Cube/Cube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube() {}
// Cross Module References
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACube_NoRegister();
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACube();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RubikCube();
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACublet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(ACube::execGetCubletAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACublet**)Z_Param__Result=P_THIS->GetCubletAtIndex(Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACube::execCreateCube)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateCube();
		P_NATIVE_END;
	}
	void ACube::StaticRegisterNativesACube()
	{
		UClass* Class = ACube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCube", &ACube::execCreateCube },
			{ "GetCubletAtIndex", &ACube::execGetCubletAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACube_CreateCube_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_CreateCube_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_CreateCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube, nullptr, "CreateCube", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_CreateCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_CreateCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_CreateCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACube_CreateCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics
	{
		struct Cube_eventGetCubletAtIndex_Parms
		{
			int32 x;
			int32 y;
			int32 z;
			ACublet* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_eventGetCubletAtIndex_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_eventGetCubletAtIndex_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_eventGetCubletAtIndex_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cube_eventGetCubletAtIndex_Parms, ReturnValue), Z_Construct_UClass_ACublet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACube, nullptr, "GetCubletAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::Cube_eventGetCubletAtIndex_Parms), Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACube_GetCubletAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACube_GetCubletAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACube);
	UClass* Z_Construct_UClass_ACube_NoRegister()
	{
		return ACube::StaticClass();
	}
	struct Z_Construct_UClass_ACube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubletBase_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CubletBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Dimension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubletSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubletSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceX0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceX0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceX1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceX1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceX2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceX2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceY0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceY0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceY1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceY1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceY2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceY2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceZ0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceZ0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceZ1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceZ1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceZ2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceZ2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeInputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeInputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateCameraInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseInitialPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseInitialPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseFinalPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseFinalPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSlideMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseSlideMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotationX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMinZoom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMinZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACube_CreateCube, "CreateCube" }, // 3538120038
		{ &Z_Construct_UFunction_ACube_GetCubletAtIndex, "GetCubletAtIndex" }, // 724941429
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "02_Cube/Cube.h" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CubletBase_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CubletBase = { "CubletBase", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CubletBase), Z_Construct_UClass_ACublet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CubletBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CubletBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_Dimension_MetaData[] = {
		{ "Category", "Rubik" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, Dimension), METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_Dimension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CubletSize_MetaData[] = {
		{ "Category", "Rubik" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CubletSize = { "CubletSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CubletSize), METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CubletSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CubletSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SpringComponent_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SpringComponent = { "SpringComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SpringComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SpringComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SpringComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceX0_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceX0 = { "SliceX0", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceX0), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceX0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceX0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceX1_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceX1 = { "SliceX1", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceX1), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceX1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceX1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceX2_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceX2 = { "SliceX2", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceX2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceX2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceX2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceY0_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceY0 = { "SliceY0", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceY0), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceY0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceY0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceY1_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceY1 = { "SliceY1", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceY1), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceY1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceY1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceY2_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceY2 = { "SliceY2", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceY2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceY2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceY2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceZ0_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceZ0 = { "SliceZ0", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceZ0), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceZ1_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceZ1 = { "SliceZ1", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceZ1), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_SliceZ2_MetaData[] = {
		{ "Category", "Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_SliceZ2 = { "SliceZ2", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, SliceZ2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_SliceZ2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CubeInputContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CubeInputContext = { "CubeInputContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CubeInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CubeInputContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CubeInputContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_ClickInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input)\n//class UInputMappingContext* CubeInputContext;\n" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input)\nclass UInputMappingContext* CubeInputContext;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_ClickInputAction = { "ClickInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, ClickInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_ClickInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_ClickInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_RotateCameraInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_RotateCameraInputAction = { "RotateCameraInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, RotateCameraInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_RotateCameraInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_RotateCameraInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_ZoomInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_ZoomInputAction = { "ZoomInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, ZoomInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_ZoomInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_ZoomInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_MouseInitialPos_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_MouseInitialPos = { "MouseInitialPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, MouseInitialPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_MouseInitialPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_MouseInitialPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_MouseFinalPos_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_MouseFinalPos = { "MouseFinalPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, MouseFinalPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_MouseFinalPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_MouseFinalPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_MouseSlideMinimum_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_MouseSlideMinimum = { "MouseSlideMinimum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, MouseSlideMinimum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_MouseSlideMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_MouseSlideMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_MaxRotationX_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_MaxRotationX = { "MaxRotationX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, MaxRotationX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_MaxRotationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_MaxRotationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_MaxMinZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_MaxMinZoom = { "MaxMinZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, MaxMinZoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_MaxMinZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_MaxMinZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CameraZoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CameraZoom = { "CameraZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CameraZoom), METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CameraZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CameraZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, CameraZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_CameraZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_CameraZoomSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CubletBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_Dimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CubletSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SpringComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceX0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceX1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceX2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceY0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceY1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceY2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceZ0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceZ1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_SliceZ2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CubeInputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_ClickInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_RotateCameraInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_ZoomInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_MouseInitialPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_MouseFinalPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_MouseSlideMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_MaxRotationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_MaxMinZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CameraZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CameraZoomSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACube_Statics::ClassParams = {
		&ACube::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACube()
	{
		if (!Z_Registration_Info_UClass_ACube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACube.OuterSingleton, Z_Construct_UClass_ACube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACube.OuterSingleton;
	}
	template<> RUBIKCUBE_API UClass* StaticClass<ACube>()
	{
		return ACube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACube);
	struct Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACube, ACube::StaticClass, TEXT("ACube"), &Z_Registration_Info_UClass_ACube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACube), 2864949255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_3302850772(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
