// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bag_Struct_Dynamic.h"
#include "ItemSystem/Item_Struct_Static.h"
#include "Components/ActorComponent.h"
#include "BagComp.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemPoolUpdateRequest, const TArray<FBag_Struct_Dynamic>&, LastItemPools);	


//BagSystem
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BAGSYSTEM_API UBagComp : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UBagComp();
public:
	UPROPERTY()
	
		//背包数据
		TArray<FBag_Struct_Dynamic> ItemPools;
		//背包数据更新回调
		UPROPERTY(BlueprintAssignable, Category = "ItemCompDelegateEvent")
		FItemPoolUpdateRequest OnItemPoolUpdateRequest;	
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	//设置背包数据
	UFUNCTION(BlueprintCallable, Category = "ItemCompEvent")
		void SetItemPool(TArray<FBag_Struct_Dynamic> TargetItems,bool& success);
	//获得背包数据	
	UFUNCTION(BlueprintPure, BlueprintPure,Category = "ItemCompProperty")
		TArray<FBag_Struct_Dynamic> GetItemPool();	
	//添加物品到对应的槽位上	
	UFUNCTION(BlueprintCallable, Category = "ItemCompCheck")
		void AddItemCheck(FBag_Struct_Dynamic TargetItem, FItem_Struct_Static ItemStaticInfo, bool& agree, int32& TargetSlot);	
	//移动物品到对应的槽位上
	UFUNCTION(BlueprintCallable, Category = "ItemCompCheck")
		void MoveItemCheck(FBag_Struct_Dynamic TargetItem, FItem_Struct_Static ItemStaticInfo, int32 CurrentSlot, int32 TargetSlot, bool& agree, TArray<FBag_Struct_Dynamic>& NewPools);
	//移除对应槽位上的物品
	UFUNCTION(BlueprintCallable, Category = "ItemCompCheck")
		void RemoveItemCheck(FBag_Struct_Dynamic TargetItem, int32 CurrentSlot, bool& agree, TArray<FBag_Struct_Dynamic>& NewPools);


		
};
