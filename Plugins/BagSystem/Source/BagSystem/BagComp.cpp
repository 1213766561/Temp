// Fill out your copyright notice in the Description page of Project Settings.


#include "BagComp.h"
//#include "ScriptDelegates.h"




// Sets default values for this component's properties
UBagComp::UBagComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}



// Called when the game starts
void UBagComp::BeginPlay()
{
	Super::BeginPlay();

	/*OnItemPoolUpdateRequest.AddDynamic(this, &UBagComp::TestBagBindEvent);*/
	
	
}




// Called every frame
//void UBagComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}


void  UBagComp::SetItemPool(TArray<FBag_Struct_Dynamic> TargetItems,bool& success)
{
		ItemPools.Reset(0);
		ItemPools.Append(TargetItems);
		OnItemPoolUpdateRequest.Broadcast(ItemPools);
		true;
}


TArray<FBag_Struct_Dynamic> UBagComp::GetItemPool()
{

	return ItemPools;
}


void UBagComp::AddItemCheck(FBag_Struct_Dynamic TargetItem,FItem_Struct_Static ItemStaticInfo, bool & agree, int32 & TargetSlot)
{

	if (!agree)
	{
		for (int32 i = 0; i <= ItemPools.Num() - 1; i++)
		{
			if (ItemPools[i].ItemID == TargetItem.ItemID && ItemPools[i].ItemNum + TargetItem.ItemNum <= ItemStaticInfo.SlotMaxNum)
			{
				
				agree = true;
				TargetSlot = i;
				break;
			}
		}
	}

	if (!agree)
	{
		for (int32 i = 0; i <= ItemPools.Num() - 1; i++)
		{
			if (ItemPools[i].ItemID == 0)
			{
				
				agree = true;
				TargetSlot = i;
				break;
	
			}
		}
	}

	agree;
	TargetSlot;
	
}


void UBagComp::MoveItemCheck(FBag_Struct_Dynamic TargetItem, FItem_Struct_Static ItemStaticInfo, int32 CurrentSlot, int32 TargetSlot, bool & agree, TArray<FBag_Struct_Dynamic>& NewPools)
{
	agree = false;
	NewPools.Append(ItemPools);
	if (CurrentSlot>=0 && CurrentSlot!=TargetSlot && ItemPools.IsValidIndex(CurrentSlot))
	{
		if (ItemPools[CurrentSlot].ItemID  == TargetItem.ItemID && TargetItem.ItemNum <= ItemPools[CurrentSlot].ItemNum)
		{
			agree = true;
			if (TargetItem.ItemNum < ItemPools[CurrentSlot].ItemNum)
			{
				NewPools[CurrentSlot].ItemNum = ItemPools[CurrentSlot].ItemNum - TargetItem.ItemNum;
			}
			else
			{
				NewPools[CurrentSlot].ItemID = 0;
				NewPools[CurrentSlot].ItemNum = 0;
			}

		}
	}
	if (ItemPools.IsValidIndex(TargetSlot))
	{
		if (agree || CurrentSlot < 0)
		{
			if (ItemPools[TargetSlot].ItemID == 0 || ItemPools[TargetSlot].ItemID == TargetItem.ItemID && ItemPools[TargetSlot].ItemNum + TargetItem.ItemNum <= ItemStaticInfo.SlotMaxNum)
			{
				agree = true;
				NewPools[TargetSlot].ItemID = TargetItem.ItemID;
				NewPools[TargetSlot].ItemNum = ItemPools[TargetSlot].ItemNum + TargetItem.ItemNum;
				return;
			}
		}
	}
	
	agree = false;
	return;
}


void UBagComp::RemoveItemCheck(FBag_Struct_Dynamic TargetItem, int32 CurrentSlot, bool & agree, TArray<FBag_Struct_Dynamic>& NewPools)
{
	agree = false;
	NewPools.Append(ItemPools);
	if (CurrentSlot >= 0 && ItemPools.IsValidIndex(CurrentSlot))
	{
		if (ItemPools[CurrentSlot].ItemID == TargetItem.ItemID && TargetItem.ItemNum <= ItemPools[CurrentSlot].ItemNum)
		{
			agree = true;
			if (TargetItem.ItemNum < ItemPools[CurrentSlot].ItemNum)
			{
				NewPools[CurrentSlot].ItemNum = ItemPools[CurrentSlot].ItemNum - TargetItem.ItemNum;
			}
			else
			{
				NewPools[CurrentSlot].ItemID = 0;
				NewPools[CurrentSlot].ItemNum = 0;
			}
			return;
		}
	}

	return;

}






