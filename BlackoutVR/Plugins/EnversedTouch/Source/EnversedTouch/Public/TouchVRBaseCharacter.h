// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TouchSpectatorCapture.h"
#include "TouchVRBaseCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTouchScreenPosition, FVector2D, touchLocation, bool, IsTouch);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBeginTouchScreenPosition, FVector2D, touchLocation, bool, IsTouch);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndTouchScreenPosition, FVector2D, touchLocation, bool, IsTouch);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBeginTouchActor, AActor*, touchActor, FVector, worldHitPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTouchActor, AActor*, touchActor, FVector, worldHitPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndTouchActor, AActor*, touchActor, FVector, worldHitPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTouchWorldPosition, FHitResult, touchHitResult, FVector, worldHitPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBeginTouchWorldPosition, FHitResult, touchHitResult, FVector, worldHitPosition);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndTouchWorldPosition, FHitResult, touchHitResult, FVector, worldHitPosition);

/*
 *
 */
UCLASS()
class ENVERSEDTOUCH_API ATouchVRBaseCharacter : public ACharacter
{
GENERATED_BODY()


public:
	/*
	* While the player is touching the screen, this will get called multiple times.
	*/
	UPROPERTY(BlueprintAssignable)
		FUpdateTouchScreenPosition onTouchScreenUpdate;

	/*
	* When the player starts touching the screen.
	*/
	UPROPERTY(BlueprintAssignable)
		FBeginTouchScreenPosition onTouchScreenBegin;

	/*
	* When the player finishes touching the screen.
	*/
	UPROPERTY(BlueprintAssignable)
		FEndTouchScreenPosition onTouchScreenEnd;

	/*
	* When the player starts touching an actor.
	*/
	UPROPERTY(BlueprintAssignable)
		FBeginTouchActor onTouchActorBegin;

	/*
	* While the player is touching the actor, this will get called multiple times.
	*/
	UPROPERTY(BlueprintAssignable)
		FUpdateTouchActor onTouchActorUpdate;

	/*
	* When the player finished touching the actor.
	*/
	UPROPERTY(BlueprintAssignable)
		FEndTouchActor onTouchActorEnd;

	/*
	* World hitposition of the touchscreen player, while swiping/holding the finger on the screen.
	*/
	UPROPERTY(BlueprintAssignable)
		FUpdateTouchWorldPosition onTouchHitUpdate;

	/*
	* First world hitposition of the touchscreen player.
	*/
	UPROPERTY(BlueprintAssignable)
		FBeginTouchWorldPosition onTouchHitBegin;

	/*
	 * Last world hitposition of the touchscreen player.
	 */
	UPROPERTY(BlueprintAssignable)
		FEndTouchWorldPosition onTouchHitEnd;

private:
	ATouchSpectatorCapture* currentSpecCam;

public:

	/**
	* Constructor
	*/
	ATouchVRBaseCharacter(const FObjectInitializer& ObjectInitializer);

	/**
	* Setup player input component
	*/
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	/**
	* Once the actor starts with the first tick in the world.
	*/
	virtual void BeginPlay() override;

	/**
	* Get the spectator cam
	* @return Either returns the spectator cam or a nullptr, always check if valid.
	*/
	UFUNCTION(BlueprintPure, Category = "Specator|Cam")
	ATouchSpectatorCapture* GetSpectatorCam();
	
};
