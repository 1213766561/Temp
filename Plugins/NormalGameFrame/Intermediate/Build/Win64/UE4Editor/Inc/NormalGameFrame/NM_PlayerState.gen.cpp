// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_PlayerState() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_PlayerState_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_PlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void ANM_PlayerState::StaticRegisterNativesANM_PlayerState()
	{
	}
	UClass* Z_Construct_UClass_ANM_PlayerState_NoRegister()
	{
		return ANM_PlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ANM_PlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANM_PlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANM_PlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NM_PlayerState.h" },
		{ "ModuleRelativePath", "Public/NM_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANM_PlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANM_PlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANM_PlayerState_Statics::ClassParams = {
		&ANM_PlayerState::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ANM_PlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANM_PlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANM_PlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANM_PlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANM_PlayerState, 676583968);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<ANM_PlayerState>()
	{
		return ANM_PlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANM_PlayerState(Z_Construct_UClass_ANM_PlayerState, &ANM_PlayerState::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("ANM_PlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANM_PlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
