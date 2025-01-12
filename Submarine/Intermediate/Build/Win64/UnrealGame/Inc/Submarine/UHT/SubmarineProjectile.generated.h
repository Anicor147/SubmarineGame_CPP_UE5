// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmarineProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SUBMARINE_SubmarineProjectile_generated_h
#error "SubmarineProjectile.generated.h already included, missing '#pragma once' in SubmarineProjectile.h"
#endif
#define SUBMARINE_SubmarineProjectile_generated_h

#define FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubmarineProjectile(); \
	friend struct Z_Construct_UClass_ASubmarineProjectile_Statics; \
public: \
	DECLARE_CLASS(ASubmarineProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ASubmarineProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASubmarineProjectile(ASubmarineProjectile&&); \
	ASubmarineProjectile(const ASubmarineProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubmarineProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubmarineProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASubmarineProjectile) \
	NO_API virtual ~ASubmarineProjectile();


#define FID_Submarine_Source_Submarine_SubmarineProjectile_h_12_PROLOG
#define FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_SubmarineProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ASubmarineProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_SubmarineProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
