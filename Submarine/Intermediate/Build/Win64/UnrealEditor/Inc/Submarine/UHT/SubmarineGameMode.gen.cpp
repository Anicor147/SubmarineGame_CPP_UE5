// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/SubmarineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmarineGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SUBMARINE_API UClass* Z_Construct_UClass_ASubmarineGameMode();
SUBMARINE_API UClass* Z_Construct_UClass_ASubmarineGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ASubmarineGameMode
void ASubmarineGameMode::StaticRegisterNativesASubmarineGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASubmarineGameMode);
UClass* Z_Construct_UClass_ASubmarineGameMode_NoRegister()
{
	return ASubmarineGameMode::StaticClass();
}
struct Z_Construct_UClass_ASubmarineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SubmarineGameMode.h" },
		{ "ModuleRelativePath", "SubmarineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubmarineGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASubmarineGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarineGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubmarineGameMode_Statics::ClassParams = {
	&ASubmarineGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASubmarineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASubmarineGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASubmarineGameMode()
{
	if (!Z_Registration_Info_UClass_ASubmarineGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASubmarineGameMode.OuterSingleton, Z_Construct_UClass_ASubmarineGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASubmarineGameMode.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ASubmarineGameMode>()
{
	return ASubmarineGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASubmarineGameMode);
ASubmarineGameMode::~ASubmarineGameMode() {}
// End Class ASubmarineGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_SubmarineGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASubmarineGameMode, ASubmarineGameMode::StaticClass, TEXT("ASubmarineGameMode"), &Z_Registration_Info_UClass_ASubmarineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASubmarineGameMode), 3441088930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_SubmarineGameMode_h_734023531(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_SubmarineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_SubmarineGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
