// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubikCube/Public/GSRubikCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSRubikCube() {}
// Cross Module References
	RUBIKCUBE_API UClass* Z_Construct_UClass_AGSRubikCube_NoRegister();
	RUBIKCUBE_API UClass* Z_Construct_UClass_AGSRubikCube();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_RubikCube();
// End Cross Module References
	void AGSRubikCube::StaticRegisterNativesAGSRubikCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSRubikCube);
	UClass* Z_Construct_UClass_AGSRubikCube_NoRegister()
	{
		return AGSRubikCube::StaticClass();
	}
	struct Z_Construct_UClass_AGSRubikCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSRubikCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSRubikCube_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GSRubikCube.h" },
		{ "ModuleRelativePath", "Public/GSRubikCube.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSRubikCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSRubikCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSRubikCube_Statics::ClassParams = {
		&AGSRubikCube::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGSRubikCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGSRubikCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGSRubikCube()
	{
		if (!Z_Registration_Info_UClass_AGSRubikCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSRubikCube.OuterSingleton, Z_Construct_UClass_AGSRubikCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSRubikCube.OuterSingleton;
	}
	template<> RUBIKCUBE_API UClass* StaticClass<AGSRubikCube>()
	{
		return AGSRubikCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSRubikCube);
	struct Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_GSRubikCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_GSRubikCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSRubikCube, AGSRubikCube::StaticClass, TEXT("AGSRubikCube"), &Z_Registration_Info_UClass_AGSRubikCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSRubikCube), 158177256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_GSRubikCube_h_219951133(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_GSRubikCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_GSRubikCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
