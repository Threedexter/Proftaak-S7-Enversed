// Fill out your copyright notice in the Description page of Project Settings.

#include "MovementActor.h"


// Sets default values
AMovementActor::AMovementActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovementActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovementActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (moving)
	{
		FVector locationCache = GetActorLocation();

		// Check if destination reached
		if (desiredPoint == locationCache)
		{
			StopMovement();
		}
		else {
			// Calculate lerp movement, with speed as strength
			FVector lerp = FMath::Lerp(locationCache, desiredPoint, speed * DeltaTime);

			FHitResult HitResult;
			if (SetActorLocation(lerp, true, &HitResult) == false)
			{
				// Check if it hit something
				if (HitResult.GetActor() != nullptr)
				{
					// Stop moving if hit something
					// todo: check if moving away from object
					StopMovement();
				}
			}
		}
	}
}

// Moves to a location through lerping
void AMovementActor::MoveToLocation(FVector point, float speed)
{
	AMovementActor::desiredPoint = point; // set the desired end point
	AMovementActor::desiredPoint.Z = GetActorLocation().Z; // Do not lerp into the air or below the ground
	AMovementActor::speed = speed; // set the desired speed
	AMovementActor::moving = true; // start moving
}

// Ends and cleans movement
void AMovementActor::StopMovement()
{
	AMovementActor::desiredPoint = GetActorLocation(); // set the desired end point
	AMovementActor::speed = 0.0f; // set the desired speed
	AMovementActor::moving = false; // stop moving
}

