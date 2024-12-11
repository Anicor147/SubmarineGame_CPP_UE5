// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LockerLock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_LockerLock_generated_h
#error "LockerLock.generated.h already included, missing '#pragma once' in LockerLock.h"
#endif
#define SUBMARINE_LockerLock_generated_h

#define FID_Submarine_Source_Submarine_Private_LockerLock_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALockerLock(); \
	friend struct Z_Construct_UClass_ALockerLock_Statics; \
public: \
	DECLARE_CLASS(ALockerLock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ALockerLock) \
	virtual UObject* _getUObject() const override { return const_cast<ALockerLock*>(this); }


#define FID_Submarine_Source_Submarine_Private_LockerLock_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALockerLock(ALockerLock&&); \
	ALockerLock(const ALockerLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALockerLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALockerLock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALockerLock) \
	NO_API virtual ~ALockerLock();


#define FID_Submarine_Source_Submarine_Private_LockerLock_h_12_PROLOG
#define FID_Submarine_Source_Submarine_Private_LockerLock_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_LockerLock_h_15_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_LockerLock_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ALockerLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_LockerLock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
