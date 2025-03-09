#include "RandomMovementComponent.h"
URandomMovementComponent::URandomMovementComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    MovementRadius = 5;
}
void URandomMovementComponent::BeginPlay()
{
    Super::BeginPlay();
}
void URandomMovementComponent::TickComponent(float
    DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType,
        ThisTickFunction);
    AActor* Parent = GetOwner();
    if (Parent)
    {
        Parent->SetActorLocation(
            Parent->GetActorLocation() +
            FVector(
                FMath::FRandRange(-1.0f, 1.0f) * MovementRadius,
                FMath::FRandRange(-1.0f, 1.0f) * MovementRadius,
                FMath::FRandRange(-1.0f, 1.0f) * MovementRadius));
    }
}