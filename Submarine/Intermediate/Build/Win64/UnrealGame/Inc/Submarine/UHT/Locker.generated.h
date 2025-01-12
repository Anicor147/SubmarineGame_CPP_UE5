// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Locker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Locker_generated_h
#error "Locker.generated.h already included, missing '#pragma once' in Locker.h"
#endif
#define SUBMARINE_Locker_generated_h

#define FID_Submarine_Source_Submarine_Private_Locker_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocker(); \
	friend struct Z_Construct_UClass_ALocker_Statics; \
public: \
	DECLARE_CLASS(ALocker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ALocker)


#define FID_Submarine_Source_Submarine_Private_Locker_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALocker(ALocker&&); \
	ALocker(const ALocker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocker) \
	NO_API virtual ~ALocker();


#define FID_Submarine_Source_Submarine_Private_Locker_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_Locker_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_Locker_h_13_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_Locker_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ALocker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_Locker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
