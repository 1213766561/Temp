// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ItemEnum.generated.h"

/**
 * 物品类型
 */
UENUM(BlueprintType)
enum class EItemEnum : uint8
{
	E_Normal UMETA(DisplayName = "Normal"),
};
