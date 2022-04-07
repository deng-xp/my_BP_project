// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_project/BP_projectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_projectHUD() {}
// Cross Module References
	BP_PROJECT_API UClass* Z_Construct_UClass_ABP_projectHUD_NoRegister();
	BP_PROJECT_API UClass* Z_Construct_UClass_ABP_projectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BP_project();
// End Cross Module References
	void ABP_projectHUD::StaticRegisterNativesABP_projectHUD()
	{
	}
	UClass* Z_Construct_UClass_ABP_projectHUD_NoRegister()
	{
		return ABP_projectHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABP_projectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_projectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BP_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_projectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "BP_projectHUD.h" },
		{ "ModuleRelativePath", "BP_projectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_projectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_projectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_projectHUD_Statics::ClassParams = {
		&ABP_projectHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABP_projectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_projectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_projectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_projectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_projectHUD, 1894333620);
	template<> BP_PROJECT_API UClass* StaticClass<ABP_projectHUD>()
	{
		return ABP_projectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_projectHUD(Z_Construct_UClass_ABP_projectHUD, &ABP_projectHUD::StaticClass, TEXT("/Script/BP_project"), TEXT("ABP_projectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_projectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
