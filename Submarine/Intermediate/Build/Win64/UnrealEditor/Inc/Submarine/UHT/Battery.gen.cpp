// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/GeneratorScripts/Battery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattery() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ABattery();
SUBMARINE_API UClass* Z_Construct_UClass_ABattery_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ABattery
void ABattery::StaticRegisterNativesABattery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABattery);
UClass* Z_Construct_UClass_ABattery_NoRegister()
{
	return ABattery::StaticClass();
}
struct Z_Construct_UClass_ABattery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorScripts/Battery.h" },
		{ "ModuleRelativePath", "Private/GeneratorScripts/Battery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Battery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GeneratorScripts/Battery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatteryMesh_MetaData[] = {
		{ "Category", "Battery" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GeneratorScripts/Battery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BatteryMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattery, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_Statics::NewProp_BatteryMesh = { "BatteryMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattery, BatteryMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatteryMesh_MetaData), NewProp_BatteryMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_Statics::NewProp_BatteryMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABattery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABattery_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ABattery, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattery_Statics::ClassParams = {
	&ABattery::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABattery_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattery()
{
	if (!Z_Registration_Info_UClass_ABattery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattery.OuterSingleton, Z_Construct_UClass_ABattery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattery.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ABattery>()
{
	return ABattery::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattery);
ABattery::~ABattery() {}
// End Class ABattery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattery, ABattery::StaticClass, TEXT("ABattery"), &Z_Registration_Info_UClass_ABattery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattery), 3682405466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_2397321034(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
