// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Submarine/Private/FStoryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFStoryData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SUBMARINE_API UScriptStruct* Z_Construct_UScriptStruct_FStoryData();
UPackage* Z_Construct_UPackage__Script_Submarine();
// End Cross Module References

// Begin ScriptStruct FStoryData
static_assert(std::is_polymorphic<FStoryData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStoryData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoryData;
class UScriptStruct* FStoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoryData, (UObject*)Z_Construct_UPackage__Script_Submarine(), TEXT("StoryData"));
	}
	return Z_Registration_Info_UScriptStruct_StoryData.OuterSingleton;
}
template<> SUBMARINE_API UScriptStruct* StaticStruct<FStoryData>()
{
	return FStoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/FStoryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Story_MetaData[] = {
		{ "Category", "StoryData" },
		{ "ModuleRelativePath", "Private/FStoryData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStoryData_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryData, Story), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Story_MetaData), NewProp_Story_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryData_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Submarine,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"StoryData",
	Z_Construct_UScriptStruct_FStoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryData_Statics::PropPointers),
	sizeof(FStoryData),
	alignof(FStoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStoryData()
{
	if (!Z_Registration_Info_UScriptStruct_StoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoryData.InnerSingleton, Z_Construct_UScriptStruct_FStoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StoryData.InnerSingleton;
}
// End ScriptStruct FStoryData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_FStoryData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStoryData::StaticStruct, Z_Construct_UScriptStruct_FStoryData_Statics::NewStructOps, TEXT("StoryData"), &Z_Registration_Info_UScriptStruct_StoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoryData), 526718209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_FStoryData_h_957840885(TEXT("/Script/Submarine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_FStoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Submarine_Source_Submarine_Private_FStoryData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
