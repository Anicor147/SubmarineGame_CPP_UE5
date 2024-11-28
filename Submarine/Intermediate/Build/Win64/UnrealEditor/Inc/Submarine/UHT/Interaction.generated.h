// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_Interaction_generated_h
#error "Interaction.generated.h already included, missing '#pragma once' in Interaction.h"
#endif
#define SUBMARINE_Interaction_generated_h

#define FID_Submarine_Source_Submarine_Private_Interaction_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBMARINE_API UInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteraction(UInteraction&&); \
	UInteraction(const UInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBMARINE_API, UInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction) \
	SUBMARINE_API virtual ~UInteraction();


#define FID_Submarine_Source_Submarine_Private_Interaction_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteraction(); \
	friend struct Z_Construct_UClass_UInteraction_Statics; \
public: \
	DECLARE_CLASS(UInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Submarine"), SUBMARINE_API) \
	DECLARE_SERIALIZER(UInteraction)


#define FID_Submarine_Source_Submarine_Private_Interaction_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Submarine_Source_Submarine_Private_Interaction_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Submarine_Source_Submarine_Private_Interaction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Submarine_Source_Submarine_Private_Interaction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteraction() {} \
public: \
	typedef UInteraction UClassType; \
	typedef IInteraction ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Submarine_Source_Submarine_Private_Interaction_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_Interaction_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_Interaction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_Interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
