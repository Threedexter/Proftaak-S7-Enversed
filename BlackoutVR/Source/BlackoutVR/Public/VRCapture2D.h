// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "VRCapture2D.generated.h"

/**
 * 
 */
UCLASS()
class BLACKOUTVR_API AVRCapture2D : public ASceneCapture2D
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Screen")
	void ScreenToSieWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection);
	
	
};
