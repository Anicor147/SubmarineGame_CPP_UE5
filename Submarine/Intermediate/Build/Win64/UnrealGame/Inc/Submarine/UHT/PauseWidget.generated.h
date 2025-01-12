// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PauseWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_PauseWidget_generated_h
#error "PauseWidget.generated.h already included, missing '#pragma once' in PauseWidget.h"
#endif
#define SUBMARINE_PauseWidget_generated_h

#define FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSensivitySliderValue); \
	DECLARE_FUNCTION(execSoundSliderValue); \
	DECLARE_FUNCTION(execOnQuitButton); \
	DECLARE_FUNCTION(execOnResumeButton);


#define FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseWidget(); \
	friend struct Z_Construct_UClass_UPauseWidget_Statics; \
public: \
	DECLARE_CLASS(UPauseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UPauseWidget)


#define FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPauseWidget(UPauseWidget&&); \
	UPauseWidget(const UPauseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseWidget) \
	NO_API virtual ~UPauseWidget();


#define FID_Submarine_Source_Submarine_Private_PauseWidget_h_16_PROLOG
#define FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_PauseWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UPauseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_PauseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
