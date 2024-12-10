// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneratorScripts/Generator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Generator_generated_h
#error "Generator.generated.h already included, missing '#pragma once' in Generator.h"
#endif
#define SUBMARINE_Generator_generated_h

#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerator(); \
	friend struct Z_Construct_UClass_AGenerator_Statics; \
public: \
	DECLARE_CLASS(AGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(AGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<AGenerator*>(this); }


#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGenerator(AGenerator&&); \
	AGenerator(const AGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerator) \
	NO_API virtual ~AGenerator();


#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_13_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class AGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_GeneratorScripts_Generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
