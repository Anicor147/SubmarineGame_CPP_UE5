// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmarineGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_SubmarineGameMode_generated_h
#error "SubmarineGameMode.generated.h already included, missing '#pragma once' in SubmarineGameMode.h"
#endif
#define SUBMARINE_SubmarineGameMode_generated_h

#define FID_Submarine_Source_Submarine_SubmarineGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubmarineGameMode(); \
	friend struct Z_Construct_UClass_ASubmarineGameMode_Statics; \
public: \
	DECLARE_CLASS(ASubmarineGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), SUBMARINE_API) \
	DECLARE_SERIALIZER(ASubmarineGameMode)


#define FID_Submarine_Source_Submarine_SubmarineGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASubmarineGameMode(ASubmarineGameMode&&); \
	ASubmarineGameMode(const ASubmarineGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBMARINE_API, ASubmarineGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubmarineGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubmarineGameMode) \
	SUBMARINE_API virtual ~ASubmarineGameMode();


#define FID_Submarine_Source_Submarine_SubmarineGameMode_h_9_PROLOG
#define FID_Submarine_Source_Submarine_SubmarineGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_SubmarineGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_SubmarineGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ASubmarineGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_SubmarineGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
