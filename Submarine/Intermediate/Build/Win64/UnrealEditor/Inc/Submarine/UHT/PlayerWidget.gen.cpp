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
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UPlayerWidget Function SetPromptE
struct Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics
{
	struct PlayerWidget_eventSetPromptE_Parms
	{
		bool Visible;
	};
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetPromptE", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PlayerWidget_eventSetPromptE_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::PlayerWidget_eventSetPromptE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetPromptE()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetPromptE_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetPromptE)
{
	P_GET_UBOOL(Z_Param_Visible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPromptE(Z_Param_Visible);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetPromptE

// Begin Class UPlayerWidget Function SetPromptF
struct Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics
{
	struct PlayerWidget_eventSetPromptF_Parms
	{
		bool Visible;
	};
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetPromptF", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PlayerWidget_eventSetPromptF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::PlayerWidget_eventSetPromptF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetPromptF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetPromptF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetPromptF)
{
	P_GET_UBOOL(Z_Param_Visible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPromptF(Z_Param_Visible);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetPromptF

// Begin Class UPlayerWidget Function SetPromptG
struct Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics
{
	struct PlayerWidget_eventSetPromptG_Parms
	{
		bool Visible;
	};
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
void Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::NewProp_Visible_SetBit(void* Obj)
{
	((PlayerWidget_eventSetPromptG_Parms*)Obj)->Visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerWidget_eventSetPromptG_Parms), &Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::NewProp_Visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetPromptG", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PlayerWidget_eventSetPromptG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::PlayerWidget_eventSetPromptG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetPromptG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetPromptG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetPromptG)
{
	P_GET_UBOOL(Z_Param_Visible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPromptG(Z_Param_Visible);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetPromptG

// Begin Class UPlayerWidget
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
	UClass* Class = UPlayerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPromptE", &UPlayerWidget::execSetPromptE },
		{ "SetPromptF", &UPlayerWidget::execSetPromptF },
		{ "SetPromptG", &UPlayerWidget::execSetPromptG },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptG_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptE_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptF_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptE;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptF;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWidget_SetPromptE, "SetPromptE" }, // 1714162903
		{ &Z_Construct_UFunction_UPlayerWidget_SetPromptF, "SetPromptF" }, // 1936300079
		{ &Z_Construct_UFunction_UPlayerWidget_SetPromptG, "SetPromptG" }, // 3540019106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptG = { "PromptG", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, PromptG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptG_MetaData), NewProp_PromptG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptE = { "PromptE", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, PromptE), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptE_MetaData), NewProp_PromptE_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptF = { "PromptF", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, PromptF), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptF_MetaData), NewProp_PromptF_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_PromptF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPlayerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 3250056420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_454099959(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PlayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
