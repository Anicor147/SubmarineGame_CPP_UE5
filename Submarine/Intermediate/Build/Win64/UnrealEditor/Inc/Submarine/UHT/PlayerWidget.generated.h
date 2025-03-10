// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_PlayerWidget_generated_h
#error "PlayerWidget.generated.h already included, missing '#pragma once' in PlayerWidget.h"
#endif
#define SUBMARINE_PlayerWidget_generated_h

#define FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPromptG); \
	DECLARE_FUNCTION(execSetPromptE); \
	DECLARE_FUNCTION(execSetPromptF);


#define FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerWidget(UPlayerWidget&&); \
	UPlayerWidget(const UPlayerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget) \
	NO_API virtual ~UPlayerWidget();


#define FID_Submarine_Source_Submarine_Private_PlayerWidget_h_13_PROLOG
#define FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_PlayerWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UPlayerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_PlayerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
