// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubikCube/02_Cube/Cublet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCublet() {}
// Cross Module References
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACublet_NoRegister();
	RUBIKCUBE_API UClass* Z_Construct_UClass_ACublet();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RubikCube();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACublet::StaticRegisterNativesACublet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACublet);
	UClass* Z_Construct_UClass_ACublet_NoRegister()
	{
		return ACublet::StaticClass();
	}
	struct Z_Construct_UClass_ACublet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACublet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACublet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "02_Cube/Cublet.h" },
		{ "ModuleRelativePath", "02_Cube/Cublet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACublet_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Cublet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "02_Cube/Cublet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACublet_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACublet, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACublet_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACublet_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACublet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACublet_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACublet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACublet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACublet_Statics::ClassParams = {
		&ACublet::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACublet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACublet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACublet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACublet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACublet()
	{
		if (!Z_Registration_Info_UClass_ACublet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACublet.OuterSingleton, Z_Construct_UClass_ACublet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACublet.OuterSingleton;
	}
	template<> RUBIKCUBE_API UClass* StaticClass<ACublet>()
	{
		return ACublet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACublet);
	struct Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_02_Cube_Cublet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_02_Cube_Cublet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACublet, ACublet::StaticClass, TEXT("ACublet"), &Z_Registration_Info_UClass_ACublet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACublet), 3068614068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_02_Cube_Cublet_h_3855327135(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_02_Cube_Cublet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_02_Cube_Cublet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
