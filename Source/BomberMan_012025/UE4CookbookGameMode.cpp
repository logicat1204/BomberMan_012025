// Fill out your copyright notice in the Description page of Project Settings.
#include "Muro2.h"
#include "Gradas.h"
#include "UE4CookbookGameMode.h"

void AUE4CookbookGameMode::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red,
		TEXT("Actor Spawning"));
	FTransform SpawnLocation;
	GetWorld()->SpawnActor<AGradas>(
		AGradas::StaticClass(), SpawnLocation);
	GetWorld()->SpawnActor<AMuro2>(
		AMuro2::StaticClass(), SpawnLocation);
	SpawnedActor = GetWorld()->SpawnActor<AGradas>
		(AGradas::StaticClass(), SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this,
		&AUE4CookbookGameMode::DestroyActorFunction, 10);
}
void AUE4CookbookGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}