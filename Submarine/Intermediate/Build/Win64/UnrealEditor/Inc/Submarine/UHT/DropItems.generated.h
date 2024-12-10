// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DropItems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBMARINE_DropItems_generated_h
#error "DropItems.generated.h already included, missing '#pragma once' in DropItems.h"
#endif
#define SUBMARINE_DropItems_generated_h

#define FID_Submarine_Source_Submarine_Private_DropItems_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDropItems(UDropItems&&); \
	UDropItems(const UDropItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropItems); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropItems) \
	NO_API virtual ~UDropItems();


#define FID_Submarine_Source_Submarine_Private_DropItems_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDropItems(); \
	friend struct Z_Construct_UClass_UDropItems_Statics; \
public: \
	DECLARE_CLASS(UDropItems, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Submarine"), NO_API) \
	DECLARE_SERIALIZER(UDropItems)


#define FID_Submarine_Source_Submarine_Private_DropItems_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Submarine_Source_Submarine_Private_DropItems_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Submarine_Source_Submarine_Private_DropItems_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Submarine_Source_Submarine_Private_DropItems_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDropItems() {} \
public: \
	typedef UDropItems UClassType; \
	typedef IDropItems ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Submarine_Source_Submarine_Private_DropItems_h_10_PROLOG
#define FID_Submarine_Source_Submarine_Private_DropItems_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Submarine_Source_Submarine_Private_DropItems_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBMARINE_API UClass* StaticClass<class UDropItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Submarine_Source_Submarine_Private_DropItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
