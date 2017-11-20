// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimpleChar/VRSimpleCharacter.h"
#include "BlackoutVRCharacter.generated.h"

/**
 * 
 */
UCLASS()
class BLACKOUTVR_API ABlackoutVRCharacter : public AVRSimpleCharacter
{
	GENERATED_BODY()
	
	
public:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	

	void TouchEnter(ETouchIndex::Type fingerIndex, FVector touchLocation);
	void TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation);
	void TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation);

};
