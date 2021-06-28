// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemEnum.h"
#include "Item_Struct_Static.generated.h"

/**
 * 
 */


USTRUCT(BlueprintType)
struct FItem_Struct_Static : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	//ItemID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 ItemID;
	//Item类型	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		EItemEnum ItemType;	
	//槽位最大堆叠数
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 SlotMaxNum;
};