// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TouchActor.h"
#include "Components/BoxComponent.h"
#include "MovementActor.generated.h"

UCLASS()
class BLACKOUTVR_API AMovementActor : public AActor, public ITouchActor
{
GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category="Movement")
	float speed = 1.0f;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* collisionBox;

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
	void MoveToLocation(FVector point);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopMovement();

	virtual void SetMoveActorLocation_Implementation(FVector moveLocation) override;

	virtual void StopActorMovement_Implementation() override;

private:
	FVector desiredPoint;
	bool moving = false;
};
