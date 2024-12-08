// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterLeak/WaterLeak.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_WaterLeak_generated_h
#error "WaterLeak.generated.h already included, missing '#pragma once' in WaterLeak.h"
#endif
#define SUBMARINE_WaterLeak_generated_h

#define FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterLeak(); \
	friend struct Z_Construct_UClass_AWaterLeak_Statics; \
public: \
	DECLARE_CLASS(AWaterLeak, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(AWaterLeak) \
	virtual UObject* _getUObject() const override { return const_cast<AWaterLeak*>(this); }


#define FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaterLeak(AWaterLeak&&); \
	AWaterLeak(const AWaterLeak&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLeak); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLeak); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaterLeak) \
	NO_API virtual ~AWaterLeak();


#define FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_12_PROLOG
#define FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_15_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class AWaterLeak>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_WaterLeak_WaterLeak_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
