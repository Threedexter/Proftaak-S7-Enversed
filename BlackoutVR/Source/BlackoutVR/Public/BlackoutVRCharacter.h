// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCapture2D.h"
#include "TouchActor.h"
#include "FFingerTouch.h"
#include "ScoreKeeper.h"
#include "TouchScreenHandler.h"
#include "HeadMountedDisplay.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "IMotionController.h"
#include "ITouchData.h"
#include "Kismet/GameplayStatics.h"
#include "ScoreSystem.h"
#include "BlackoutVRCharacter.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTouchPosition, FVector2D, TouchLocation, bool, IsTouch);

UCLASS()
class BLACKOUTVR_API ABlackoutVRCharacter : public ACharacter, public IScoreKeeper, public IITouchData
{
	

	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Touch|Ray")
		float rayDistance = 10000.f;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Touch|Actors")
		TArray<FFingerTouch> touchStructs;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		int currentScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		FString Name;

	UPROPERTY(BlueprintReadOnly, VisibleAnyWhere, Category = "Touch|Location")
		FVector2D lastTouchLocation;

	UPROPERTY(BlueprintAssignable)
		FUpdateTouchPosition onTouchUpdate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game|Touch")
		float touchDistance = 50;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game")
		bool endGame = false;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Game")
		bool gameStarted = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Controller")
		UMotionControllerComponent* LeftMotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"),Category = "Controller")
		UMotionControllerComponent* RightMotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Controller")
		UCameraComponent* Camera;

private:
		AVRCapture2D* currentSpecCam;
		TouchScreenHandler touch_screen_handler;
		UScoreSystem actorHandler;
public:

	/**
	 * Constructor
	 */
	ABlackoutVRCharacter();

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
	UFUNCTION(BlueprintPure, Category="Specator|Cam")
	AVRCapture2D* GetSpectatorCam();

	void TouchEnter(ETouchIndex::Type fingerIndex, FVector touchLocation);
	void TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation);
	void TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation);

	UFUNCTION(BlueprintCallable, Category = "Touch|Trace")
	bool TouchTrace(FVector2D touchLocation, FHitResult& hit);

	UFUNCTION(BlueprintCallable, Category = "Touch|World")
	AActor* GetNearestActor(FVector worldLocation, float& length);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	bool CheckIfTouchedActor(FVector2D touchLocation, FVector& hitLocation, AActor*& actor);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	bool HasTouchedActor(ETouchIndex::Type fingerIndex);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	bool CheckActorBeenTouched(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	void AddFingerTouchToArray(ETouchIndex::Type fingerIndex, FVector hitLocation, AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	void RemoveTouchFromArray(ETouchIndex::Type fingerIndex);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	AActor* GetTouchedActor(ETouchIndex::Type fingerIndex);

	UFUNCTION(BlueprintCallable, Category = "Touch|Actor")
	void SetTouchedActorMovementLocation(ETouchIndex::Type fingerIndex, FVector hitLocation);

	UFUNCTION(BlueprintPure, Category = "Touch|Location")
	FVector2D GetLastTouchLocation();

	void CreateAndAttachMotionController(UMotionControllerComponent* motionController, FName componentName, EControllerHand hand);

	virtual void AddToScore_Implementation(int score) override;
	virtual void SetScore_Implementation(int score) override;
	virtual int GetScore_Implementation() override;
	virtual FString GetCName_Implementation() override;
	virtual void SetCName_Implementation(int name) override;
	virtual FVector2D GetTouchLocation_Implementation(int playerID) override;
	virtual void StopDrag_Implementation(AActor* actor) override;
};
