// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_GameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_GameState() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_GameState_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_GameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void ANM_GameState::StaticRegisterNativesANM_GameState()
	{
	}
	UClass* Z_Construct_UClass_ANM_GameState_NoRegister()
	{
		return ANM_GameState::StaticClass();
	}
	struct Z_Construct_UClass_ANM_GameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANM_GameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANM_GameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NM_GameState.h" },
		{ "ModuleRelativePath", "Public/NM_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANM_GameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANM_GameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANM_GameState_Statics::ClassParams = {
		&ANM_GameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANM_GameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANM_GameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANM_GameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANM_GameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANM_GameState, 3528497470);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<ANM_GameState>()
	{
		return ANM_GameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANM_GameState(Z_Construct_UClass_ANM_GameState, &ANM_GameState::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("ANM_GameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANM_GameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
