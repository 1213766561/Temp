// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "AssetManagerActor.h"
#include "MyAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class ASSETMANAGER_API UMyAssetManager : public UAssetManager
{
	GENERATED_BODY()
	public:
    // Constructor and overrides
    UMyAssetManager() {}
    virtual void StartInitialLoading() override;

    /** Static types for items */
    static const FPrimaryAssetType  ItemType;

    /** Returns the current AssetManager object */
    static UMyAssetManager& Get();

    /**
     * Synchronously loads an RPGItem subclass, this can hitch but is useful when you cannot wait for an async load
     * This does not maintain a reference to the item so it will garbage collect if not loaded some other way
     */
    UAssetManagerActor* ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning = true);

};
