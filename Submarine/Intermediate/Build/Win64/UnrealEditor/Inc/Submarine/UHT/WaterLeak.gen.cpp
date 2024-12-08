// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/WaterLeak/WaterLeak.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterLeak() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterLeak();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterLeak_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class AWaterLeak
void AWaterLeak::StaticRegisterNativesAWaterLeak()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterLeak);
UClass* Z_Construct_UClass_AWaterLeak_NoRegister()
{
	return AWaterLeak::StaticClass();
}
struct Z_Construct_UClass_AWaterLeak_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WaterLeak/WaterLeak.h" },
		{ "ModuleRelativePath", "Private/WaterLeak/WaterLeak.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "WaterLeak" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterLeak/WaterLeak.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Patch_MetaData[] = {
		{ "Category", "WaterLeak" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterLeak/WaterLeak.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLeak_MetaData[] = {
		{ "Category", "WaterLeak" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterLeak/WaterLeak.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Patch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterLeak;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterLeak>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterLeak_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterLeak, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterLeak_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterLeak, Patch), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Patch_MetaData), NewProp_Patch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterLeak_Statics::NewProp_WaterLeak = { "WaterLeak", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterLeak, WaterLeak), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLeak_MetaData), NewProp_WaterLeak_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterLeak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLeak_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLeak_Statics::NewProp_Patch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLeak_Statics::NewProp_WaterLeak,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLeak_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaterLeak_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLeak_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWaterLeak_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(AWaterLeak, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterLeak_Statics::ClassParams = {
	&AWaterLeak::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWaterLeak_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLeak_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLeak_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaterLeak_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaterLeak()
{
	if (!Z_Registration_Info_UClass_AWaterLeak.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterLeak.OuterSingleton, Z_Construct_UClass_AWaterLeak_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaterLeak.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<AWaterLeak>()
{
	return AWaterLeak::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterLeak);
AWaterLeak::~AWaterLeak() {}
// End Class AWaterLeak

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaterLeak, AWaterLeak::StaticClass, TEXT("AWaterLeak"), &Z_Registration_Info_UClass_AWaterLeak, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterLeak), 3131434704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_2769309721(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
