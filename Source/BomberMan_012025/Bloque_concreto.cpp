// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_concreto.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

int32 ABloque_concreto::CantidadBloques = 0; // Inicializamos el contador

ABloque_concreto::ABloque_concreto()
{
    PrimaryActorTick.bCanEverTick = true;

    MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    RootComponent = MallaBloque;

    // Cargar la malla desde el contenido de Unreal
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (ObjetoMallaBloque.Succeeded())
    {
        MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
        MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    CantidadBloques++; // Aumenta el contador al crearse un bloque
}

void ABloque_concreto::BeginPlay()
{
    Super::BeginPlay();
}

void ABloque_concreto::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    RotarBloque(); // Llamamos a la función de rotación en cada frame
}

void ABloque_concreto::RotarBloque()
{
    FRotator NuevaRotacion = GetActorRotation();
    NuevaRotacion.Yaw += 1.0f; // Gira lentamente en el eje Z
    SetActorRotation(NuevaRotacion);
}