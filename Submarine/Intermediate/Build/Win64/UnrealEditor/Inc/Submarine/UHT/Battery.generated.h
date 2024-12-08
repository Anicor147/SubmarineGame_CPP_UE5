// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneratorScripts/Battery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Battery_generated_h
#error "Battery.generated.h already included, missing '#pragma once' in Battery.h"
#endif
#define SUBMARINE_Battery_generated_h

#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattery(); \
	friend struct Z_Construct_UClass_ABattery_Statics; \
public: \
	DECLARE_CLASS(ABattery, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ABattery) \
	virtual UObject* _getUObject() const override { return const_cast<ABattery*>(this); }


#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABattery(ABattery&&); \
	ABattery(const ABattery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattery) \
	NO_API virtual ~ABattery();


#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_13_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ABattery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_GeneratorScripts_Battery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
