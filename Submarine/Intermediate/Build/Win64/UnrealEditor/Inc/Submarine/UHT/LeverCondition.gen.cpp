// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/LeverCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverCondition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALever_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALeverCondition();
SUBMARINE_API UClass* Z_Construct_UClass_ALeverCondition_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ALeverCondition
void ALeverCondition::StaticRegisterNativesALeverCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeverCondition);
UClass* Z_Construct_UClass_ALeverCondition_NoRegister()
{
	return ALeverCondition::StaticClass();
}
struct Z_Construct_UClass_ALeverCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeverCondition.h" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "LeverCondition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "LeverCondition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "Category", "LeverCondition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceArray_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverArray_MetaData[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Private/LeverCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeverArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeverArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverCondition, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverCondition, Base), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverCondition, Button), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_SequenceArray_Inner = { "SequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_SequenceArray = { "SequenceArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverCondition, SequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceArray_MetaData), NewProp_SequenceArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_LeverArray_Inner = { "LeverArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALever_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverCondition_Statics::NewProp_LeverArray = { "LeverArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverCondition, LeverArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverArray_MetaData), NewProp_LeverArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_SequenceArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_SequenceArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_LeverArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverCondition_Statics::NewProp_LeverArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeverCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALeverCondition_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ALeverCondition, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeverCondition_Statics::ClassParams = {
	&ALeverCondition::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeverCondition_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeverCondition_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeverCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeverCondition()
{
	if (!Z_Registration_Info_UClass_ALeverCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeverCondition.OuterSingleton, Z_Construct_UClass_ALeverCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeverCondition.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ALeverCondition>()
{
	return ALeverCondition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverCondition);
ALeverCondition::~ALeverCondition() {}
// End Class ALeverCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverCondition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeverCondition, ALeverCondition::StaticClass, TEXT("ALeverCondition"), &Z_Registration_Info_UClass_ALeverCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeverCondition), 677718441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverCondition_h_654899447(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LeverCondition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
