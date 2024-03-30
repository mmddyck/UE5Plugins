// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Users/Administrator/Desktop/UEPro/P1/MMDD/HostProject/Plugins/MMDD/Source/MMDD/Public/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MMDD_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
MMDD_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MMDD();
// End Cross Module References

// Begin Class UMyBlueprintFunctionLibrary Function fun01
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MD" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "fun01", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execfun01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyBlueprintFunctionLibrary::fun01();
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function fun01

// Begin Class UMyBlueprintFunctionLibrary Function fun02
struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MD" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "fun02", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execfun02)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyBlueprintFunctionLibrary::fun02();
	P_NATIVE_END;
}
// End Class UMyBlueprintFunctionLibrary Function fun02

// Begin Class UMyBlueprintFunctionLibrary
void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
{
	UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "fun01", &UMyBlueprintFunctionLibrary::execfun01 },
		{ "fun02", &UMyBlueprintFunctionLibrary::execfun02 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun01, "fun01" }, // 2348939932
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_fun02, "fun02" }, // 341723374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MMDD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
	&UMyBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
}
template<> MMDD_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
{
	return UMyBlueprintFunctionLibrary::StaticClass();
}
UMyBlueprintFunctionLibrary::UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
// End Class UMyBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_UEPro_P1_MMDD_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 1733946069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_UEPro_P1_MMDD_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_1676028542(TEXT("/Script/MMDD"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_UEPro_P1_MMDD_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_UEPro_P1_MMDD_HostProject_Plugins_MMDD_Source_MMDD_Public_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
