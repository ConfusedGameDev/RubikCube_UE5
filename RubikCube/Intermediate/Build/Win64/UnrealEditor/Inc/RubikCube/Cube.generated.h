// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACublet;
#ifdef RUBIKCUBE_Cube_generated_h
#error "Cube.generated.h already included, missing '#pragma once' in Cube.h"
#endif
#define RUBIKCUBE_Cube_generated_h

#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_SPARSE_DATA
#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCubletAtIndex); \
	DECLARE_FUNCTION(execCreateCube);


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCubletAtIndex); \
	DECLARE_FUNCTION(execCreateCube);


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACube(); \
	friend struct Z_Construct_UClass_ACube_Statics; \
public: \
	DECLARE_CLASS(ACube, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RubikCube"), NO_API) \
	DECLARE_SERIALIZER(ACube)


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACube(); \
	friend struct Z_Construct_UClass_ACube_Statics; \
public: \
	DECLARE_CLASS(ACube, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RubikCube"), NO_API) \
	DECLARE_SERIALIZER(ACube)


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACube(ACube&&); \
	NO_API ACube(const ACube&); \
public:


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACube(ACube&&); \
	NO_API ACube(const ACube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACube)


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_10_PROLOG
#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_SPARSE_DATA \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_RPC_WRAPPERS \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_INCLASS \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_SPARSE_DATA \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_INCLASS_NO_PURE_DECLS \
	FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUBIKCUBE_API UClass* StaticClass<class ACube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RubikCube_Source_RubikCube_Public_02_Cube_Cube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
