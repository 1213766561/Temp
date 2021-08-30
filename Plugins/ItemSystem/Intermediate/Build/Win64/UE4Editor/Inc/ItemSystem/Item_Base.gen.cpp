// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemSystem/Public/Item_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Base() {}
// Cross Module References
	ITEMSYSTEM_API UEnum* Z_Construct_UEnum_ItemSystem_EItemEnum();
	UPackage* Z_Construct_UPackage__Script_ItemSystem();
	ITEMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Dynamic_Item();
	ITEMSYSTEM_API UClass* Z_Construct_UClass_UItemComp_NoRegister();
	ITEMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStruct_Static_Item();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
	static UEnum* EItemEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ItemSystem_EItemEnum, Z_Construct_UPackage__Script_ItemSystem(), TEXT("EItemEnum"));
		}
		return Singleton;
	}
	template<> ITEMSYSTEM_API UEnum* StaticEnum<EItemEnum>()
	{
		return EItemEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemEnum(EItemEnum_StaticEnum, TEXT("/Script/ItemSystem"), TEXT("EItemEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ItemSystem_EItemEnum_Hash() { return 4239355977U; }
	UEnum* Z_Construct_UEnum_ItemSystem_EItemEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ItemSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemEnum"), 0, Get_Z_Construct_UEnum_ItemSystem_EItemEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemEnum::E_Normal", (int64)EItemEnum::E_Normal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E_Normal.DisplayName", "Normal" },
				{ "E_Normal.Name", "EItemEnum::E_Normal" },
				{ "ModuleRelativePath", "Public/Item_Base.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ItemSystem,
				nullptr,
				"EItemEnum",
				"EItemEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStruct_Dynamic_Item::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ITEMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruct_Dynamic_Item, Z_Construct_UPackage__Script_ItemSystem(), TEXT("Struct_Dynamic_Item"), sizeof(FStruct_Dynamic_Item), Get_Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Hash());
	}
	return Singleton;
}
template<> ITEMSYSTEM_API UScriptStruct* StaticStruct<FStruct_Dynamic_Item>()
{
	return FStruct_Dynamic_Item::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruct_Dynamic_Item(FStruct_Dynamic_Item::StaticStruct, TEXT("/Script/ItemSystem"), TEXT("Struct_Dynamic_Item"), false, nullptr, nullptr);
static struct FScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Dynamic_Item
{
	FScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Dynamic_Item()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struct_Dynamic_Item")),new UScriptStruct::TCppStructOps<FStruct_Dynamic_Item>);
	}
} ScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Dynamic_Item;
	struct Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnItemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnItemComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruct_Dynamic_Item>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//ItemID\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "ItemID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Dynamic_Item, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//ItemNum\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "ItemNum" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Dynamic_Item, Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//ItemIndex\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "ItemIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Dynamic_Item, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_OwnItemComp_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//ItemComp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "ItemComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_OwnItemComp = { "OwnItemComp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Dynamic_Item, OwnItemComp), Z_Construct_UClass_UItemComp_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_OwnItemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_OwnItemComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::NewProp_OwnItemComp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ItemSystem,
		nullptr,
		&NewStructOps,
		"Struct_Dynamic_Item",
		sizeof(FStruct_Dynamic_Item),
		alignof(FStruct_Dynamic_Item),
		Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruct_Dynamic_Item()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ItemSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struct_Dynamic_Item"), sizeof(FStruct_Dynamic_Item), Get_Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Hash() { return 3376729615U; }

static_assert(std::is_polymorphic<FStruct_Static_Item>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStruct_Static_Item cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStruct_Static_Item::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ITEMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FStruct_Static_Item_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruct_Static_Item, Z_Construct_UPackage__Script_ItemSystem(), TEXT("Struct_Static_Item"), sizeof(FStruct_Static_Item), Get_Z_Construct_UScriptStruct_FStruct_Static_Item_Hash());
	}
	return Singleton;
}
template<> ITEMSYSTEM_API UScriptStruct* StaticStruct<FStruct_Static_Item>()
{
	return FStruct_Static_Item::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruct_Static_Item(FStruct_Static_Item::StaticStruct, TEXT("/Script/ItemSystem"), TEXT("Struct_Static_Item"), false, nullptr, nullptr);
static struct FScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Static_Item
{
	FScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Static_Item()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struct_Static_Item")),new UScriptStruct::TCppStructOps<FStruct_Static_Item>);
	}
} ScriptStruct_ItemSystem_StaticRegisterNativesFStruct_Static_Item;
	struct Z_Construct_UScriptStruct_FStruct_Static_Item_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotMaxNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotMaxNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgreeRemove_MetaData[];
#endif
		static void NewProp_AgreeRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AgreeRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruct_Static_Item>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//ItemID\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "ItemID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Static_Item, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//Item\xe7\xb1\xbb\xe5\x9e\x8b\x09\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "Item\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Static_Item, ItemType), Z_Construct_UEnum_ItemSystem_EItemEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_SlotMaxNum_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x9c\x80\xe5\xa4\xa7\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x9c\x80\xe5\xa4\xa7\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_SlotMaxNum = { "SlotMaxNum", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruct_Static_Item, SlotMaxNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_SlotMaxNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_SlotMaxNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove_MetaData[] = {
		{ "Category", "Table" },
		{ "Comment", "//\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe5\xa4\x9f\xe7\xa7\xbb\xe9\x99\xa4\n" },
		{ "ModuleRelativePath", "Public/Item_Base.h" },
		{ "ToolTip", "\xe6\xa7\xbd\xe4\xbd\x8d\xe6\x98\xaf\xe5\x90\xa6\xe8\x83\xbd\xe5\xa4\x9f\xe7\xa7\xbb\xe9\x99\xa4" },
	};
#endif
	void Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove_SetBit(void* Obj)
	{
		((FStruct_Static_Item*)Obj)->AgreeRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove = { "AgreeRemove", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStruct_Static_Item), &Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_SlotMaxNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::NewProp_AgreeRemove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ItemSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Struct_Static_Item",
		sizeof(FStruct_Static_Item),
		alignof(FStruct_Static_Item),
		Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruct_Static_Item()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStruct_Static_Item_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ItemSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struct_Static_Item"), sizeof(FStruct_Static_Item), Get_Z_Construct_UScriptStruct_FStruct_Static_Item_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruct_Static_Item_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruct_Static_Item_Hash() { return 1968568672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
