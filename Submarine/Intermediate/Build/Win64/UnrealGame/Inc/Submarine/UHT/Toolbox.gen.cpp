// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/Weapon/Toolbox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolbox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AToolbox();
SUBMARINE_API UClass* Z_Construct_UClass_AToolbox_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class AToolbox
void AToolbox::StaticRegisterNativesAToolbox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToolbox);
UClass* Z_Construct_UClass_AToolbox_NoRegister()
{
	return AToolbox::StaticClass();
}
struct Z_Construct_UClass_AToolbox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Toolbox.h" },
		{ "ModuleRelativePath", "Private/Weapon/Toolbox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Toolbox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Weapon/Toolbox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolBMesh_MetaData[] = {
		{ "Category", "Toolbox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Weapon/Toolbox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolBMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToolbox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToolbox_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToolbox, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToolbox_Statics::NewProp_ToolBMesh = { "ToolBMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToolbox, ToolBMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolBMesh_MetaData), NewProp_ToolBMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToolbox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToolbox_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToolbox_Statics::NewProp_ToolBMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToolbox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AToolbox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToolbox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AToolbox_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(AToolbox, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToolbox_Statics::ClassParams = {
	&AToolbox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AToolbox_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AToolbox_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToolbox_Statics::Class_MetaDataParams), Z_Construct_UClass_AToolbox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToolbox()
{
	if (!Z_Registration_Info_UClass_AToolbox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToolbox.OuterSingleton, Z_Construct_UClass_AToolbox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToolbox.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<AToolbox>()
{
	return AToolbox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToolbox);
AToolbox::~AToolbox() {}
// End Class AToolbox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToolbox, AToolbox::StaticClass, TEXT("AToolbox"), &Z_Registration_Info_UClass_AToolbox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToolbox), 3247133340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_2805639245(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
