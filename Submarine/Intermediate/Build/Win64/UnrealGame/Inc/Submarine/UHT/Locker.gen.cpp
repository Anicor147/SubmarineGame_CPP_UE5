// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/Locker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocker() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALocker();
SUBMARINE_API UClass* Z_Construct_UClass_ALocker_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ALocker
void ALocker::StaticRegisterNativesALocker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocker);
UClass* Z_Construct_UClass_ALocker_NoRegister()
{
	return ALocker::StaticClass();
}
struct Z_Construct_UClass_ALocker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Locker.h" },
		{ "ModuleRelativePath", "Private/Locker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Locker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Locker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Locker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Locker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Locker" },
		{ "ModuleRelativePath", "Private/Locker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocker_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocker, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocker_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocker, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocker_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocker, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocker_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocker_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocker_Statics::NewProp_AnimSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALocker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocker_Statics::ClassParams = {
	&ALocker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALocker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocker_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocker_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocker()
{
	if (!Z_Registration_Info_UClass_ALocker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocker.OuterSingleton, Z_Construct_UClass_ALocker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocker.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ALocker>()
{
	return ALocker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocker);
ALocker::~ALocker() {}
// End Class ALocker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Locker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocker, ALocker::StaticClass, TEXT("ALocker"), &Z_Registration_Info_UClass_ALocker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocker), 182775903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Locker_h_2751842225(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Locker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_Locker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
