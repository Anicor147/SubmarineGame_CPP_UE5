// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/NumpadButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumpadButton() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ANumPad_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ANumpadButton();
SUBMARINE_API UClass* Z_Construct_UClass_ANumpadButton_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ANumpadButton
void ANumpadButton::StaticRegisterNativesANumpadButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumpadButton);
UClass* Z_Construct_UClass_ANumpadButton_NoRegister()
{
	return ANumpadButton::StaticClass();
}
struct Z_Construct_UClass_ANumpadButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NumpadButton.h" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "NumpadButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "NumpadButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[] = {
		{ "Category", "NumpadButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "NumpadButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Numpad_MetaData[] = {
		{ "Category", "1-Numpad" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "NumpadButton" },
		{ "ModuleRelativePath", "Private/NumpadButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Numpad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumpadButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Base), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cube_MetaData), NewProp_Cube_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Numpad = { "Numpad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Numpad), Z_Construct_UClass_ANumPad_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Numpad_MetaData), NewProp_Numpad_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumpadButton_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumpadButton, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumpadButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Cube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Numpad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumpadButton_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumpadButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumpadButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumpadButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANumpadButton_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ANumpadButton, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumpadButton_Statics::ClassParams = {
	&ANumpadButton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANumpadButton_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumpadButton_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumpadButton_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumpadButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumpadButton()
{
	if (!Z_Registration_Info_UClass_ANumpadButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumpadButton.OuterSingleton, Z_Construct_UClass_ANumpadButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumpadButton.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ANumpadButton>()
{
	return ANumpadButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumpadButton);
ANumpadButton::~ANumpadButton() {}
// End Class ANumpadButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumpadButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumpadButton, ANumpadButton::StaticClass, TEXT("ANumpadButton"), &Z_Registration_Info_UClass_ANumpadButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumpadButton), 1290480735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumpadButton_h_3158452062(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumpadButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_NumpadButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
