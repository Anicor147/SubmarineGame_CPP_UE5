// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmarinePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_SubmarinePlayerController_generated_h
#error "SubmarinePlayerController.generated.h already included, missing '#pragma once' in SubmarinePlayerController.h"
#endif
#define SUBMARINE_SubmarinePlayerController_generated_h

#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubmarinePlayerController(); \
	friend struct Z_Construct_UClass_ASubmarinePlayerController_Statics; \
public: \
	DECLARE_CLASS(ASubmarinePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(ASubmarinePlayerController)


#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubmarinePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASubmarinePlayerController(ASubmarinePlayerController&&); \
	ASubmarinePlayerController(const ASubmarinePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubmarinePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubmarinePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubmarinePlayerController) \
	NO_API virtual ~ASubmarinePlayerController();


#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_14_PROLOG
#define FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class ASubmarinePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGame_SubmarineUE_Submarine_Source_Submarine_SubmarinePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
