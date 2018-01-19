// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TouchActorInterface.h"
#include "Components/BoxComponent.h"
#include "ExampleScore.h"
#include "GameFramework/Character.h"
#include "TouchPlayerPawn.generated.h"

UCLASS()
class ENVERSEDTOUCH_API ATouchPlayerPawn : public ACharacter, public ITouchActorInterface, public IExampleScore
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "TouchActor|ID")
	int32 touchActorID;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Movement")
	float speed = 1.0f;

	UPROPERTY(Category = Character, EditAnyWhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* collisionBox;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
	int currentScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
	FString Name;

public:
	// Sets default values for this pawn's properties
	ATouchPlayerPawn(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Server, Reliable, WithValidation)
		void SetMoveActorServer(FVector moveLocation);

	//interface functions
	virtual void SetMoveActorLocation_Implementation(FVector moveLocation) override;
	virtual void StopActorMovement_Implementation() override;
	virtual void ActorStoppedMoving_Implementation() override;
	virtual void ActorStartedMoving_Implementation() override;
	virtual int32 GetTouchActorID_Implementation() override;
	virtual int32 SetTouchActorID_Implementation(int32 ID) override;

	virtual void AddToScore_Implementation(int score) override;
	virtual void SetScore_Implementation(int score) override;
	virtual int GetScore_Implementation() override;
	virtual FString GetCName_Implementation() override;
	virtual void SetCName_Implementation(int name) override;

	
};
