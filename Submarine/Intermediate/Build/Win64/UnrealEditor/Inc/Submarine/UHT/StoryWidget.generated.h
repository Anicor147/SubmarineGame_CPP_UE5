// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StoryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_StoryWidget_generated_h
#error "StoryWidget.generated.h already included, missing '#pragma once' in StoryWidget.h"
#endif
#define SUBMARINE_StoryWidget_generated_h

#define FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNextButtonClicked);


#define FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoryWidget(); \
	friend struct Z_Construct_UClass_UStoryWidget_Statics; \
public: \
	DECLARE_CLASS(UStoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UStoryWidget)


#define FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStoryWidget(UStoryWidget&&); \
	UStoryWidget(const UStoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoryWidget) \
	NO_API virtual ~UStoryWidget();


#define FID_Submarine_Source_Submarine_Private_StoryWidget_h_16_PROLOG
#define FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_StoryWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UStoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_StoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
