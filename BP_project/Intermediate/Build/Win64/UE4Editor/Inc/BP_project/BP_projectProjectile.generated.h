// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BP_PROJECT_BP_projectProjectile_generated_h
#error "BP_projectProjectile.generated.h already included, missing '#pragma once' in BP_projectProjectile.h"
#endif
#define BP_PROJECT_BP_projectProjectile_generated_h

#define BP_project_Source_BP_project_BP_projectProjectile_h_15_SPARSE_DATA
#define BP_project_Source_BP_project_BP_projectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BP_project_Source_BP_project_BP_projectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BP_project_Source_BP_project_BP_projectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_projectProjectile(); \
	friend struct Z_Construct_UClass_ABP_projectProjectile_Statics; \
public: \
	DECLARE_CLASS(ABP_projectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BP_project"), NO_API) \
	DECLARE_SERIALIZER(ABP_projectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BP_project_Source_BP_project_BP_projectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABP_projectProjectile(); \
	friend struct Z_Construct_UClass_ABP_projectProjectile_Statics; \
public: \
	DECLARE_CLASS(ABP_projectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BP_project"), NO_API) \
	DECLARE_SERIALIZER(ABP_projectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BP_project_Source_BP_project_BP_projectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_projectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_projectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_projectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_projectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_projectProjectile(ABP_projectProjectile&&); \
	NO_API ABP_projectProjectile(const ABP_projectProjectile&); \
public:


#define BP_project_Source_BP_project_BP_projectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_projectProjectile(ABP_projectProjectile&&); \
	NO_API ABP_projectProjectile(const ABP_projectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_projectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_projectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_projectProjectile)


#define BP_project_Source_BP_project_BP_projectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABP_projectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABP_projectProjectile, ProjectileMovement); }


#define BP_project_Source_BP_project_BP_projectProjectile_h_12_PROLOG
#define BP_project_Source_BP_project_BP_projectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_SPARSE_DATA \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_RPC_WRAPPERS \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_INCLASS \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_project_Source_BP_project_BP_projectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_SPARSE_DATA \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BP_project_Source_BP_project_BP_projectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_PROJECT_API UClass* StaticClass<class ABP_projectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_project_Source_BP_project_BP_projectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
