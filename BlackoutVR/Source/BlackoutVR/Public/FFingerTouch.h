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
	FFingerTouch(ETouchIndex::Type fingerIndex, FVector& lastTouchedPosition, AActor* touchedActor)
	{
		this->fingerIndex = fingerIndex;
		this->lastTouchedPosition = lastTouchedPosition;
		this->touchedActor = touchedActor;
	}

	ETouchIndex::Type fingerIndex;
	FVector lastTouchedPosition;
	AActor* touchedActor;
};
