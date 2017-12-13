// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TouchActor.h"
#include "Components/BoxComponent.h"
#include "ScoreKeeper.h"
#include "MovementActor.generated.h"

UCLASS()
class BLACKOUTVR_API AMovementActor : public AActor, public ITouchActor, public IScoreKeeper
{
GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category="Movement")
	float speed = 1.0f;

	UPROPERTY(Category = Character, EditAnyWhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* collisionBox;

	UPROPERTY(Category = "Scene", EditAnyWhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USceneComponent* root;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		int currentScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		FString Name;

public:	
	// Sets default values for this actor's properties
	AMovementActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void StartMoving();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveToLocation(FVector point);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopMovement();

	virtual void SetMoveActorLocation_Implementation(FVector moveLocation) override;
	virtual void StopActorMovement_Implementation() override;
	virtual void ActorStoppedMoving_Implementation() override;
	virtual void ActorStartedMoving_Implementation() override;

	virtual void AddToScore_Implementation(int score) override;
	virtual void SetScore_Implementation(int score) override;
	virtual int GetScore_Implementation() override;
	virtual FString GetCName_Implementation() override;
	virtual void SetCName_Implementation(int name) override;

private:
	FVector desiredPoint;
	bool moving = false;
};
