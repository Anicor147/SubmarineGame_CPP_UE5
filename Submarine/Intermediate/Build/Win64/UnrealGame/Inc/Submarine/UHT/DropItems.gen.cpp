// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/DropItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropItems() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SUBMARINE_API UClass* Z_Construct_UClass_UDropItems();
SUBMARINE_API UClass* Z_Construct_UClass_UDropItems_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Interface UDropItems
void UDropItems::StaticRegisterNativesUDropItems()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropItems);
UClass* Z_Construct_UClass_UDropItems_NoRegister()
{
	return UDropItems::StaticClass();
}
struct Z_Construct_UClass_UDropItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DropItems.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDropItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDropItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropItems_Statics::ClassParams = {
	&UDropItems::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropItems_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDropItems()
{
	if (!Z_Registration_Info_UClass_UDropItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropItems.OuterSingleton, Z_Construct_UClass_UDropItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDropItems.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UDropItems>()
{
	return UDropItems::StaticClass();
}
UDropItems::UDropItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDropItems);
UDropItems::~UDropItems() {}
// End Interface UDropItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DropItems_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDropItems, UDropItems::StaticClass, TEXT("UDropItems"), &Z_Registration_Info_UClass_UDropItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropItems), 4134935668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DropItems_h_3038471203(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DropItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DropItems_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
