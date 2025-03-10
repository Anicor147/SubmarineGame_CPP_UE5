// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/Lever.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLever() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALever();
SUBMARINE_API UClass* Z_Construct_UClass_ALever_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALeverCondition_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_AWaterMecanic_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ALever
void ALever::StaticRegisterNativesALever()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALever);
UClass* Z_Construct_UClass_ALever_NoRegister()
{
	return ALever::StaticClass();
}
struct Z_Construct_UClass_ALever_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lever.h" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skeletal_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_condition_MetaData[] = {
		{ "Category", "Lever Condition" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionnerMontage_MetaData[] = {
		{ "Category", "Lever Montage" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesactionnerMontage_MetaData[] = {
		{ "Category", "Lever Montage" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterMecanic_MetaData[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Private/Lever.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_condition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionnerMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DesactionnerMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterMecanic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALever>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_skeletal = { "skeletal", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, skeletal), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skeletal_MetaData), NewProp_skeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_condition = { "condition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, condition), Z_Construct_UClass_ALeverCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_condition_MetaData), NewProp_condition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_ActionnerMontage = { "ActionnerMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, ActionnerMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionnerMontage_MetaData), NewProp_ActionnerMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_DesactionnerMontage = { "DesactionnerMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, DesactionnerMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesactionnerMontage_MetaData), NewProp_DesactionnerMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_WaterMecanic = { "WaterMecanic", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, WaterMecanic), Z_Construct_UClass_AWaterMecanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterMecanic_MetaData), NewProp_WaterMecanic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALever_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_skeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_ActionnerMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_DesactionnerMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_WaterMecanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALever_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALever_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ALever, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALever_Statics::ClassParams = {
	&ALever::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALever_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::Class_MetaDataParams), Z_Construct_UClass_ALever_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALever()
{
	if (!Z_Registration_Info_UClass_ALever.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALever.OuterSingleton, Z_Construct_UClass_ALever_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALever.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ALever>()
{
	return ALever::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALever);
ALever::~ALever() {}
// End Class ALever

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Lever_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALever, ALever::StaticClass, TEXT("ALever"), &Z_Registration_Info_UClass_ALever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALever), 4168181212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Lever_h_2688851402(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Lever_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Lever_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
