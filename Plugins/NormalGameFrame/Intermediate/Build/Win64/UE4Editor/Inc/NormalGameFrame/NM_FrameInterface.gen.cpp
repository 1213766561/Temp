// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NormalGameFrame/Public/NM_FrameInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNM_FrameInterface() {}
// Cross Module References
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_FrameInterface_NoRegister();
	NORMALGAMEFRAME_API UClass* Z_Construct_UClass_UNM_FrameInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NormalGameFrame();
// End Cross Module References
	void UNM_FrameInterface::StaticRegisterNativesUNM_FrameInterface()
	{
	}
	UClass* Z_Construct_UClass_UNM_FrameInterface_NoRegister()
	{
		return UNM_FrameInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNM_FrameInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNM_FrameInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NormalGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNM_FrameInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NM_FrameInterface.h" },
		{ "ModuleRelativePath", "Public/NM_FrameInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNM_FrameInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNM_FrameInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNM_FrameInterface_Statics::ClassParams = {
		&UNM_FrameInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNM_FrameInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNM_FrameInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNM_FrameInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNM_FrameInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNM_FrameInterface, 425158839);
	template<> NORMALGAMEFRAME_API UClass* StaticClass<UNM_FrameInterface>()
	{
		return UNM_FrameInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNM_FrameInterface(Z_Construct_UClass_UNM_FrameInterface, &UNM_FrameInterface::StaticClass, TEXT("/Script/NormalGameFrame"), TEXT("UNM_FrameInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNM_FrameInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
