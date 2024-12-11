// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/LockerLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockerLock() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_ALockerLock();
SUBMARINE_API UClass* Z_Construct_UClass_ALockerLock_NoRegister();
SUBMARINE_API UClass* Z_Construct_UClass_UInteractE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin Class ALockerLock
void ALockerLock::StaticRegisterNativesALockerLock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALockerLock);
UClass* Z_Construct_UClass_ALockerLock_NoRegister()
{
	return ALockerLock::StaticClass();
}
struct Z_Construct_UClass_ALockerLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LockerLock.h" },
		{ "ModuleRelativePath", "Private/LockerLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "LockerLock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LockerLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockerMesh_MetaData[] = {
		{ "Category", "LockerLock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LockerLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockMesh_MetaData[] = {
		{ "Category", "LockerLock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LockerLock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Category", "LockerLock" },
		{ "ModuleRelativePath", "Private/LockerLock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockerLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockerLock_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockerLock, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockerLock_Statics::NewProp_LockerMesh = { "LockerMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockerLock, LockerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockerMesh_MetaData), NewProp_LockerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockerLock_Statics::NewProp_LockMesh = { "LockMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockerLock, LockMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockMesh_MetaData), NewProp_LockMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockerLock_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALockerLock, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALockerLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockerLock_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockerLock_Statics::NewProp_LockerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockerLock_Statics::NewProp_LockMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockerLock_Statics::NewProp_AnimSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockerLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALockerLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockerLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALockerLock_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractE_NoRegister, (int32)VTABLE_OFFSET(ALockerLock, IInteractE), false },  // 180728773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALockerLock_Statics::ClassParams = {
	&ALockerLock::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALockerLock_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALockerLock_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALockerLock_Statics::Class_MetaDataParams), Z_Construct_UClass_ALockerLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALockerLock()
{
	if (!Z_Registration_Info_UClass_ALockerLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALockerLock.OuterSingleton, Z_Construct_UClass_ALockerLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALockerLock.OuterSingleton;
}
template<> SUBMARINE_API UClass* StaticClass<ALockerLock>()
{
	return ALockerLock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALockerLock);
ALockerLock::~ALockerLock() {}
// End Class ALockerLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LockerLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALockerLock, ALockerLock::StaticClass, TEXT("ALockerLock"), &Z_Registration_Info_UClass_ALockerLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALockerLock), 65660300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LockerLock_h_95288621(TEXT("/Script/Submarine"),
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LockerLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_LockerLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
