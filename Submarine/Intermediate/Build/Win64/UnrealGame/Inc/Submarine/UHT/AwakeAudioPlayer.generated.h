// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AwakeAudioPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_AwakeAudioPlayer_generated_h
#error "AwakeAudioPlayer.generated.h already included, missing '#pragma once' in AwakeAudioPlayer.h"
#endif
#define SUBMARINE_AwakeAudioPlayer_generated_h

#define FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAwakeAudioPlayer(); \
	friend struct Z_Construct_UClass_UAwakeAudioPlayer_Statics; \
public: \
	DECLARE_CLASS(UAwakeAudioPlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UAwakeAudioPlayer)


#define FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAwakeAudioPlayer(UAwakeAudioPlayer&&); \
	UAwakeAudioPlayer(const UAwakeAudioPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAwakeAudioPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAwakeAudioPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAwakeAudioPlayer) \
	NO_API virtual ~UAwakeAudioPlayer();


#define FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_11_PROLOG
#define FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UAwakeAudioPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_AwakeAudioPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
