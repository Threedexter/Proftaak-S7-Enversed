// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InputCoreTypes.h"
#include "CoreMinimal.h"
#include "FTouchFinger.generated.h"

/**
* Structure used for remembering the lastTouchedPosition for a finger.
*/
USTRUCT(BlueprintType)
struct ENVERSEDTOUCH_API FTouchFinger
{
	GENERATED_BODY()
public:

	FTouchFinger() {}

	FTouchFinger(ETouchIndex::Type fingerIndex, FVector& lastTouchedPosition, AActor* touchedActor, FVector2D& lastTouchedWidgetPosition)
	{
		this->fingerIndex = fingerIndex;
		this->lastTouchedPosition = lastTouchedPosition;
		this->lastTouchedWidgetPosition = lastTouchedWidgetPosition;
		this->touchedActor = touchedActor;
	}

	ETouchIndex::Type fingerIndex;
	FVector lastTouchedPosition;
	FVector2D lastTouchedWidgetPosition;
	AActor* touchedActor;
};
