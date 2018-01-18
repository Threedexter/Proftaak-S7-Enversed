// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TouchVRSimpleCharacter.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "ExampleScore.h"
#include "TouchVRExampleCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ENVERSEDTOUCH_API ATouchVRExampleCharacter : public ATouchVRSimpleCharacter, public IExampleScore
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		int currentScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Score")
		FString Name;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Controller")
		UMotionControllerComponent* LeftMotionController;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Controller")
		UMotionControllerComponent* RightMotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "VR|Camera")
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "VR|Component")
		USceneComponent* VROrigin;
	
public:

	ATouchVRExampleCharacter();
	
	/**
	 * Attaches the motion controller.
	 */
	void CreateAndAttachMotionController(UMotionControllerComponent* motionController, FName componentName, EControllerHand hand);

	virtual void AddToScore_Implementation(int score) override;
	virtual void SetScore_Implementation(int score) override;
	virtual int GetScore_Implementation() override;
	virtual FString GetCName_Implementation() override;
	virtual void SetCName_Implementation(int name) override;
};
