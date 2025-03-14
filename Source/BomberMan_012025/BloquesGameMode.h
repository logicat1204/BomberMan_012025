#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BloquesGameMode.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloquesGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    // Constructor
    ABloquesGameMode();

protected:
    // Llamado cuando el juego comienza
    virtual void BeginPlay() override;

    // Método para spawnear bloques de acero
    void SpawnBloques();

    int probable;

private:
    // Cantidad de bloques a spawnear
    UPROPERTY(EditAnywhere, Category = "Spawn")
    int32 CantidadDeBloques;

    // Distancia entre bloques
    UPROPERTY(EditAnywhere, Category = "Spawn")
    float DistanciaEntreBloques;

    UPROPERTY(EditAnywhere, Category = "Spawn")
    int32 CantidadDeBloquesMadera;

    // Distancia entre bloques
    UPROPERTY(EditAnywhere, Category = "Spawn")
    float DistanciaEntreBloquesMadera;
};