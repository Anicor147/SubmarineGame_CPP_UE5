// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmarine_init() {}
	SUBMARINE_API UFunction* Z_Construct_UDelegateFunction_Submarine_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Submarine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Submarine()
	{
		if (!Z_Registration_Info_UPackage__Script_Submarine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Submarine_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Submarine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2B46D16,
				0x096C2F3B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Submarine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Submarine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Submarine(Z_Construct_UPackage__Script_Submarine, TEXT("/Script/Submarine"), Z_Registration_Info_UPackage__Script_Submarine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2B46D16, 0x096C2F3B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
