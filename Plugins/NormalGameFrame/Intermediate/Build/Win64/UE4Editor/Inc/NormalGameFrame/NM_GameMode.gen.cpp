// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_GameMode() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_GameMode_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void ANM_GameMode::StaticRegisterNativesANM_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANM_GameMode_NoRegister()
	{
		return ANM_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANM_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANM_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANM_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NM_GameMode.h" },
		{ "ModuleRelativePath", "Public/NM_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANM_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANM_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANM_GameMode_Statics::ClassParams = {
		&ANM_GameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANM_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANM_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANM_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANM_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANM_GameMode, 399058974);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<ANM_GameMode>()
	{
		return ANM_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANM_GameMode(Z_Construct_UClass_ANM_GameMode, &ANM_GameMode::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("ANM_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANM_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
