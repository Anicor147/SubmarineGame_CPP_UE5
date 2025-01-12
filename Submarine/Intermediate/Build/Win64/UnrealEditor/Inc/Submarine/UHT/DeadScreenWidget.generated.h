// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeadScreenWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_DeadScreenWidget_generated_h
#error "DeadScreenWidget.generated.h already included, missing '#pragma once' in DeadScreenWidget.h"
#endif
#define SUBMARINE_DeadScreenWidget_generated_h

#define FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuit); \
	DECLARE_FUNCTION(execMainMenu); \
	DECLARE_FUNCTION(execRestart);


#define FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadScreenWidget(); \
	friend struct Z_Construct_UClass_UDeadScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UDeadScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UDeadScreenWidget)


#define FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeadScreenWidget(UDeadScreenWidget&&); \
	UDeadScreenWidget(const UDeadScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadScreenWidget) \
	NO_API virtual ~UDeadScreenWidget();


#define FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_14_PROLOG
#define FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UDeadScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_DeadScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
