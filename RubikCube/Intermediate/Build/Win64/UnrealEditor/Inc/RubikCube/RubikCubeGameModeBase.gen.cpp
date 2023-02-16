// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubikCube/RubikCubeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRubikCubeGameModeBase() {}
// Cross Module References
	RUBIKCUBE_API UClass* Z_Construct_UClass_ARubikCubeGameModeBase_NoRegister();
	RUBIKCUBE_API UClass* Z_Construct_UClass_ARubikCubeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RubikCube();
// End Cross Module References
	DEFINE_FUNCTION(ARubikCubeGameModeBase::exechasCublet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->hasCublet();
		P_NATIVE_END;
	}
	void ARubikCubeGameModeBase::StaticRegisterNativesARubikCubeGameModeBase()
	{
		UClass* Class = ARubikCubeGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "hasCublet", &ARubikCubeGameModeBase::exechasCublet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics
	{
		struct RubikCubeGameModeBase_eventhasCublet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RubikCubeGameModeBase_eventhasCublet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RubikCubeGameModeBase_eventhasCublet_Parms), &Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Public  Methods\x09 \n" },
		{ "ModuleRelativePath", "RubikCubeGameModeBase.h" },
		{ "ToolTip", "Public  Methods" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARubikCubeGameModeBase, nullptr, "hasCublet", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::RubikCubeGameModeBase_eventhasCublet_Parms), Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARubikCubeGameModeBase);
	UClass* Z_Construct_UClass_ARubikCubeGameModeBase_NoRegister()
	{
		return ARubikCubeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARubikCubeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasWon_MetaData[];
#endif
		static void NewProp_hasWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasWon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARubikCubeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARubikCubeGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARubikCubeGameModeBase_hasCublet, "hasCublet" }, // 901067785
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARubikCubeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RubikCubeGameModeBase.h" },
		{ "ModuleRelativePath", "RubikCubeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon_MetaData[] = {
		{ "Category", "RubikCubeGameModeBase" },
		{ "ModuleRelativePath", "RubikCubeGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon_SetBit(void* Obj)
	{
		((ARubikCubeGameModeBase*)Obj)->hasWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon = { "hasWon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARubikCubeGameModeBase), &Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARubikCubeGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARubikCubeGameModeBase_Statics::NewProp_hasWon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARubikCubeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARubikCubeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARubikCubeGameModeBase_Statics::ClassParams = {
		&ARubikCubeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARubikCubeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARubikCubeGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARubikCubeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARubikCubeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARubikCubeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARubikCubeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARubikCubeGameModeBase.OuterSingleton, Z_Construct_UClass_ARubikCubeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARubikCubeGameModeBase.OuterSingleton;
	}
	template<> RUBIKCUBE_API UClass* StaticClass<ARubikCubeGameModeBase>()
	{
		return ARubikCubeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARubikCubeGameModeBase);
	struct Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARubikCubeGameModeBase, ARubikCubeGameModeBase::StaticClass, TEXT("ARubikCubeGameModeBase"), &Z_Registration_Info_UClass_ARubikCubeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARubikCubeGameModeBase), 1274344900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_2862677585(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
