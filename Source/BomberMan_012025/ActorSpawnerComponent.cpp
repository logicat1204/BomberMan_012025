#include "ActorSpawnerComponent.h"
UActorSpawnerComponent::UActorSpawnerComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}
void UActorSpawnerComponent::BeginPlay()
{
    Super::BeginPlay();
    Spawn();
}
void UActorSpawnerComponent::TickComponent(float
    DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType,
        ThisTickFunction);
}
void UActorSpawnerComponent::Spawn()
{
    UWorld* TheWorld = GetWorld();
    if (TheWorld != nullptr)
    {
        FTransform ComponentTransform(this
            ->GetComponentTransform());
        TheWorld->SpawnActor(ActorToSpawn, &ComponentTransform);
    }
}