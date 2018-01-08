// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetInteractionComponent.h"
#include "Layout/WidgetPath.h"
#include "TouchSpectatorWidgetInteraction.generated.h"

/**
* A custom widget itneraction component allowing you to set a custom hitresult and update
*/
UCLASS(ClassGroup = "UserInterface", meta = (BlueprintSpawnableComponent))
class ENVERSEDTOUCH_API UTouchSpectatorWidgetInteraction : public UWidgetInteractionComponent
{
	GENERATED_BODY()
	
	
public:
	/**
	* Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom.
	*/
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void SetCustomHitResultAndUpdate(const FHitResult& HitResult);
	
};
