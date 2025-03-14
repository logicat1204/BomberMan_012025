#include "Bloque_madera.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h" // Para FMath::RandRange

ABloque_madera::ABloque_madera()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Cargar una malla (puedes cambiarla por otra si quieres)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
    }

    // Cargar un material de madera (opcional)
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }

    // Inicializar variables
    bDebeRotar = false;
    VelocidadRotacion = 100.0f; // Velocidad de rotación predeterminada
}

void ABloque_madera::BeginPlay()
{
    Super::BeginPlay();

    // Activar la rotación de manera aleatoria (1 de cada 3 bloques)
    if (FMath::RandRange(1, 3) == 1) // 33% de probabilidad
    {
        ActivarRotacion();
    }
}

void ABloque_madera::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Rotar el bloque si está activado
    if (bDebeRotar)
    {
        FRotator NuevaRotacion = GetActorRotation();
        NuevaRotacion.Yaw += VelocidadRotacion * DeltaTime; // Rotar en el eje Z (Yaw)
        SetActorRotation(NuevaRotacion);
    }
}

void ABloque_madera::ActivarRotacion()
{
    bDebeRotar = true;
}