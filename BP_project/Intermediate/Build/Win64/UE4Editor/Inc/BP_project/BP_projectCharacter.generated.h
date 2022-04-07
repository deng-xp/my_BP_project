// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BP_PROJECT_BP_projectCharacter_generated_h
#error "BP_projectCharacter.generated.h already included, missing '#pragma once' in BP_projectCharacter.h"
#endif
#define BP_PROJECT_BP_projectCharacter_generated_h

#define BP_project_Source_BP_project_BP_projectCharacter_h_20_SPARSE_DATA
#define BP_project_Source_BP_project_BP_projectCharacter_h_20_RPC_WRAPPERS
#define BP_project_Source_BP_project_BP_projectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define BP_project_Source_BP_project_BP_projectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_projectCharacter(); \
	friend struct Z_Construct_UClass_ABP_projectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABP_projectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BP_project"), NO_API) \
	DECLARE_SERIALIZER(ABP_projectCharacter)


#define BP_project_Source_BP_project_BP_projectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABP_projectCharacter(); \
	friend struct Z_Construct_UClass_ABP_projectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABP_projectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BP_project"), NO_API) \
	DECLARE_SERIALIZER(ABP_projectCharacter)


#define BP_project_Source_BP_project_BP_projectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_projectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_projectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_projectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_projectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_projectCharacter(ABP_projectCharacter&&); \
	NO_API ABP_projectCharacter(const ABP_projectCharacter&); \
public:


#define BP_project_Source_BP_project_BP_projectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_projectCharacter(ABP_projectCharacter&&); \
	NO_API ABP_projectCharacter(const ABP_projectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_projectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_projectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_projectCharacter)


#define BP_project_Source_BP_project_BP_projectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABP_projectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ABP_projectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ABP_projectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ABP_projectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ABP_projectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ABP_projectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ABP_projectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ABP_projectCharacter, L_MotionController); }


#define BP_project_Source_BP_project_BP_projectCharacter_h_17_PROLOG
#define BP_project_Source_BP_project_BP_projectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_SPARSE_DATA \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_RPC_WRAPPERS \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_INCLASS \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_project_Source_BP_project_BP_projectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_SPARSE_DATA \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	BP_project_Source_BP_project_BP_projectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_PROJECT_API UClass* StaticClass<class ABP_projectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_project_Source_BP_project_BP_projectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
