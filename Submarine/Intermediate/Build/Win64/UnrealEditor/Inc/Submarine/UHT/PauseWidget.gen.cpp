// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/PauseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseWidget() {}

// Begin Cross Module References
SUBMARINE_API UClass* Z_Construct_UClass_UPauseWidget();
SUBMARINE_API UClass* Z_Construct_UClass_UPauseWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UPauseWidget Function OnResumeButton
struct Z_Construct_UFunction_UPauseWidget_OnResumeButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PauseWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseWidget_OnResumeButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseWidget, nullptr, "OnResumeButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseWidget_OnResumeButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseWidget_OnResumeButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseWidget_OnResumeButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseWidget_OnResumeButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseWidget::execOnResumeButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResumeButton();
	P_NATIVE_END;
}
// End Class UPauseWidget Function OnResumeButton

// Begin Class UPauseWidget
void UPauseWidget::StaticRegisterNativesUPauseWidget()
{
	UClass* Class = UPauseWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnResumeButton", &UPauseWidget::execOnResumeButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseWidget);
UClass* Z_Construct_UClass_UPauseWidget_NoRegister()
{
	return UPauseWidget::StaticClass();
}
struct Z_Construct_UClass_UPauseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PauseWidget.h" },
		{ "ModuleRelativePath", "Private/PauseWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PauseWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseWidget_OnResumeButton, "OnResumeButton" }, // 3339471456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResumeButton_MetaData), NewProp_ResumeButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseWidget_Statics::NewProp_ResumeButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPauseWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseWidget_Statics::ClassParams = {
	&UPauseWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseWidget()
{
	if (!Z_Registration_Info_UClass_UPauseWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseWidget.OuterSingleton, Z_Construct_UClass_UPauseWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseWidget.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UPauseWidget>()
{
	return UPauseWidget::StaticClass();
}
UPauseWidget::UPauseWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseWidget);
UPauseWidget::~UPauseWidget() {}
// End Class UPauseWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseWidget, UPauseWidget::StaticClass, TEXT("UPauseWidget"), &Z_Registration_Info_UClass_UPauseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseWidget), 2221233795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_2654377660(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
