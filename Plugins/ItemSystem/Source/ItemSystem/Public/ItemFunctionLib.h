// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemSystem/Item_Base.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class ITEMSYSTEM_API UItemFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ItemInfo")
	static void GetItemStaticInfo (FString TargetItemID,bool& Success,FStruct_Static_Item& ItemInfo);

	
};
