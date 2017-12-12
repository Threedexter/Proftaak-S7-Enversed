// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchPawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "AI/Navigation/NavigationPath.h"
#include "AIController.h"


// Sets default values
ATouchPawn::ATouchPawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	collisionBox->SetBoxExtent(FVector(55.f, 55.f, 50.f));
	collisionBox->SetCollisionProfileName(FName("Pawn"));
	collisionBox->CanCharacterStepUpOn = ECB_No;
	collisionBox->bShouldUpdatePhysicsVolume = true;
	collisionBox->bCheckAsyncSceneOnMove = false;
	collisionBox->SetCanEverAffectNavigation(false);
	collisionBox->bDynamicObstacle = true;
	collisionBox->bEditableWhenInherited = true;
	collisionBox->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ATouchPawn::BeginPlay()
{
	Super::BeginPlay();
	SpawnDefaultController(); //spawning the AI controller
}

// Called every frame
void ATouchPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATouchPawn::SetMoveActorLocation_Implementation(FVector moveLocation)
{
	AAIController* ai = Cast<AAIController>(GetController());
	if (ai) {
		ai->MoveToLocation(moveLocation, 10.0f, false, true, false, true, nullptr, true);
	}
}

void ATouchPawn::StopActorMovement_Implementation()
{
	if(GetMovementComponent())
	{
		GetMovementComponent()->StopMovementImmediately();
	}
}

void ATouchPawn::ActorStoppedMoving_Implementation()
{
}

void ATouchPawn::ActorStartedMoving_Implementation()
{
}


void ATouchPawn::SetScore_Implementation(int score)
{
	//currentScore = score;
}
void ATouchPawn::AddToScore_Implementation(int score)
{
	if (score < 0)
	{
		int t = currentScore + score;
		if (t < 0)
		{
			t = 0;
		}
		currentScore = t;
	}
	else
	{
		currentScore += score;
	}
}
int ATouchPawn::GetScore_Implementation()
{
	return currentScore;
}
void ATouchPawn::SetCName_Implementation(int name)
{
	Name = FString::Printf(TEXT("P%d"), name);
}
FString ATouchPawn::GetCName_Implementation()
{
	return Name;
}