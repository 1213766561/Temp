// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStruct_Static_Item;
#ifdef ITEMSYSTEM_ItemFunctionLib_generated_h
#error "ItemFunctionLib.generated.h already included, missing '#pragma once' in ItemFunctionLib.h"
#endif
#define ITEMSYSTEM_ItemFunctionLib_generated_h

#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_SPARSE_DATA
#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemStaticInfo);


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemStaticInfo);


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFunctionLib(); \
	friend struct Z_Construct_UClass_UItemFunctionLib_Statics; \
public: \
	DECLARE_CLASS(UItemFunctionLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ItemSystem"), NO_API) \
	DECLARE_SERIALIZER(UItemFunctionLib)


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItemFunctionLib(); \
	friend struct Z_Construct_UClass_UItemFunctionLib_Statics; \
public: \
	DECLARE_CLASS(UItemFunctionLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ItemSystem"), NO_API) \
	DECLARE_SERIALIZER(UItemFunctionLib)


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemFunctionLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemFunctionLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFunctionLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFunctionLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemFunctionLib(UItemFunctionLib&&); \
	NO_API UItemFunctionLib(const UItemFunctionLib&); \
public:


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemFunctionLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemFunctionLib(UItemFunctionLib&&); \
	NO_API UItemFunctionLib(const UItemFunctionLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFunctionLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFunctionLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemFunctionLib)


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_PRIVATE_PROPERTY_OFFSET
#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_13_PROLOG
#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_PRIVATE_PROPERTY_OFFSET \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_SPARSE_DATA \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_RPC_WRAPPERS \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_INCLASS \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_PRIVATE_PROPERTY_OFFSET \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_SPARSE_DATA \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_INCLASS_NO_PURE_DECLS \
	Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ITEMSYSTEM_API UClass* StaticClass<class UItemFunctionLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Temp_Plugins_ItemSystem_Source_ItemSystem_Public_ItemFunctionLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
