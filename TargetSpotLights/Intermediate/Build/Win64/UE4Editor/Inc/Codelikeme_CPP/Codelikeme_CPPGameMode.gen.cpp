// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codelikeme_CPP/Codelikeme_CPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodelikeme_CPPGameMode() {}
// Cross Module References
	CODELIKEME_CPP_API UClass* Z_Construct_UClass_ACodelikeme_CPPGameMode_NoRegister();
	CODELIKEME_CPP_API UClass* Z_Construct_UClass_ACodelikeme_CPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Codelikeme_CPP();
// End Cross Module References
	void ACodelikeme_CPPGameMode::StaticRegisterNativesACodelikeme_CPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACodelikeme_CPPGameMode_NoRegister()
	{
		return ACodelikeme_CPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codelikeme_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Codelikeme_CPPGameMode.h" },
		{ "ModuleRelativePath", "Codelikeme_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodelikeme_CPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::ClassParams = {
		&ACodelikeme_CPPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodelikeme_CPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodelikeme_CPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodelikeme_CPPGameMode, 1867579162);
	template<> CODELIKEME_CPP_API UClass* StaticClass<ACodelikeme_CPPGameMode>()
	{
		return ACodelikeme_CPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodelikeme_CPPGameMode(Z_Construct_UClass_ACodelikeme_CPPGameMode, &ACodelikeme_CPPGameMode::StaticClass, TEXT("/Script/Codelikeme_CPP"), TEXT("ACodelikeme_CPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodelikeme_CPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
