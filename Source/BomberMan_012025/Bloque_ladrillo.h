// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_ladrillo.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloque_ladrillo : public AActor
{
    GENERATED_BODY()

public:
    ABloque_ladrillo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    static int32 CantidadBloques; // Contador de bloques generados

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MallaBloque;

    FVector PosicionInicial;
    float Tiempo;

    void MoverArribaYAbajo(); // Movimiento vertical
};