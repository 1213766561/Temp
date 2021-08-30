// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_FrameBaseType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_FrameBaseType() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_FrameBaseType_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_FrameBaseType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void UNM_FrameBaseType::StaticRegisterNativesUNM_FrameBaseType()
	{
	}
	UClass* Z_Construct_UClass_UNM_FrameBaseType_NoRegister()
	{
		return UNM_FrameBaseType::StaticClass();
	}
	struct Z_Construct_UClass_UNM_FrameBaseType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNM_FrameBaseType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNM_FrameBaseType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NM_FrameBaseType.h" },
		{ "ModuleRelativePath", "Public/NM_FrameBaseType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNM_FrameBaseType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNM_FrameBaseType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNM_FrameBaseType_Statics::ClassParams = {
		&UNM_FrameBaseType::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNM_FrameBaseType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNM_FrameBaseType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNM_FrameBaseType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNM_FrameBaseType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNM_FrameBaseType, 3874655739);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<UNM_FrameBaseType>()
	{
		return UNM_FrameBaseType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNM_FrameBaseType(Z_Construct_UClass_UNM_FrameBaseType, &UNM_FrameBaseType::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("UNM_FrameBaseType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNM_FrameBaseType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
