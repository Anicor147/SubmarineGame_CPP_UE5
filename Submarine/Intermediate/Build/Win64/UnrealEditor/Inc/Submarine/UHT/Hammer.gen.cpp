// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/Weapon/Hammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AHammer();
SUBMARINE_API UClass* Z_Construct_UClass_AHammer_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class AHammer
void AHammer::StaticRegisterNativesAHammer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHammer);
UClass* Z_Construct_UClass_AHammer_NoRegister()
{
	return AHammer::StaticClass();
}
struct Z_Construct_UClass_AHammer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Hammer.h" },
		{ "ModuleRelativePath", "Private/Weapon/Hammer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Hammer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Weapon/Hammer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Hammer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Weapon/Hammer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHammer_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHammer, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHammer_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHammer, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHammer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHammer_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHammer_Statics::NewProp_SkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHammer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHammer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(AHammer, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHammer_Statics::ClassParams = {
	&AHammer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHammer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHammer_Statics::Class_MetaDataParams), Z_Construct_UClass_AHammer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHammer()
{
	if (!Z_Registration_Info_UClass_AHammer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHammer.OuterSingleton, Z_Construct_UClass_AHammer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHammer.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<AHammer>()
{
	return AHammer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHammer);
AHammer::~AHammer() {}
// End Class AHammer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Hammer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHammer, AHammer::StaticClass, TEXT("AHammer"), &Z_Registration_Info_UClass_AHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHammer), 3420738839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Hammer_h_1949280194(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Hammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Hammer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
