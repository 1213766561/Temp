// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Build_Struct_Dynamic.h"
#include "Components/ActorComponent.h"
#include "BuildComp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildPoolUpdateRequest,const TArray<FBuild_Struct_Dynamic>&,TargetBuildPools); //BuildSystem
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDSYSTEM_API UBuildComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuildComp();
	UPROPERTY()
		TArray<FBuild_Struct_Dynamic> BuildPools;		//������
	UPROPERTY(BlueprintAssignable)
		FBuildPoolUpdateRequest	OnBuildPoolUpdateRequest;		//�����������޸Ļص�


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = "BuildCompEvent")	
		void SetBuildPool(TArray<FBuild_Struct_Dynamic> TargetBuilds, bool& success);		//���ý�����
	UFUNCTION(BlueprintPure, Category = "BuildCompProperty")
		TArray<FBuild_Struct_Dynamic> GetBuildPool();		//��ȡ��ǰ������
};
