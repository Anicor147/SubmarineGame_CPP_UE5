// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/InteractE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractE() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Interface UInteractE
void UInteractE::StaticRegisterNativesUInteractE()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractE);
UClass* Z_Construct_UClass_UInteractE_NoRegister()
{
	return UInteractE::StaticClass();
}
struct Z_Construct_UClass_UInteractE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/InteractE.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractE_Statics::ClassParams = {
	&UInteractE::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractE_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractE()
{
	if (!Z_Registration_Info_UClass_UInteractE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractE.OuterSingleton, Z_Construct_UClass_UInteractE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractE.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UInteractE>()
{
	return UInteractE::StaticClass();
}
UInteractE::UInteractE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractE);
UInteractE::~UInteractE() {}
// End Interface UInteractE

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_InteractE_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractE, UInteractE::StaticClass, TEXT("UInteractE"), &Z_Registration_Info_UClass_UInteractE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractE), 180728773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_InteractE_h_1042581479(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_InteractE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_InteractE_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
