// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/DeadScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadScreenWidget() {}

// Begin Cross Module References
SUBMARINE_API UClass* Z_Construct_UClass_UDeadScreenWidget();
SUBMARINE_API UClass* Z_Construct_UClass_UDeadScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UDeadScreenWidget Function MainMenu
struct Z_Construct_UFunction_UDeadScreenWidget_MainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadScreenWidget_MainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeadScreenWidget, nullptr, "MainMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadScreenWidget_MainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadScreenWidget_MainMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeadScreenWidget_MainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadScreenWidget_MainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadScreenWidget::execMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MainMenu();
	P_NATIVE_END;
}
// End Class UDeadScreenWidget Function MainMenu

// Begin Class UDeadScreenWidget Function Quit
struct Z_Construct_UFunction_UDeadScreenWidget_Quit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadScreenWidget_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeadScreenWidget, nullptr, "Quit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadScreenWidget_Quit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadScreenWidget_Quit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeadScreenWidget_Quit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadScreenWidget_Quit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadScreenWidget::execQuit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Quit();
	P_NATIVE_END;
}
// End Class UDeadScreenWidget Function Quit

// Begin Class UDeadScreenWidget Function Restart
struct Z_Construct_UFunction_UDeadScreenWidget_Restart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadScreenWidget_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeadScreenWidget, nullptr, "Restart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadScreenWidget_Restart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeadScreenWidget_Restart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeadScreenWidget_Restart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeadScreenWidget_Restart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeadScreenWidget::execRestart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Restart();
	P_NATIVE_END;
}
// End Class UDeadScreenWidget Function Restart

// Begin Class UDeadScreenWidget
void UDeadScreenWidget::StaticRegisterNativesUDeadScreenWidget()
{
	UClass* Class = UDeadScreenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MainMenu", &UDeadScreenWidget::execMainMenu },
		{ "Quit", &UDeadScreenWidget::execQuit },
		{ "Restart", &UDeadScreenWidget::execRestart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeadScreenWidget);
UClass* Z_Construct_UClass_UDeadScreenWidget_NoRegister()
{
	return UDeadScreenWidget::StaticClass();
}
struct Z_Construct_UClass_UDeadScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeadScreenWidget.h" },
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DeadScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeadScreenWidget_MainMenu, "MainMenu" }, // 3677029578
		{ &Z_Construct_UFunction_UDeadScreenWidget_Quit, "Quit" }, // 894323885
		{ &Z_Construct_UFunction_UDeadScreenWidget_Restart, "Restart" }, // 1597386311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadScreenWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartButton_MetaData), NewProp_RestartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadScreenWidget, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuButton_MetaData), NewProp_MainMenuButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeadScreenWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_RestartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_MainMenuButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadScreenWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeadScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeadScreenWidget_Statics::ClassParams = {
	&UDeadScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDeadScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeadScreenWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeadScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeadScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeadScreenWidget()
{
	if (!Z_Registration_Info_UClass_UDeadScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeadScreenWidget.OuterSingleton, Z_Construct_UClass_UDeadScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeadScreenWidget.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UDeadScreenWidget>()
{
	return UDeadScreenWidget::StaticClass();
}
UDeadScreenWidget::UDeadScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadScreenWidget);
UDeadScreenWidget::~UDeadScreenWidget() {}
// End Class UDeadScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeadScreenWidget, UDeadScreenWidget::StaticClass, TEXT("UDeadScreenWidget"), &Z_Registration_Info_UClass_UDeadScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeadScreenWidget), 491631116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_2610408785(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
