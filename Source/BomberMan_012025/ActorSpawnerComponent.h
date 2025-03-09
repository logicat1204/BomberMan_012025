#pragma once


#include "Components/SceneComponent.h"
#include "ActorSpawnerComponent.generated.h"


UCLASS(ClassGroup = (Custom),
	meta = (BlueprintSpawnableComponent))
	class BOMBERMAN_012025_API UActorSpawnerComponent : public USceneComponent
{

	GENERATED_BODY()
public:
	UActorSpawnerComponent();
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick
		TickType, FActorComponentTickFunction* ThisTickFunction)
		override;
	UFUNCTION(BlueprintCallable, Category = Cookbook)
	void Spawn();
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorToSpawn;
};