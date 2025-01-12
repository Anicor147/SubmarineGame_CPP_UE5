// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterMecanic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_WaterMecanic_generated_h
#error "WaterMecanic.generated.h already included, missing '#pragma once' in WaterMecanic.h"
#endif
#define SUBMARINE_WaterMecanic_generated_h

#define FID_Submarine_Source_Submarine_Private_WaterMecanic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterMecanic(); \
	friend struct Z_Construct_UClass_AWaterMecanic_Statics; \
public: \
	DECLARE_CLASS(AWaterMecanic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(AWaterMecanic)


#define FID_Submarine_Source_Submarine_Private_WaterMecanic_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaterMecanic(AWaterMecanic&&); \
	AWaterMecanic(const AWaterMecanic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterMecanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterMecanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaterMecanic) \
	NO_API virtual ~AWaterMecanic();


#define FID_Submarine_Source_Submarine_Private_WaterMecanic_h_13_PROLOG
#define FID_Submarine_Source_Submarine_Private_WaterMecanic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_WaterMecanic_h_16_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_WaterMecanic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class AWaterMecanic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_WaterMecanic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
