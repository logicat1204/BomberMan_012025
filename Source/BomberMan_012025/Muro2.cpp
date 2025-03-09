// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro2.h"

// Sets default values
AMuro2::AMuro2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMuro2::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(10);
}

// Called every frame
void AMuro2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

