// Fill out your copyright notice in the Description page of Project Settings.

#include "TwinActor.h"
#include "Engine/World.h"

// Sets default values
ATwinActor::ATwinActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (mimic)
	{
		LinkActor(mimic);
	}
}

// Called when the game starts or when spawned
void ATwinActor::BeginPlay()
{
	Super::BeginPlay();

	if (!mimic)
	{
		// Set blueprint
		bluePrint = bluePrintObject->GeneratedClass;
		// Spawn the mimic on the desired location
		SpawnBluePrint();
	} 
}

// Called every frame
void ATwinActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATwinActor::LinkActor(AActor* mimic)
{
	// calculate new relative location
	relativeLocation = true;
	location = mimic->GetActorLocation() - GetActorLocation();

	// Set the mimic
	ATwinActor::mimic = mimic;
}

/* //////////////////////////////////////////////////////////////////////////////////// */
//
//	Overrides for setting other locations as well
//
/* //////////////////////////////////////////////////////////////////////////////////// */

bool ATwinActor::SetActorLocation(const FVector& NewLocation, bool bSweep = false, FHitResult* OutSweepHitResult = nullptr)
{
	if (mimic)
	{
		mimic->SetActorLocation(NewLocation + location, bSweep, OutSweepHitResult);
	}
	return Super::SetActorLocation(NewLocation, bSweep, OutSweepHitResult);
}

void ATwinActor::SpawnBluePrint()
{
	UWorld* TheWorld = GetWorld();
	FVector Loc = relativeLocation ? GetActorLocation() + location : location;
	FRotator Rot = GetActorRotation();

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	LinkActor(TheWorld->SpawnActor<AActor>(bluePrint, Loc, Rot, SpawnInfo));
}
