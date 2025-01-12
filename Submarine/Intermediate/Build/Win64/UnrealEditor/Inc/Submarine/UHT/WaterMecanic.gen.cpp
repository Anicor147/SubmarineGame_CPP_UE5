// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/WaterMecanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterMecanic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterLeak_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterMecanic();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterMecanic_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class AWaterMecanic
void AWaterMecanic::StaticRegisterNativesAWaterMecanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterMecanic);
UClass* Z_Construct_UClass_AWaterMecanic_NoRegister()
{
	return AWaterMecanic::StaticClass();
}
struct Z_Construct_UClass_AWaterMecanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WaterMecanic.h" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterComponent_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadWidgetClass_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterLeaks_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_waterSpeed_MetaData[] = {
		{ "Category", "WaterMecanic" },
		{ "ModuleRelativePath", "Private/WaterMecanic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeadWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterLeaks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterLeaks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_waterSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterMecanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, Plane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterComponent = { "WaterComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, WaterComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterComponent_MetaData), NewProp_WaterComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_DeadWidgetClass = { "DeadWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, DeadWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadWidgetClass_MetaData), NewProp_DeadWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterLeaks_Inner = { "WaterLeaks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWaterLeak_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterLeaks = { "WaterLeaks", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, WaterLeaks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterLeaks_MetaData), NewProp_WaterLeaks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generators_MetaData), NewProp_Generators_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterMecanic_Statics::NewProp_waterSpeed = { "waterSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaterMecanic, waterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_waterSpeed_MetaData), NewProp_waterSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterMecanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Plane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_DeadWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterLeaks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_WaterLeaks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Generators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_Generators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterMecanic_Statics::NewProp_waterSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMecanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaterMecanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMecanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterMecanic_Statics::ClassParams = {
	&AWaterMecanic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWaterMecanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMecanic_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaterMecanic_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaterMecanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaterMecanic()
{
	if (!Z_Registration_Info_UClass_AWaterMecanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterMecanic.OuterSingleton, Z_Construct_UClass_AWaterMecanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaterMecanic.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<AWaterMecanic>()
{
	return AWaterMecanic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterMecanic);
AWaterMecanic::~AWaterMecanic() {}
// End Class AWaterMecanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterMecanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaterMecanic, AWaterMecanic::StaticClass, TEXT("AWaterMecanic"), &Z_Registration_Info_UClass_AWaterMecanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterMecanic), 3304805292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterMecanic_h_3543780400(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterMecanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_WaterMecanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
