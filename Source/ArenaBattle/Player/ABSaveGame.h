// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ABSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UABSaveGame();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Game)
	int32 RetryCount;
};
