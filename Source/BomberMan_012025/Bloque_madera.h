#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque_madera.generated.h"


UCLASS()
class BOMBERMAN_012025_API ABloque_madera : public AActor
{
    GENERATED_BODY()

public:
    ABloque_madera();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Funci�n para activar la rotaci�n
    void ActivarRotacion();

private:
    // Componente de malla est�tica
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;

    // Variable para controlar si el bloque debe rotar
    bool bDebeRotar;

    // Velocidad de rotaci�n
    UPROPERTY(EditAnywhere, Category = "Rotacion")
    float VelocidadRotacion;
};