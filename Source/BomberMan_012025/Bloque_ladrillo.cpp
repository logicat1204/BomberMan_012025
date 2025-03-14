// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_ladrillo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

int32 ABloque_ladrillo::CantidadBloques = 0; // Inicializamos el contador

ABloque_ladrillo::ABloque_ladrillo()
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

    Tiempo = 0.0f; // Inicia el temporizador para el movimiento
}

void ABloque_ladrillo::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation(); // Guarda la posición inicial
}

void ABloque_ladrillo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoverArribaYAbajo(); // Movimiento en cada frame
}

void ABloque_ladrillo::MoverArribaYAbajo()
{
    Tiempo += GetWorld()->DeltaTimeSeconds; // Aumenta el tiempo en cada frame
    float Desplazamiento = FMath::Sin(Tiempo * 2.0f) * 20.0f; // Movimiento de onda senoidal

    FVector NuevaPosicion = PosicionInicial;
    NuevaPosicion.Z += Desplazamiento; // Modifica la posición en el eje Z

    SetActorLocation(NuevaPosicion);
}