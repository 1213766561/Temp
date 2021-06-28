// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bag_Struct_Dynamic.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBag_Struct_Dynamic
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 ItemID;		//物品ID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 ItemNum;		//物品数量
};
