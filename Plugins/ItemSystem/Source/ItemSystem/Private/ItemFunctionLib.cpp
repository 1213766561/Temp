// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemFunctionLib.h"

void UItemFunctionLib::GetItemStaticInfo(FString TargetItemID,bool& Success,FStruct_Static_Item& ItemInfo)
{
    UDataTable  *LoadDataObj = LoadObject<UDataTable>(NULL, UTF8_TO_TCHAR("DataTable'/ItemSystem/DataTable/DT_Item.DT_Item'"));
	FString ContextString;
	TArray<FName> RowNames = LoadDataObj->GetRowNames();
	for(FName name:RowNames)
	{
        name == FName(*TargetItemID);
	    ItemInfo = *(LoadDataObj->FindRow<FStruct_Static_Item>(name,ContextString));
        Success = true;
        return;
    }
    Success = false;
    return;
}