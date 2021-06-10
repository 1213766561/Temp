// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetManagerActor.h"

// Sets default values



UAssetManagerActor::UAssetManagerActor()
{


}

FPrimaryAssetId UAssetManagerActor::GetPrimaryAssetId() const
{

    return FPrimaryAssetId(MyItemType, GetFName());
}



