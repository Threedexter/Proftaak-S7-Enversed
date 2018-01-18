// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchPlayerPawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "AI/Navigation/NavigationPath.h"
#include "AIController.h"

ATouchPlayerPawn::ATouchPlayerPawn(const FObjectInitializer& ObjectInitializer)
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
	bReplicates = true;
}

// Called when the game starts or when spawned
void ATouchPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	SpawnDefaultController(); //spawning the AI controller
}

// Called every frame
void ATouchPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATouchPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATouchPlayerPawn::SetMoveActorServer_Implementation(FVector moveLocation)
{
	AAIController* ai = Cast<AAIController>(GetController());
	if (ai) {
		ITouchActorInterface::Execute_ActorStartedMoving(this);
		ai->MoveToLocation(moveLocation, 10.0f, false, true, false, true, nullptr, true);
	}
}

bool ATouchPlayerPawn::SetMoveActorServer_Validate(FVector moveLocation)
{
	return true;
}

void ATouchPlayerPawn::SetMoveActorLocation_Implementation(FVector moveLocation)
{
	SetMoveActorServer(moveLocation);
}

void ATouchPlayerPawn::StopActorMovement_Implementation()
{
	if (GetMovementComponent())
	{		
		GetMovementComponent()->StopMovementImmediately();
		ITouchActorInterface::Execute_ActorStoppedMoving(this);
	}
}

void ATouchPlayerPawn::ActorStoppedMoving_Implementation()
{
}

void ATouchPlayerPawn::ActorStartedMoving_Implementation()
{
}

int32 ATouchPlayerPawn::GetTouchActorID_Implementation()
{
	return touchActorID;
}

int32 ATouchPlayerPawn::SetTouchActorID_Implementation(int32 ID)
{
	return touchActorID = ID;
}


void ATouchPlayerPawn::SetScore_Implementation(int score)
{
	//currentScore = score;
}
void ATouchPlayerPawn::AddToScore_Implementation(int score)
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
int ATouchPlayerPawn::GetScore_Implementation()
{
	return currentScore;
}
void ATouchPlayerPawn::SetCName_Implementation(int name)
{
	Name = FString::Printf(TEXT("P%d"), name);
}
FString ATouchPlayerPawn::GetCName_Implementation()
{
	return Name;
}