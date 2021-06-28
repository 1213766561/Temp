// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Build_Struct_Dynamic.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBuild_Struct_Dynamic
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 BuildNetID;		//��������ID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		int32 BuildID;		//��������ID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		FName BuildOwnerTag;		//��������ID
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Table")
		FTransform BuildTransform;		//����Transform
};