// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/NumPad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumPad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ANumPad();
SUBMARINE_API UClass* Z_Construct_UClass_ANumPad_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ANumPad
void ANumPad::StaticRegisterNativesANumPad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumPad);
UClass* Z_Construct_UClass_ANumPad_NoRegister()
{
	return ANumPad::StaticClass();
}
struct Z_Construct_UClass_ANumPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NumPad.h" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "NumPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "NumPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[] = {
		{ "Category", "NumPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[] = {
		{ "Category", "NumPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "NumPad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//might change for a niagara light\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "might change for a niagara light" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceArray_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceivedValueArray_MetaData[] = {
		{ "Category", "NumPad" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blockage_MetaData[] = {
		{ "Category", "NumPad" },
		{ "ModuleRelativePath", "Private/NumPad.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lights;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReceivedValueArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReceivedValueArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blockage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Base), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cube_MetaData), NewProp_Cube_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Lights), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lights_MetaData), NewProp_Lights_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_SequenceArray_Inner = { "SequenceArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_SequenceArray = { "SequenceArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, SequenceArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceArray_MetaData), NewProp_SequenceArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_ReceivedValueArray_Inner = { "ReceivedValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_ReceivedValueArray = { "ReceivedValueArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, ReceivedValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceivedValueArray_MetaData), NewProp_ReceivedValueArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Blockage = { "Blockage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Blockage), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blockage_MetaData), NewProp_Blockage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Cube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Lights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_SequenceArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_SequenceArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_ReceivedValueArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_ReceivedValueArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Blockage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANumPad_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ANumPad, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumPad_Statics::ClassParams = {
	&ANumPad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANumPad_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumPad()
{
	if (!Z_Registration_Info_UClass_ANumPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumPad.OuterSingleton, Z_Construct_UClass_ANumPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumPad.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ANumPad>()
{
	return ANumPad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumPad);
ANumPad::~ANumPad() {}
// End Class ANumPad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumPad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumPad, ANumPad::StaticClass, TEXT("ANumPad"), &Z_Registration_Info_UClass_ANumPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumPad), 343019025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumPad_h_237906990(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumPad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
