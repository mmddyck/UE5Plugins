// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMDD_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define MMDD_MyBlueprintFunctionLibrary_generated_h

#define FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execfun02); \
	DECLARE_FUNCTION(execfun01);


#define FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MMDD"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	NO_API virtual ~UMyBlueprintFunctionLibrary();


#define FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMDD_API UClass* StaticClass<class UMyBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
