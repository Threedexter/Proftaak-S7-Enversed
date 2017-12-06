// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FFingerTouch.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FFingerTouch
{
	GENERATED_BODY()

public:

	FFingerTouch() {}
	FFingerTouch(ETouchIndex::Type fingerIndex, FVector& lastTouchedPosition, AActor* touchedActor, FVector2D& lastTouchedPositionScr)
	{
		this->fingerIndex = fingerIndex;
		this->lastTouchedPosition = lastTouchedPosition;
		this->lastTouchedPositionOnScreen = lastTouchedPositionScr;
		this->touchedActor = touchedActor;
	}

	ETouchIndex::Type fingerIndex;
	FVector lastTouchedPosition;
	FVector2D lastTouchedPositionOnScreen;
	AActor* touchedActor;
};
