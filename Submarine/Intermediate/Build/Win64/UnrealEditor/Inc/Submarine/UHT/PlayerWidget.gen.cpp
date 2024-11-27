// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/PlayerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}

// Begin Cross Module References
SUBMARINE_API UClass* Z_Construct_UClass_UPlayerWidget();
SUBMARINE_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UPlayerWidget Function SetPromptE
struct PlayerWidget_eventSetPromptE_Parms
{
	bool Visible;
};
static const FName NAME_UPlayerWidget_SetPromptE = FName(TEXT("SetPromptE"));
void UPlayerWidget::SetPromptE(bool Visible)
{
	PlayerWidget_eventSetPromptE_Parms Parms;
	Parms.Visible=Visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerWidget_SetPromptE);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((PlayerWidget_eventSetPromptE_Parms*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerWidget_eventSetPromptE_Parms), &Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::NewProp_Visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetPromptE", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers), sizeof(PlayerWidget_eventSetPromptE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerWidget_eventSetPromptE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetPromptE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerWidget Function SetPromptE

// Begin Class UPlayerWidget Function SetPromptF
struct PlayerWidget_eventSetPromptF_Parms
{
	bool Visible;
};
static const FName NAME_UPlayerWidget_SetPromptF = FName(TEXT("SetPromptF"));
void UPlayerWidget::SetPromptF(bool Visible)
{
	PlayerWidget_eventSetPromptF_Parms Parms;
	Parms.Visible=Visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UPlayerWidget_SetPromptF);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((PlayerWidget_eventSetPromptF_Parms*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerWidget_eventSetPromptF_Parms), &Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::NewProp_Visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetPromptF", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers), sizeof(PlayerWidget_eventSetPromptF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerWidget_eventSetPromptF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetPromptF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPlayerWidget Function SetPromptF

// Begin Class UPlayerWidget
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWidget);
UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
{
	return UPlayerWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerWidget.h" },
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWidget_SetPromptE, "SetPromptE" }, // 253017709
		{ &Z_Construct_UFunction_UPlayerWidget_SetPromptF, "SetPromptF" }, // 1703291012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
	&UPlayerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UPlayerWidget>()
{
	return UPlayerWidget::StaticClass();
}
UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
UPlayerWidget::~UPlayerWidget() {}
// End Class UPlayerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 4170546292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_1340238981(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
