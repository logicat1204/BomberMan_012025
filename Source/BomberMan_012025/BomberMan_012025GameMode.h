// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Bloque_acero.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_012025GameMode.generated.h"



UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_012025GameMode();
	void BeginPlay();

private:
	UPROPERTY(EditAnywhere, Category = "Configuraci�n")
	int CantidadDeBloques = 5; // N�mero de bloques a generar

	void SpawnBloques();
};



