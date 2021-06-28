// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildComp.h"

// Sets default values for this component's properties
UBuildComp::UBuildComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBuildComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UBuildComp::SetBuildPool(TArray<FBuild_Struct_Dynamic> TargetBuilds, bool & success)
{
	BuildPools.Reset(0);
	BuildPools.Append(TargetBuilds);
	OnBuildPoolUpdateRequest.Broadcast(TargetBuilds);
	true;
}


TArray<FBuild_Struct_Dynamic> UBuildComp::GetBuildPool()
{
	return BuildPools;
}

// Called every frame
//void UBuildComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}

