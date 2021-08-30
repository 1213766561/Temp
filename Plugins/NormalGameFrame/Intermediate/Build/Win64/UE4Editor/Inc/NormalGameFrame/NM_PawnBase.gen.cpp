// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_PawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_PawnBase() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_PawnBase_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_ANM_PawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void ANM_PawnBase::StaticRegisterNativesANM_PawnBase()
	{
	}
	UClass* Z_Construct_UClass_ANM_PawnBase_NoRegister()
	{
		return ANM_PawnBase::StaticClass();
	}
	struct Z_Construct_UClass_ANM_PawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANM_PawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANM_PawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NM_PawnBase.h" },
		{ "ModuleRelativePath", "Public/NM_PawnBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANM_PawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANM_PawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANM_PawnBase_Statics::ClassParams = {
		&ANM_PawnBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANM_PawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANM_PawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANM_PawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANM_PawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANM_PawnBase, 1600718530);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<ANM_PawnBase>()
	{
		return ANM_PawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANM_PawnBase(Z_Construct_UClass_ANM_PawnBase, &ANM_PawnBase::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("ANM_PawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANM_PawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
