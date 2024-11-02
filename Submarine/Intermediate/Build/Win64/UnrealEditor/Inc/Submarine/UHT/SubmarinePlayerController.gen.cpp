// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/SubmarinePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmarinePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ASubmarinePlayerController();
SUBMARINE_API UClass* Z_Construct_UClass_ASubmarinePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ASubmarinePlayerController
void ASubmarinePlayerController::StaticRegisterNativesASubmarinePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASubmarinePlayerController);
UClass* Z_Construct_UClass_ASubmarinePlayerController_NoRegister()
{
	return ASubmarinePlayerController::StaticClass();
}
struct Z_Construct_UClass_ASubmarinePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SubmarinePlayerController.h" },
		{ "ModuleRelativePath", "SubmarinePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "SubmarinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubmarinePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubmarinePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASubmarinePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubmarinePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubmarinePlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarinePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASubmarinePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarinePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubmarinePlayerController_Statics::ClassParams = {
	&ASubmarinePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASubmarinePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarinePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarinePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASubmarinePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASubmarinePlayerController()
{
	if (!Z_Registration_Info_UClass_ASubmarinePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASubmarinePlayerController.OuterSingleton, Z_Construct_UClass_ASubmarinePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASubmarinePlayerController.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ASubmarinePlayerController>()
{
	return ASubmarinePlayerController::StaticClass();
}
ASubmarinePlayerController::ASubmarinePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASubmarinePlayerController);
ASubmarinePlayerController::~ASubmarinePlayerController() {}
// End Class ASubmarinePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASubmarinePlayerController, ASubmarinePlayerController::StaticClass, TEXT("ASubmarinePlayerController"), &Z_Registration_Info_UClass_ASubmarinePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASubmarinePlayerController), 3948338155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_506720232(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
