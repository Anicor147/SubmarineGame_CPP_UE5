// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_NPCCharacter_generated_h
#error "NPCCharacter.generated.h already included, missing '#pragma once' in NPCCharacter.h"
#endif
#define SUBMARINE_NPCCharacter_generated_h

#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPCCharacter(ANPCCharacter&&); \
	ANPCCharacter(const ANPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCharacter) \
	NO_API virtual ~ANPCCharacter();


#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_9_PROLOG
#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ANPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_Private_NPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
