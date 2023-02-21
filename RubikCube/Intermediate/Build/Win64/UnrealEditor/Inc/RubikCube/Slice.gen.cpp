// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubikCube/Public/02_Cube/Slice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlice() {}
// Cross Module References
	RUBIKCUBE_API UClass* Z_Construct_UClass_USlice_NoRegister();
	RUBIKCUBE_API UClass* Z_Construct_UClass_USlice();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_RubikCube();
// End Cross Module References
	void USlice::StaticRegisterNativesUSlice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlice);
	UClass* Z_Construct_UClass_USlice_NoRegister()
	{
		return USlice::StaticClass();
	}
	struct Z_Construct_UClass_USlice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RubikCube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "02_Cube/Slice.h" },
		{ "ModuleRelativePath", "Public/02_Cube/Slice.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlice_Statics::ClassParams = {
		&USlice::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlice()
	{
		if (!Z_Registration_Info_UClass_USlice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlice.OuterSingleton, Z_Construct_UClass_USlice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlice.OuterSingleton;
	}
	template<> RUBIKCUBE_API UClass* StaticClass<USlice>()
	{
		return USlice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlice);
	struct Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Slice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Slice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlice, USlice::StaticClass, TEXT("USlice"), &Z_Registration_Info_UClass_USlice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlice), 1351302371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Slice_h_2406167989(TEXT("/Script/RubikCube"),
		Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Slice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RubikCube_Source_RubikCube_Public_02_Cube_Slice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
