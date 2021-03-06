// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"


const FPrimaryAssetType UMyAssetManager::ItemType = TEXT("Item");

UMyAssetManager& UMyAssetManager::Get()
{
    UMyAssetManager* This = Cast<UMyAssetManager>(GEngine->AssetManager);

    if (This)
    {
        return *This;
    }
    else
    {
      //  UE_LOG(LogActionRPG, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be RPGAssetManager!"));
        return *NewObject<UMyAssetManager>(); // never calls this
    }
}

void UMyAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();
    int32 a =ScanPathsForPrimaryAssets(ItemType, TArray<FString>{"/Game"}, UObject::StaticClass(), true);

    GEngine->AddOnScreenDebugMessage(1,110.0f,FColor::Red,FString::FromInt(a));
    //UAbilitySystemGlobals::Get().InitGlobalData();
    
}


UAssetManagerActor* UMyAssetManager::ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{   
    FSoftObjectPath ItemPath = GetPrimaryAssetPath(PrimaryAssetId);

    // This does a synchronous load and may hitch
    UAssetManagerActor* LoadedItem = Cast<UAssetManagerActor>(ItemPath.TryLoad());

    if (bLogWarning && LoadedItem == nullptr)
    {
       // UE_LOG(LogActionRPG, Warning, TEXT("Failed to load item for identifier %s!"), *PrimaryAssetId.ToString());
    }

    return LoadedItem;
}

