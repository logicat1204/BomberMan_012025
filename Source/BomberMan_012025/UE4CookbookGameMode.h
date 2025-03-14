// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Gradas.h"
#include "UE4CookbookGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AUE4CookbookGameMode : public AGameModeBase
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
	
	UPROPERTY()
	AGradas* SpawnedActor;

	UFUNCTION()
	void DestroyActorFunction();

	
};
