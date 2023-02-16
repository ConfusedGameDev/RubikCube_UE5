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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACublet_NoRegister();
// End Cross Module References
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
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "Public/02_Cube/Cube.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACube_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACube, Dimension), METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::NewProp_Dimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::NewProp_Dimension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_CubletBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACube_Statics::NewProp_Dimension,
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
		{ Z_Construct_UClass_ACube, ACube::StaticClass, TEXT("ACube"), &Z_Registration_Info_UClass_ACube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACube), 555528599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_247536211(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
