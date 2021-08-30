// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_GameInstance() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_GameInstance_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void UNM_GameInstance::StaticRegisterNativesUNM_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UNM_GameInstance_NoRegister()
	{
		return UNM_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNM_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNM_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNM_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NM_GameInstance.h" },
		{ "ModuleRelativePath", "Public/NM_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNM_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNM_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNM_GameInstance_Statics::ClassParams = {
		&UNM_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNM_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNM_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNM_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNM_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNM_GameInstance, 897709880);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<UNM_GameInstance>()
	{
		return UNM_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNM_GameInstance(Z_Construct_UClass_UNM_GameInstance, &UNM_GameInstance::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("UNM_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNM_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
