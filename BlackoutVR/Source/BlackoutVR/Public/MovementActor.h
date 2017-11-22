// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovementActor.generated.h"

UCLASS()
class BLACKOUTVR_API AMovementActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovementActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;	

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveToLocation(FVector point, float speed);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void StopMovement();

private:
	FVector desiredPoint;
	bool moving = false;
	float speed = 1.0f;
};
