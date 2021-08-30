// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITEMSYSTEM_Item_Base_generated_h
#error "Item_Base.generated.h already included, missing '#pragma once' in Item_Base.h"
#endif
#define ITEMSYSTEM_Item_Base_generated_h

#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_Item_Base_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStruct_Dynamic_Item_Statics; \
	ITEMSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ITEMSYSTEM_API UScriptStruct* StaticStruct<struct FStruct_Dynamic_Item>();

#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_Item_Base_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStruct_Static_Item_Statics; \
	ITEMSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ITEMSYSTEM_API UScriptStruct* StaticStruct<struct FStruct_Static_Item>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Temp_Plugins_ItemSystem_Source_ItemSystem_Public_Item_Base_h


#define FOREACH_ENUM_EITEMENUM(op) \
	op(EItemEnum::E_Normal) 

enum class EItemEnum : uint8;
template<> ITEMSYSTEM_API UEnum* StaticEnum<EItemEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
