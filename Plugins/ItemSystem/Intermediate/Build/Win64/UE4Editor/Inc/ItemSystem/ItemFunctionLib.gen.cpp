// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemSystem/Public/ItemFunctionLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFunctionLib() {}
// Cross Module References
	ITEMSYSTEM_API UClass* Z_Construct_UClass_UItemFunctionLib_NoRegister();
	ITEMSYSTEM_API UClass* Z_Construct_UClass_UItemFunctionLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ItemSystem();
	ITEMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Static_Item();
// End Cross Module References
	DEFINE_FUNCTION(UItemFunctionLib::execGetItemStaticInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetItemID);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FStruct_Static_Item,Z_Param_Out_ItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UItemFunctionLib::GetItemStaticInfo(Z_Param_TargetItemID,Z_Param_Out_Success,Z_Param_Out_ItemInfo);
		P_NATIVE_END;
	}
	void UItemFunctionLib::StaticRegisterNativesUItemFunctionLib()
	{
		UClass* Class = UItemFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemStaticInfo", &UItemFunctionLib::execGetItemStaticInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics
	{
		struct ItemFunctionLib_eventGetItemStaticInfo_Parms
		{
			FString TargetItemID;
			bool Success;
			FStruct_Static_Item ItemInfo;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetItemID;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_TargetItemID = { "TargetItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFunctionLib_eventGetItemStaticInfo_Parms, TargetItemID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((ItemFunctionLib_eventGetItemStaticInfo_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemFunctionLib_eventGetItemStaticInfo_Parms), &Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemFunctionLib_eventGetItemStaticInfo_Parms, ItemInfo), Z_Construct_UScriptStruct_FStruct_Static_Item, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_TargetItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::NewProp_ItemInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemInfo" },
		{ "ModuleRelativePath", "Public/ItemFunctionLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFunctionLib, nullptr, "GetItemStaticInfo", nullptr, nullptr, sizeof(ItemFunctionLib_eventGetItemStaticInfo_Parms), Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemFunctionLib_NoRegister()
	{
		return UItemFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UItemFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ItemSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFunctionLib_GetItemStaticInfo, "GetItemStaticInfo" }, // 1899622597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFunctionLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemFunctionLib.h" },
		{ "ModuleRelativePath", "Public/ItemFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFunctionLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemFunctionLib_Statics::ClassParams = {
		&UItemFunctionLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemFunctionLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFunctionLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemFunctionLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemFunctionLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemFunctionLib, 1026949899);
	template<> ITEMSYSTEM_API UClass* StaticClass<UItemFunctionLib>()
	{
		return UItemFunctionLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemFunctionLib(Z_Construct_UClass_UItemFunctionLib, &UItemFunctionLib::StaticClass, TEXT("/Script/ItemSystem"), TEXT("UItemFunctionLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFunctionLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
