// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TwinActor.generated.h"

UCLASS()
class BLACKOUTVR_API ATwinActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATwinActor();

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Spawning")
		bool relativeLocation = true;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Spawning")
		FVector location;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Spawning")
		UBlueprint* bluePrintObject;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Location")
		AActor* mimic;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Override
	bool SetActorLocation(const FVector & NewLocation, bool bSweep, FHitResult * OutSweepHitResult);

	// Spawns the mimic actor
	void SpawnBluePrint();

private:
	// Actor class to mimic
	TSubclassOf<class AActor> bluePrint;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// To link an actor manaully
	void LinkActor(AActor* mimic);
};
