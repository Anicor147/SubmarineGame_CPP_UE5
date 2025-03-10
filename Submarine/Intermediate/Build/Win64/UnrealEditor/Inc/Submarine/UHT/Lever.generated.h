// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lever.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Lever_generated_h
#error "Lever.generated.h already included, missing '#pragma once' in Lever.h"
#endif
#define SUBMARINE_Lever_generated_h

#define FID_Submarine_Source_Submarine_Private_Lever_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALever(); \
	friend struct Z_Construct_UClass_ALever_Statics; \
public: \
	DECLARE_CLASS(ALever, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ALever) \
	virtual UObject* _getUObject() const override { return const_cast<ALever*>(this); }


#define FID_Submarine_Source_Submarine_Private_Lever_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALever(ALever&&); \
	ALever(const ALever&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALever); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALever); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALever) \
	NO_API virtual ~ALever();


#define FID_Submarine_Source_Submarine_Private_Lever_h_13_PROLOG
#define FID_Submarine_Source_Submarine_Private_Lever_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_Lever_h_16_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_Lever_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ALever>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_Lever_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
