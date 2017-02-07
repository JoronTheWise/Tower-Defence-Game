// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AIController.h"
#include "BasicEnemyAIController.generated.h"


UCLASS()
class TOWERDEFENCEGAME_API ABasicEnemyAIController : public AAIController
{

	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, Category = MyProperties)
		FVector destination;
	



};
