// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetInteractionComponent.h"
#include "Layout/WidgetPath.h"
#include "SpectatorWidgetInteraction.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = "UserInterface", meta = (BlueprintSpawnableComponent))
class BLACKOUTVR_API USpectatorWidgetInteraction : public UWidgetInteractionComponent
{
	GENERATED_BODY()


protected:
		//FWidgetTraceResult PerformTrace() const override;
	
public:
	/**
	* Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom.
	*/
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void SetCustomHitResultAndUpdate(const FHitResult& HitResult);
	
};
