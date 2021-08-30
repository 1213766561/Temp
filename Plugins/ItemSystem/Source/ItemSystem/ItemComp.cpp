// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemComp.h"
#include "Net/UnrealNetwork.h"
#include "ItemFunctionLib.h"

// Sets default values for this component's properties
UItemComp::UItemComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);

	// ...
}


// Called when the game starts
void UItemComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UItemComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UItemComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(UItemComp,ItemPools,COND_OwnerOnly);
}

void UItemComp::OnRep_ItemPools_Implementation()
{
	Client_OnItemPoolUpdateRequest.Broadcast(ItemPools);
}

void  UItemComp::SetItemPool(TArray<FStruct_Dynamic_Item> TargetItems,bool& success)
{
		ItemPools.Reset(0);
		ItemPools.Append(TargetItems);
		true;
}


TArray<FStruct_Dynamic_Item> UItemComp::GetItemPool()
{

	return ItemPools;
}

void UItemComp::MoveItemToSlot(bool IsCheck,int32 TargetSlot, FStruct_Dynamic_Item ItemDynamicInfo, bool& Success,FName& ErrorInfo)
{
	if(ItemDynamicInfo.OwnItemComp != nullptr)
	{
		Success = false;
		ItemDynamicInfo.OwnItemComp->RemoveItemFormSlot(IsCheck,ItemDynamicInfo,Success,ErrorInfo);
		if (!Success)
	{
		return;
	}
	}

	
	if(TargetSlot == -1)
	{
		for(TArray<FStruct_Dynamic_Item>::TIterator Iter(ItemPools);Iter;Iter++)
		{
			FStruct_Dynamic_Item TempDynamic = *Iter;
			if(TempDynamic.ItemID.IsEmpty())
			{
				FStruct_Static_Item TempStatic = FStruct_Static_Item();
				bool TempBool = false;
				UItemFunctionLib::GetItemStaticInfo(ItemDynamicInfo.ItemID,TempBool,TempStatic);
				if(TempBool && ItemDynamicInfo.Num <= TempStatic.SlotMaxNum)
				{
					Success = true;
					if (IsCheck)
					{
					return;
					}
					ItemPools[Iter.GetIndex()] = FStruct_Dynamic_Item(ItemDynamicInfo.ItemID,ItemDynamicInfo.Num,Iter.GetIndex(),this);
					return;
				}
			}
			if(TempDynamic.ItemID == ItemDynamicInfo.ItemID)
			{
				int32 TempInt = TempDynamic.Num + ItemDynamicInfo.Num;
				FStruct_Static_Item TempStatic = FStruct_Static_Item();
				bool TempBool = false;
				UItemFunctionLib::GetItemStaticInfo(ItemDynamicInfo.ItemID,TempBool,TempStatic);
				if(TempBool && TempInt <= TempStatic.SlotMaxNum)
				{
					Success = true;
					if (IsCheck)
					{
					return;
					}
					ItemPools[Iter.GetIndex()] = FStruct_Dynamic_Item(ItemDynamicInfo.ItemID,TempInt,Iter.GetIndex(),this);//Insert(FStruct_Dynamic_Item(ItemDynamicInfo.ItemID,TempInt,Iter.GetIndex(),this),Iter.GetIndex());
					return;
				}
			}
		}
		Success = false;
		return;
	}
	
		if(ItemPools.IsValidIndex(TargetSlot))
	{
		if(ItemPools[TargetSlot].ItemID == ItemDynamicInfo.ItemID)
		{
			
			FStruct_Static_Item TempStatic = FStruct_Static_Item();
			bool TempBool = false;
			UItemFunctionLib::GetItemStaticInfo(ItemDynamicInfo.ItemID,TempBool,TempStatic);
			int32 TempInt = ItemPools[TargetSlot].Num + ItemDynamicInfo.Num;
			if(TempBool && TempInt <= TempStatic.SlotMaxNum)
			{
				Success = true;
				if(IsCheck)
				{
					return;
				}
				ItemPools[TargetSlot].Num = TempInt;
				return;
			}
		}
		Success = false;
		FString TempString;
		return;
	}
}


void UItemComp::RemoveItemFormSlot(bool IsCheck, FStruct_Dynamic_Item ItemDynamicInfo, bool& Success,FName& ErrorInfo)
{
	if(ItemDynamicInfo.OwnItemComp == this &&
	ItemPools.IsValidIndex(ItemDynamicInfo.SlotIndex) &&
	ItemPools[ItemDynamicInfo.SlotIndex].ItemID == ItemDynamicInfo.ItemID &&
	ItemPools[ItemDynamicInfo.SlotIndex].Num>=ItemDynamicInfo.Num)
	{
		{
			if(IsCheck)
			{
				Success = true;
				return;
			}
			FStruct_Dynamic_Item T;
			if((ItemPools[ItemDynamicInfo.SlotIndex].Num-ItemDynamicInfo.Num)==0)
			{
				FStruct_Static_Item TempStatic = FStruct_Static_Item();
				bool TempBool = false;
				UItemFunctionLib::GetItemStaticInfo(ItemDynamicInfo.ItemID,TempBool,TempStatic);
				if (TempStatic.AgreeRemove)
				{
					T = FStruct_Dynamic_Item("",0,ItemDynamicInfo.SlotIndex,this);
				}
				else
				{
					T = FStruct_Dynamic_Item(ItemDynamicInfo.ItemID,ItemPools[ItemDynamicInfo.SlotIndex].Num-ItemDynamicInfo.Num,ItemDynamicInfo.SlotIndex,this);
				}
				ItemPools[ItemDynamicInfo.SlotIndex]=T;
				Success = true;
				return;
			}
			T = FStruct_Dynamic_Item(ItemDynamicInfo.ItemID,ItemPools[ItemDynamicInfo.SlotIndex].Num-ItemDynamicInfo.Num,ItemDynamicInfo.SlotIndex,this);
			ItemPools[ItemDynamicInfo.SlotIndex]=T;
			Success = true;
			return;
			
		}

		Success = false;
		return;



	}
		Success = false;
		return;
}
