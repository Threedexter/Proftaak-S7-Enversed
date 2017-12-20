// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ButtonTriggerLibrary.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class BLACKOUTVR_API UButtonTriggerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Widget")
	static void TriggerOnPressEvent(UButton* button);

	UFUNCTION(BlueprintCallable, Category = "Widget")
	static void TriggerOnReleaseEvent(UButton* button);
};
