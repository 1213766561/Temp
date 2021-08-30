// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item_Base.h"
#include "ItemComp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemPoolUpdateRequest, const TArray<FStruct_Dynamic_Item>&, LastItemPools);	

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ITEMSYSTEM_API UItemComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UItemComp();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags) override;


	//背包数据
	UPROPERTY(ReplicatedUsing = OnRep_ItemPools)
	TArray<FStruct_Dynamic_Item> ItemPools;
	//背包数据更新回调
	UPROPERTY(BlueprintAssignable, Category = "ItemCompCallBackEvent")
	FItemPoolUpdateRequest Client_OnItemPoolUpdateRequest;	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		//设置背包数据
	UFUNCTION(BlueprintCallable, Category = "ItemCompEvent")
		void SetItemPool(TArray<FStruct_Dynamic_Item> TargetItems,bool& success);
	//获得背包数据	
	UFUNCTION(BlueprintPure, BlueprintPure,Category = "ItemCompProperty")
		TArray<FStruct_Dynamic_Item> GetItemPool();	
	//添加物品到对应的槽位上(-1代表放到第一个可以放的槽位)	
	UFUNCTION(BlueprintCallable, Category = "ItemCompEvent")
		void MoveItemToSlot(bool IsCheck,int32 TargetSlot, FStruct_Dynamic_Item ItemDynamicInfo, bool& Success,FName& ErrorInfo);
	//移除对应槽位上的物品
	UFUNCTION(BlueprintCallable, Category = "ItemCompEvent")
		void RemoveItemFormSlot(bool IsCheck, FStruct_Dynamic_Item ItemDynamicInfo, bool& Success,FName& ErrorInfo);
	UFUNCTION(BlueprintNativeEvent)
		void OnRep_ItemPools();
		
};
