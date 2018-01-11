// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TouchActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTouchActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ENVERSEDTOUCH_API ITouchActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
		void SetMoveActorLocation(FVector moveLocation);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
		void StopActorMovement();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
		void ActorStoppedMoving();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
		void ActorStartedMoving();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TouchActor|ID")
		int32 GetTouchActorID();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TouchActor|ID")
		int32 SetTouchActorID(int32 ID);
};
