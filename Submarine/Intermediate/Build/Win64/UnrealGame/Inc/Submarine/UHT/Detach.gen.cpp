// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/Detach.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetach() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SUBMARINE_API UClass* Z_Construct_UClass_UDetach();
SUBMARINE_API UClass* Z_Construct_UClass_UDetach_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Interface UDetach
void UDetach::StaticRegisterNativesUDetach()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetach);
UClass* Z_Construct_UClass_UDetach_NoRegister()
{
	return UDetach::StaticClass();
}
struct Z_Construct_UClass_UDetach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Detach.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDetach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDetach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetach_Statics::ClassParams = {
	&UDetach::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetach_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetach_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetach()
{
	if (!Z_Registration_Info_UClass_UDetach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetach.OuterSingleton, Z_Construct_UClass_UDetach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetach.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UDetach>()
{
	return UDetach::StaticClass();
}
UDetach::UDetach(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetach);
UDetach::~UDetach() {}
// End Interface UDetach

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Detach_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetach, UDetach::StaticClass, TEXT("UDetach"), &Z_Registration_Info_UClass_UDetach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetach), 1716038064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Detach_h_2292881398(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Detach_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Detach_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
