// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AssetManagerActor.generated.h"

UCLASS(Blueprintable)
class ASSETMANAGER_API UAssetManagerActor : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UAssetManagerActor();

	FPrimaryAssetType  MyItemType = TEXT("Item");

	virtual FPrimaryAssetId GetPrimaryAssetId() const override; 


};
