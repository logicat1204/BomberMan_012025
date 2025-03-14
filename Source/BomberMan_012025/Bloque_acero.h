#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_acero.generated.h"


UCLASS()
class BOMBERMAN_012025_API ABloque_acero : public AActor
{
    GENERATED_BODY()

public:
    ABloque_acero();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Método para hacer desaparecer y aparecer el bloque
    void AlternarVisibilidad();

    // Timer para alternar la visibilidad
    void IniciarTimer();

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;

    bool bEsVisible; // Estado de visibilidad

    FTimerHandle TimerHandle; // Handle para el timer
};