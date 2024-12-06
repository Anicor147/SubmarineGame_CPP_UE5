// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumpadButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_NumpadButton_generated_h
#error "NumpadButton.generated.h already included, missing '#pragma once' in NumpadButton.h"
#endif
#define SUBMARINE_NumpadButton_generated_h

#define FID_Submarine_Source_Submarine_Private_NumpadButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumpadButton(); \
	friend struct Z_Construct_UClass_ANumpadButton_Statics; \
public: \
	DECLARE_CLASS(ANumpadButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ANumpadButton) \
	virtual UObject* _getUObject() const override { return const_cast<ANumpadButton*>(this); }


#define FID_Submarine_Source_Submarine_Private_NumpadButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumpadButton(ANumpadButton&&); \
	ANumpadButton(const ANumpadButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumpadButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumpadButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANumpadButton) \
	NO_API virtual ~ANumpadButton();


#define FID_Submarine_Source_Submarine_Private_NumpadButton_h_14_PROLOG
#define FID_Submarine_Source_Submarine_Private_NumpadButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_NumpadButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_NumpadButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ANumpadButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_NumpadButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
