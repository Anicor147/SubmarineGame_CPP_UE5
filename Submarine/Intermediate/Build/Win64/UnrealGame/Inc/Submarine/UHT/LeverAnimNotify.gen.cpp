// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/LeverAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SUBMARINE_API UClass* Z_Construct_UClass_ULeverAnimNotify();
SUBMARINE_API UClass* Z_Construct_UClass_ULeverAnimNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ULeverAnimNotify
void ULeverAnimNotify::StaticRegisterNativesULeverAnimNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeverAnimNotify);
UClass* Z_Construct_UClass_ULeverAnimNotify_NoRegister()
{
	return ULeverAnimNotify::StaticClass();
}
struct Z_Construct_UClass_ULeverAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LeverAnimNotify.h" },
		{ "ModuleRelativePath", "Private/LeverAnimNotify.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeverAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULeverAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeverAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeverAnimNotify_Statics::ClassParams = {
	&ULeverAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeverAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeverAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeverAnimNotify()
{
	if (!Z_Registration_Info_UClass_ULeverAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeverAnimNotify.OuterSingleton, Z_Construct_UClass_ULeverAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeverAnimNotify.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ULeverAnimNotify>()
{
	return ULeverAnimNotify::StaticClass();
}
ULeverAnimNotify::ULeverAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeverAnimNotify);
ULeverAnimNotify::~ULeverAnimNotify() {}
// End Class ULeverAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeverAnimNotify, ULeverAnimNotify::StaticClass, TEXT("ULeverAnimNotify"), &Z_Registration_Info_UClass_ULeverAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeverAnimNotify), 3859891879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverAnimNotify_h_948842036(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
