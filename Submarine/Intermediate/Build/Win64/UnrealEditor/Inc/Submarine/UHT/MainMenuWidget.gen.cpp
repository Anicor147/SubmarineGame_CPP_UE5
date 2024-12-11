// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/MainMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// Begin Cross Module References
SUBMARINE_API UClass* Z_Construct_UClass_UMainMenuWidget();
SUBMARINE_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UMainMenuWidget Function PlayGame
struct Z_Construct_UFunction_UMainMenuWidget_PlayGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_PlayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "PlayGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_PlayGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_PlayGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_PlayGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_PlayGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execPlayGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayGame();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function PlayGame

// Begin Class UMainMenuWidget Function QuitGame
struct Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainMenuWidget_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class UMainMenuWidget Function QuitGame

// Begin Class UMainMenuWidget
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayGame", &UMainMenuWidget::execPlayGame },
		{ "QuitGame", &UMainMenuWidget::execQuitGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenuWidget);
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::StaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainMenuWidget.h" },
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_PlayGame, "PlayGame" }, // 2195971629
		{ &Z_Construct_UFunction_UMainMenuWidget_QuitGame, "QuitGame" }, // 368100008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_Title,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UMainMenuWidget>()
{
	return UMainMenuWidget::StaticClass();
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// End Class UMainMenuWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_MainMenuWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 1051787072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_MainMenuWidget_h_2444389219(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_MainMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_MainMenuWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
