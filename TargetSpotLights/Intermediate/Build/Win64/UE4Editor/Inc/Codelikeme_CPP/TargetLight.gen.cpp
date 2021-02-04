// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codelikeme_CPP/TargetLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetLight() {}
// Cross Module References
	CODELIKEME_CPP_API UClass* Z_Construct_UClass_ATargetLight_NoRegister();
	CODELIKEME_CPP_API UClass* Z_Construct_UClass_ATargetLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Codelikeme_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	void ATargetLight::StaticRegisterNativesATargetLight()
	{
	}
	UClass* Z_Construct_UClass_ATargetLight_NoRegister()
	{
		return ATargetLight::StaticClass();
	}
	struct Z_Construct_UClass_ATargetLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codelikeme_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetLight.h" },
		{ "ModuleRelativePath", "TargetLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetLight_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "TargetLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetLight_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetLight, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetLight_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetLight_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetLight_Statics::NewProp_SpotLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "SpotLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "TargetLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetLight_Statics::NewProp_SpotLightComponent = { "SpotLightComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetLight, SpotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetLight_Statics::NewProp_SpotLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetLight_Statics::NewProp_SpotLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetLight_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetLight_Statics::NewProp_SpotLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetLight_Statics::ClassParams = {
		&ATargetLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATargetLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetLight, 1276795875);
	template<> CODELIKEME_CPP_API UClass* StaticClass<ATargetLight>()
	{
		return ATargetLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetLight(Z_Construct_UClass_ATargetLight, &ATargetLight::StaticClass, TEXT("/Script/Codelikeme_CPP"), TEXT("ATargetLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
