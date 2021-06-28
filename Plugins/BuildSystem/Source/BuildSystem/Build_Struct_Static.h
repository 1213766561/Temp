// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Build_Enum.h"
#include "Build_Struct_Static.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBuild_Struct_Static : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 BuildID;		//建筑ID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		EBuild_Enum BuildType;	//物品类型
};