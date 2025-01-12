// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/AwakeAudioPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAwakeAudioPlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UAwakeAudioPlayer();
SUBMARINE_API UClass* Z_Construct_UClass_UAwakeAudioPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class UAwakeAudioPlayer
void UAwakeAudioPlayer::StaticRegisterNativesUAwakeAudioPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAwakeAudioPlayer);
UClass* Z_Construct_UClass_UAwakeAudioPlayer_NoRegister()
{
	return UAwakeAudioPlayer::StaticClass();
}
struct Z_Construct_UClass_UAwakeAudioPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AwakeAudioPlayer.h" },
		{ "ModuleRelativePath", "Private/AwakeAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Private/AwakeAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Private/AwakeAudioPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAwakeAudioPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAwakeAudioPlayer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAwakeAudioPlayer, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAwakeAudioPlayer_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAwakeAudioPlayer, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAwakeAudioPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAwakeAudioPlayer_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAwakeAudioPlayer_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAwakeAudioPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAwakeAudioPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAwakeAudioPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAwakeAudioPlayer_Statics::ClassParams = {
	&UAwakeAudioPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAwakeAudioPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAwakeAudioPlayer_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAwakeAudioPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAwakeAudioPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAwakeAudioPlayer()
{
	if (!Z_Registration_Info_UClass_UAwakeAudioPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAwakeAudioPlayer.OuterSingleton, Z_Construct_UClass_UAwakeAudioPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAwakeAudioPlayer.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<UAwakeAudioPlayer>()
{
	return UAwakeAudioPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAwakeAudioPlayer);
UAwakeAudioPlayer::~UAwakeAudioPlayer() {}
// End Class UAwakeAudioPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAwakeAudioPlayer, UAwakeAudioPlayer::StaticClass, TEXT("UAwakeAudioPlayer"), &Z_Registration_Info_UClass_UAwakeAudioPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAwakeAudioPlayer), 116284997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_405756418(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
