// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GASTUTOR_BasicAttributeSet_generated_h
#error "BasicAttributeSet.generated.h already included, missing '#pragma once' in BasicAttributeSet.h"
#endif
#define GASTUTOR_BasicAttributeSet_generated_h

#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicAttributeSet(); \
	friend struct Z_Construct_UClass_UBasicAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBasicAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAStutor"), NO_API) \
	DECLARE_SERIALIZER(UBasicAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBasicAttributeSet) \
public:


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicAttributeSet(UBasicAttributeSet&&); \
	UBasicAttributeSet(const UBasicAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicAttributeSet) \
	NO_API virtual ~UBasicAttributeSet();


#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_15_PROLOG
#define FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASTUTOR_API UClass* StaticClass<class UBasicAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_BasicAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
