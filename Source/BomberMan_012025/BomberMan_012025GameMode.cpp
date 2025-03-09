// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h" // Incluye la clase Bloque.
#include "Muro.h" // Incluye la clase Muro.

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// Configura la clase predeterminada del jugador (Pawn) usando un Blueprint.
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL) // Verifica si se encontró el Blueprint.
	{
		DefaultPawnClass = PlayerPawnBPClass.Class; // Asigna el Blueprint como la clase predeterminada del jugador.
	}

}
// Llamado cuando el juego comienza.
void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay(); // Llama a la implementación base de BeginPlay().

	// Muestra un mensaje en pantalla para indicar que se está generando bloques.
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	// Variables para contar cuántos bloques y muros pueden moverse.
	int numeroMuroConMovimiento = 0;
	int numeroBloqueConMovimiento = 0;

	// Rangos para las coordenadas X, Y y Z.
	int minX = 350;
	int maxX = 2550;
	int minY = 450;
	int maxY = 1150;
	int cordZ = 0; // Coordenada Z (altura) fija.

	// Generar 10 bloques en posiciones aleatorias.
	for (int i = 0; i < 10; i++)
	{
		// Genera coordenadas aleatorias dentro de los rangos especificados.
		int randomX = FMath::RandRange(minX, maxX);
		int randomY = FMath::RandRange(minY, maxY);

		// Crea un nuevo bloque en la posición aleatoria.
		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), // Clase del bloque.
			FVector(static_cast<float>(randomX), static_cast<float>(randomY), static_cast<float>(cordZ)), // Posición.
			FRotator(0.0f, 0.0f, 0.0f) // Rotación inicial.
		);

		// Verifica si el bloque puede moverse.
		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++; // Incrementa el contador de bloques móviles.
		}

		// Si ya hay 2 bloques móviles, desactiva el movimiento para los siguientes.
		if (numeroBloqueConMovimiento >= 2)
		{
			bloque->bPuedeMoverse = false;
		}
	}

	// Generar 20 muros en posiciones aleatorias.
	for (int i = 0; i < 20; i++)
	{
		// Genera coordenadas aleatorias dentro de los rangos especificados.
		int randomX = FMath::RandRange(minX, maxX);
		int randomY = FMath::RandRange(minY, maxY);

		// Crea un nuevo muro en la posición aleatoria.
		AMuro* muro = GetWorld()->SpawnActor<AMuro>(
			AMuro::StaticClass(), // Clase del muro.
			FVector(static_cast<float>(randomX), static_cast<float>(randomY), static_cast<float>(cordZ)), // Posición.
			FRotator(0.0f, 0.0f, 0.0f) // Rotación inicial.
		);

		// Verifica si el muro puede moverse.
		if (muro->mPuedeMoverse)
		{
			numeroMuroConMovimiento++; // Incrementa el contador de muros móviles.
		}

		// Si ya hay 4 muros móviles, desactiva el movimiento para los siguientes.
		if (numeroMuroConMovimiento >= 4)
		{
			muro->mPuedeMoverse = false;
		}
	}
}