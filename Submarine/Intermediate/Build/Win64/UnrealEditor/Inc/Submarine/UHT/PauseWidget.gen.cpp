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
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UPauseWidget
void UPauseWidget::StaticRegisterNativesUPauseWidget()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UPauseWidget, UPauseWidget::StaticClass, TEXT("UPauseWidget"), &Z_Registration_Info_UClass_UPauseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseWidget), 3863114542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_694147199(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_PauseWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
