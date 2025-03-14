#include "BloquesGameMode.h"
#include "Bloque_acero.h"
#include "Bloque_concreto.h"
#include "Bloque_ladrillo.h"
#include "Bloque_madera.h"
#include "UObject/ConstructorHelpers.h"

ABloquesGameMode::ABloquesGameMode()
{
    // Configura la clase predeterminada del jugador (Pawn) usando un Blueprint.
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    // Valores predeterminados para la cantidad de bloques y la distancia entre ellos
    CantidadDeBloques = 5;
    DistanciaEntreBloques = 100.0f;
    CantidadDeBloquesMadera = 5;
    DistanciaEntreBloquesMadera = 100.0f;
}

void ABloquesGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Llama al método para spawnear bloques
    SpawnBloques();
}

void ABloquesGameMode::SpawnBloques()
    {
        if (GetWorld())
        {
            for (int i = 0; i < CantidadDeBloques; i++)
            {
                // Calcula la posición de spawn
                FVector SpawnLocation(360.0f, 1250.f + DistanciaEntreBloques * i, 50.0f);
                FRotator SpawnRotation(0.0f, 0.0f, 0.0f);

                // Spawnea el bloque de acero
                ABloque_acero* Bloque = GetWorld()->SpawnActor<ABloque_acero>(ABloque_acero::StaticClass(), SpawnLocation, SpawnRotation);

                // Probabilidad de alternar visibilidad (33% de probabilidad)
                if (FMath::RandRange(1, 3) == 1) // 1 de cada 3 bloques
                {
                    Bloque->IniciarTimer(); // Iniciar el timer para alternar visibilidad
                }
            }
        }

        // Spawnear bloques de madera (sin cambios)
        if (GetWorld())
        {
            for (int32 i = 0; i < CantidadDeBloquesMadera; i++)
            {
                // Calcula la posición de spawn
                FVector SpawnLocation(550.0f, 1350.f + DistanciaEntreBloquesMadera * i, 50.0f);
                FRotator SpawnRotation(0.0f, 0.0f, 0.0f);

                // Spawnea el bloque de madera
                ABloque_madera* Bloque = GetWorld()->SpawnActor<ABloque_madera>(ABloque_madera::StaticClass(), SpawnLocation, SpawnRotation);

                if (Bloque)
                {
                    // Opcional: Configura propiedades adicionales del bloque
                    UE_LOG(LogTemp, Warning, TEXT("Bloque de madera spawnedo en: %s"), *SpawnLocation.ToString());
                }
            }
        }
        for (int i = 0; i < 20; i++)
        {
            ABloque_concreto* Bloque_concreto = GetWorld()->SpawnActor<ABloque_concreto>(ABloque_concreto::StaticClass(), FVector(50.0f + i * 10, 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
        }

        for (int i = 0; i < 20; i++)
        {
            ABloque_ladrillo* Bloque_ladrillo = GetWorld()->SpawnActor<ABloque_ladrillo>(ABloque_ladrillo::StaticClass(), FVector(500.0f + i * 100, 250.0f - i * 10, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
        }
    }