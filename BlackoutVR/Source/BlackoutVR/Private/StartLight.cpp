// Fill out your copyright notice in the Description page of Project Settings.

#include "StartLight.h"
#include "TimerManager.h"


// Sets default values
AStartLight::AStartLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStartLight::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle x = FTimerHandle();
	GetWorldTimerManager().SetTimer(x,this, &AStartLight::StartAction, time);
}

// Called every frame
void AStartLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called every frame
void AStartLight::StartAction()
{

}

