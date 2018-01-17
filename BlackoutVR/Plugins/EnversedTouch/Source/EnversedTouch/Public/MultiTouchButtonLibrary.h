// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Button.h"
#include "MultiTouchButtonLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ENVERSEDTOUCH_API UMultiTouchButtonLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Widget")
		static void TriggerButtonPress(UButton* button);

	UFUNCTION(BlueprintCallable, Category = "Widget")
		static void TriggerButtonRelease(UButton* button);
	
};
