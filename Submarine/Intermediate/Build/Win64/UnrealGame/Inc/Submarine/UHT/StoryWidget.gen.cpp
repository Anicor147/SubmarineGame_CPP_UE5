// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/StoryWidget.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryWidget() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
SUBMARINE_API UClass* Z_Construct_UClass_UStoryWidget();
SUBMARINE_API UClass* Z_Construct_UClass_UStoryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UStoryWidget Function NextButtonClicked
struct Z_Construct_UFunction_UStoryWidget_NextButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StoryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryWidget_NextButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryWidget, nullptr, "NextButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryWidget_NextButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStoryWidget_NextButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStoryWidget_NextButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryWidget_NextButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStoryWidget::execNextButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextButtonClicked();
	P_NATIVE_END;
}
// End Class UStoryWidget Function NextButtonClicked

// Begin Class UStoryWidget
void UStoryWidget::StaticRegisterNativesUStoryWidget()
{
	UClass* Class = UStoryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextButtonClicked", &UStoryWidget::execNextButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoryWidget);
UClass* Z_Construct_UClass_UStoryWidget_NoRegister()
{
	return UStoryWidget::StaticClass();
}
struct Z_Construct_UClass_UStoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryWidget.h" },
		{ "ModuleRelativePath", "Private/StoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryRow_MetaData[] = {
		{ "Category", "StoryWidget" },
		{ "ModuleRelativePath", "Private/StoryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoryRow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoryWidget_NextButtonClicked, "NextButtonClicked" }, // 2170071752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoryWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextButton_MetaData), NewProp_NextButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoryWidget_Statics::NewProp_StoryText = { "StoryText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryWidget, StoryText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryText_MetaData), NewProp_StoryText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoryWidget_Statics::NewProp_StoryRow = { "StoryRow", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryWidget, StoryRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryRow_MetaData), NewProp_StoryRow_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryWidget_Statics::NewProp_NextButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryWidget_Statics::NewProp_StoryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryWidget_Statics::NewProp_StoryRow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStoryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoryWidget_Statics::ClassParams = {
	&UStoryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStoryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStoryWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStoryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStoryWidget()
{
	if (!Z_Registration_Info_UClass_UStoryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoryWidget.OuterSingleton, Z_Construct_UClass_UStoryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStoryWidget.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UStoryWidget>()
{
	return UStoryWidget::StaticClass();
}
UStoryWidget::UStoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryWidget);
UStoryWidget::~UStoryWidget() {}
// End Class UStoryWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_StoryWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStoryWidget, UStoryWidget::StaticClass, TEXT("UStoryWidget"), &Z_Registration_Info_UClass_UStoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoryWidget), 2133717009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_StoryWidget_h_3605863277(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_StoryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_StoryWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
