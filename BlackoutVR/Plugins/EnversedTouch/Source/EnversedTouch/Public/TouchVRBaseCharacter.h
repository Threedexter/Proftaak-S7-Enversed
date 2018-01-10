// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TouchSpectatorCapture.h"
#include "FTouchFinger.h"
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
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBeginTouchWidget, FVector2D, touchWidgetLocation, FHitResult, touchWorldHit, TArray<UWidgetWrapper*>, widgets, bool, hitWidget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUpdateTouchWidget, FVector2D, touchWidgetLocation, FHitResult, touchWorldHit, TArray<UWidgetWrapper*>, widgets, bool, hitWidget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEndTouchWidget, FVector2D, touchWidgetLocation, FHitResult, touchWorldHit, TArray<UWidgetWrapper*>, widgets, bool, hitWidget);

/**
* Structure used for remembering the lastTouchedPosition for a finger.
*/
UENUM(BlueprintType)
enum class ETouchFingerState : uint8
{
	Begin,
	Update,
	Exit
};

/*
 *
 */
UCLASS()
class ENVERSEDTOUCH_API ATouchVRBaseCharacter : public ACharacter
{
GENERATED_BODY()


public:

#pragma region Delegates/EventDispatchers
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

	/*
	* When the player starts touching an actor.
	*/
	UPROPERTY(BlueprintAssignable)
		FBeginTouchWidget onTouchWidgetBegin;

	/*
	* While the player is touching the actor, this will get called multiple times.
	*/
	UPROPERTY(BlueprintAssignable)
		FUpdateTouchWidget onTouchWidgetUpdate;

	/*
	* When the player finished touching the actor.
	*/
	UPROPERTY(BlueprintAssignable)
		FEndTouchWidget onTouchWidgetEnd;


#pragma endregion

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Touch|Ray")
		float rayDistance = 10000.f;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Touch|Actors")
		TArray<FTouchFinger> touchStructs;

	UPROPERTY(BlueprintReadOnly, VisibleAnyWhere, Category = "Touch|Location")
		FVector2D lastTouchLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game")
		bool endGame = false;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Game")
		bool gameStarted = false;

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

#pragma region TouchInput
	/*
	 * When a player start touching.
	 */
	virtual void TouchEnter(ETouchIndex::Type fingerIndex, FVector touchLocation);

	/*
	 * When a player starts moving it's finger.
	 */
	virtual void TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation);

	/*
	 * When a player stops tocuhing.
	 */
	virtual void TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation);
#pragma endregion

	/**
	* Get the spectator cam
	* @return Either returns the spectator cam or a nullptr, always check if valid.
	*/
	UFUNCTION(BlueprintPure, Category = "Specator|Cam")
		ATouchSpectatorCapture* GetSpectatorCam();
	
	/**
	 * Gets the touched actor by a certain finger.
	 * @param fingerIndex - The finger you want to check for an Actor
	 * @return A Actor touched by the given finger or a null pointer. Always check if the returned object is valid!
	 */
	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
		AActor* GetTouchedActor(ETouchIndex::Type fingerIndex);

	/**
	 * Gets the last touched screen location.
	 * @return The last touched screen location.
	 */
	UFUNCTION(BlueprintPure, Category = "Touch|Location")
		FVector2D GetLastTouchLocation();

	/**
	 * Checks if a fingerindex is currently touching something.
	 * @param fingerIndex - The fingerindex you want to check
	 * @return Wether the given fingerindex is currently touching something.
	 */
	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
		bool HasFingerIndex(ETouchIndex::Type fingerIndex);

	/**
	 * Checks if an actor is already touched/selected by a finger.
	 * @param actor - The actor you want to check for if it has een touched.
	 * @return Wether the actor has been touched
	 */
	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
		bool CheckActorBeenTouched(AActor* actor);

	/**
	 * Adds a finger to a struct with it's hit world location.
	 * @param fingerIndex - the finger that is touching.
	 * @param hitLocation - The location in the world that the finger hit.
	 * @param actor - The Actor that the finger hit.
	 */
	virtual void AddFingerTouchToArray(ETouchIndex::Type fingerIndex, FVector hitLocation, AActor* actor);

	/**
	 * Removes a finger from the cached struct array when it's done touching the screen.
	 * @param fingerIndex - The finger that stopped touching.
	 */
	virtual void RemoveTouchFromArray(ETouchIndex::Type fingerIndex);

	/**
	* Checks if a actor has been touched.
	* @param touchLocation - The touch location on the display.
	* @param hitLocation - A reference to the
	*/
	virtual bool CheckIfTouchedActorOnEnter(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit);

	/**
	* Checks if a actor has been touched while moving finger, can return a different actor then the one selected on the beginning.
	* @param touchLocation - The touch location on the display.
	* @param hitLocation - A reference to the
	*/
	virtual bool CheckIfTouchedActorOnMoved(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit);

	/**
	* Checks if a actor has been touched.
	* @param touchLocation - The touch location on the display.
	* @param hitLocation - A reference to the
	*/
	virtual bool CheckIfTouchedActorOnExit(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit);

	/**
	* Checks for widgets on the UItracechannel declared in TouchSpectatorCapture.
	*/
	virtual bool CheckIfTouchedWidget(ETouchFingerState fingerState, FVector2D touchScreenLocation, FVector2D& touchLocationWidget, FHitResult& hit);

	/**
	 * Broadcasts that it hits a widget to the corresponding delegate/event dispatcher
	 */
	virtual bool BroadCastTouchedWidget(ETouchFingerState fingerState, bool hitWidget, FVector2D& touchLocationWidget, FHitResult& hit, TArray<UWidgetWrapper*>& widgets);

	/**
	 * Overridable TouchTrace Function.
	 */
	virtual bool TouchTrace(FVector2D touchLocation, FHitResult& hit);
};
