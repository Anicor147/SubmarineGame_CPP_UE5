// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_InteractE_generated_h
#error "InteractE.generated.h already included, missing '#pragma once' in InteractE.h"
#endif
#define SUBMARINE_InteractE_generated_h

#define FID_Submarine_Source_Submarine_Private_InteractE_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBMARINE_API UInteractE(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractE(UInteractE&&); \
	UInteractE(const UInteractE&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBMARINE_API, UInteractE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractE); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractE) \
	SUBMARINE_API virtual ~UInteractE();


#define FID_Submarine_Source_Submarine_Private_InteractE_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractE(); \
	friend struct Z_Construct_UClass_UInteractE_Statics; \
public: \
	DECLARE_CLASS(UInteractE, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Submarine"), SUBMARINE_API) \
	DECLARE_SERIALIZER(UInteractE)


#define FID_Submarine_Source_Submarine_Private_InteractE_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Submarine_Source_Submarine_Private_InteractE_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Submarine_Source_Submarine_Private_InteractE_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Submarine_Source_Submarine_Private_InteractE_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractE() {} \
public: \
	typedef UInteractE UClassType; \
	typedef IInteractE ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Submarine_Source_Submarine_Private_InteractE_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_InteractE_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_InteractE_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UInteractE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_InteractE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
