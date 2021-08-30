// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Item_Base.generated.h"

/**
 * 
 */

class UItemComp;

UENUM(BlueprintType)
enum class EItemEnum : uint8
{
	E_Normal UMETA(DisplayName = "Normal"),
};

USTRUCT(BlueprintType)
struct FStruct_Static_Item : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	//ItemID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		FString ItemID;
	//Item类型	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		EItemEnum ItemType;	
	//槽位最大堆叠数
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 SlotMaxNum;
	//槽位是否能够移除
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		bool AgreeRemove;

public:
	FStruct_Static_Item():SlotMaxNum(1),AgreeRemove(true){}

};

USTRUCT(BlueprintType)
struct FStruct_Dynamic_Item 
{
	GENERATED_USTRUCT_BODY()
public:
	//ItemID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		FString ItemID;

	//ItemNum
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 Num;

	//ItemIndex
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 SlotIndex;

	//ItemComp
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		UItemComp* OwnItemComp;

public:
	FStruct_Dynamic_Item(
		FString TargetItemID,
		int32 TargetNum,
		int32 TargetIndex, 
		UItemComp* TargetOwnItemComp
		):
	ItemID(TargetItemID),
	Num(TargetNum),
	SlotIndex(TargetIndex),
	OwnItemComp(TargetOwnItemComp){}
	FStruct_Dynamic_Item():SlotIndex(-1),OwnItemComp(nullptr){}
};

