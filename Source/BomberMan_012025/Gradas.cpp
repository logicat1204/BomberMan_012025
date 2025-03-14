// Fill out your copyright notice in the Description page of Project Settings.


#include "Gradas.h"

// Sets default values
AGradas::AGradas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(
		TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Stairs.SM_Stairs'"));
			if (MeshAsset.Object != nullptr)
			{
				Mesh->SetStaticMesh(MeshAsset.Object);
			}
}

// Called when the game starts or when spawned
void AGradas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGradas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

