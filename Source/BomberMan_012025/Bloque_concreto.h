// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_concreto.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloque_concreto : public AActor
{
    GENERATED_BODY()

public:
    ABloque_concreto();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    static int32 CantidadBloques; // Contador de bloques generados

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MallaBloque;

    void RotarBloque(); // Rotación del bloque
};