// Fill out your copyright notice in the Description page of Project Settings.

#include "MovementActor.h"


// Sets default values
AMovementActor::AMovementActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(collisionBox);
	collisionBox->SetBoxExtent(FVector(55.f, 55.f, 50.f));
	collisionBox->SetCollisionProfileName(FName("Pawn"));
	collisionBox->CanCharacterStepUpOn = ECB_No;
	collisionBox->bShouldUpdatePhysicsVolume = true;
	collisionBox->bCheckAsyncSceneOnMove = false;
	collisionBox->SetCanEverAffectNavigation(false);
	collisionBox->bDynamicObstacle = true;
	collisionBox->RegisterComponent();
	collisionBox->bEditableWhenInherited = true;
	collisionBox->AttachTo(root);
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
		if (desiredPoint.Equals(locationCache, 5.0f))
		{
			StopMovement();
		}
		else {
			// Calculate lerp movement, with speed as strength
			FVector temp = (desiredPoint - locationCache);
			temp.Normalize(1.0f);
			FVector angleLoc = temp + locationCache;
			FVector lerp = FMath::Lerp(locationCache, angleLoc, speed * DeltaTime);

			FHitResult HitResult;
			if (SetActorLocation(lerp, true, &HitResult) == false)
			{
				// Check if it hit something
				if (HitResult.GetComponent())
				{
					UE_LOG(LogTemp, Warning, TEXT("Hit the following component: %s"), *HitResult.GetComponent()->GetName())
					// Stop moving if hit something
					// todo: check if moving away from object
					StopMovement();
				}
			}
		}
	}
}

void AMovementActor::StartMoving()
{
	if (moving) return;
	moving = true;
	ITouchActor::Execute_ActorStartedMoving(this);
}

// Moves to a location through lerping
void AMovementActor::MoveToLocation(FVector point)
{
	AMovementActor::desiredPoint = point; // set the desired end point
	AMovementActor::desiredPoint.Z = GetActorLocation().Z; // Do not lerp into the air or below the ground
	StartMoving();
}

// Ends and cleans movement
void AMovementActor::StopMovement()
{
	AMovementActor::desiredPoint = GetActorLocation(); // set the desired end point
	AMovementActor::moving = false; // stop moving
}

void AMovementActor::SetMoveActorLocation_Implementation(FVector moveLocation)
{
	MoveToLocation(moveLocation);
}

void AMovementActor::StopActorMovement_Implementation()
{
	StopMovement();
	ITouchActor::Execute_ActorStoppedMoving(this);
}

void AMovementActor::ActorStoppedMoving_Implementation()
{
}

void AMovementActor::ActorStartedMoving_Implementation()
{
}


void AMovementActor::SetScore_Implementation(int score)
{
	currentScore = score;
}
void AMovementActor::AddToScore_Implementation(int score)
{
	currentScore += score;
}
int AMovementActor::GetScore_Implementation()
{
	return currentScore;
}
FString AMovementActor::GetCName_Implementation()
{
	return Name;
}