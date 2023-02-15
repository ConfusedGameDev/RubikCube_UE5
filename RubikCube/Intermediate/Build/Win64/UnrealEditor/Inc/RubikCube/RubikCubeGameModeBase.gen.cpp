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
	void ARubikCubeGameModeBase::StaticRegisterNativesARubikCubeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARubikCubeGameModeBase);
	UClass* Z_Construct_UClass_ARubikCubeGameModeBase_NoRegister()
	{
		return ARubikCubeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARubikCubeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARubikCubeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARubikCubeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARubikCubeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARubikCubeGameModeBase_Statics::ClassParams = {
		&ARubikCubeGameModeBase::StaticClass,
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
		{ Z_Construct_UClass_ARubikCubeGameModeBase, ARubikCubeGameModeBase::StaticClass, TEXT("ARubikCubeGameModeBase"), &Z_Registration_Info_UClass_ARubikCubeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARubikCubeGameModeBase), 2903810200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_1159757805(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_RubikCubeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
