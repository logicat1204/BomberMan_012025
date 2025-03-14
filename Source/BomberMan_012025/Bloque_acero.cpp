#include "Bloque_acero.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h" // Para usar timers

ABloque_acero::ABloque_acero()
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

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }

    // Definir como indestructible
    MeshComponent->SetSimulatePhysics(false);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    MeshComponent->SetCollisionResponseToAllChannels(ECR_Block);

    // Iniciar visible
    bEsVisible = true;
}

void ABloque_acero::BeginPlay()
{
    Super::BeginPlay();

    // Iniciar el timer para alternar la visibilidad
    IniciarTimer();
}

void ABloque_acero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABloque_acero::AlternarVisibilidad()
{
    // Alternar la visibilidad
    bEsVisible = !bEsVisible;

    // Ocultar o mostrar el actor en el juego
    SetActorHiddenInGame(!bEsVisible);

    // Habilitar o deshabilitar las colisiones
    SetActorEnableCollision(bEsVisible);
}

void ABloque_acero::IniciarTimer()
{
    // Configurar el timer para que llame a AlternarVisibilidad cada 1 segundo
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABloque_acero::AlternarVisibilidad, 1.0f, true);
}