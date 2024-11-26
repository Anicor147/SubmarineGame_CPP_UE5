// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmarineCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_SubmarineCharacter_generated_h
#error "SubmarineCharacter.generated.h already included, missing '#pragma once' in SubmarineCharacter.h"
#endif
#define SUBMARINE_SubmarineCharacter_generated_h

#define FID_Submarine_Source_Submarine_SubmarineCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubmarineCharacter(); \
	friend struct Z_Construct_UClass_ASubmarineCharacter_Statics; \
public: \
	DECLARE_CLASS(ASubmarineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ASubmarineCharacter)


#define FID_Submarine_Source_Submarine_SubmarineCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASubmarineCharacter(ASubmarineCharacter&&); \
	ASubmarineCharacter(const ASubmarineCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubmarineCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubmarineCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubmarineCharacter) \
	NO_API virtual ~ASubmarineCharacter();


#define FID_Submarine_Source_Submarine_SubmarineCharacter_h_19_PROLOG
#define FID_Submarine_Source_Submarine_SubmarineCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_SubmarineCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_SubmarineCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ASubmarineCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_SubmarineCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
