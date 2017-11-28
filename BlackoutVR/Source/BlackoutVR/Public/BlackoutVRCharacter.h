// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleChar/VRSimpleCharacter.h"
#include "VRCapture2D.h"
#include "TouchActor.h"
#include "FFingerTouch.h"
#include "ScoreKeeper.h"
#include "TouchScreenHandler.h"
#include "BlackoutVRCharacter.generated.h"

/**
 * 
 */
UCLASS()
class BLACKOUTVR_API ABlackoutVRCharacter : public AVRSimpleCharacter, public IScoreKeeper
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Touch|Ray")
		float raySpread = 1.65f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Touch|Ray")
		float rayOffset = 0.05f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Touch|Ray")
		float rayDistance = 10000.f;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Touch|Actors")
		TArray<FFingerTouch> touchStructs;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		int currentScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		FString Name;

private:
		AVRCapture2D* currentSpecCam;
		TouchScreenHandler touch_screen_handler;
	
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

	UFUNCTION(BlueprintCallable, Category="Touch|Trace")
	bool TouchTrace(FVector2D touchLocation, FHitResult& hit);

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

	virtual void AddToScore_Implementation(int score) override;
	virtual void SetScore_Implementation(int score) override;
	virtual int GetScore_Implementation() override;
	virtual FString GetCName_Implementation() override;
};
