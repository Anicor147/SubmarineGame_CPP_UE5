// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Toolbox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Toolbox_generated_h
#error "Toolbox.generated.h already included, missing '#pragma once' in Toolbox.h"
#endif
#define SUBMARINE_Toolbox_generated_h

#define FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToolbox(); \
	friend struct Z_Construct_UClass_AToolbox_Statics; \
public: \
	DECLARE_CLASS(AToolbox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(AToolbox) \
	virtual UObject* _getUObject() const override { return const_cast<AToolbox*>(this); }


#define FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AToolbox(AToolbox&&); \
	AToolbox(const AToolbox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToolbox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToolbox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToolbox) \
	NO_API virtual ~AToolbox();


#define FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_12_PROLOG
#define FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_15_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class AToolbox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_Weapon_Toolbox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
