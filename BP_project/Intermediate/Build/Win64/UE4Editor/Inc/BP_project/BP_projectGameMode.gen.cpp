// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_project/BP_projectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_projectGameMode() {}
// Cross Module References
	BP_PROJECT_API UClass* Z_Construct_UClass_ABP_projectGameMode_NoRegister();
	BP_PROJECT_API UClass* Z_Construct_UClass_ABP_projectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BP_project();
// End Cross Module References
	void ABP_projectGameMode::StaticRegisterNativesABP_projectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABP_projectGameMode_NoRegister()
	{
		return ABP_projectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABP_projectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_projectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BP_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_projectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BP_projectGameMode.h" },
		{ "ModuleRelativePath", "BP_projectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_projectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_projectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_projectGameMode_Statics::ClassParams = {
		&ABP_projectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABP_projectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_projectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_projectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_projectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_projectGameMode, 1299896022);
	template<> BP_PROJECT_API UClass* StaticClass<ABP_projectGameMode>()
	{
		return ABP_projectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_projectGameMode(Z_Construct_UClass_ABP_projectGameMode, &ABP_projectGameMode::StaticClass, TEXT("/Script/BP_project"), TEXT("ABP_projectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_projectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
