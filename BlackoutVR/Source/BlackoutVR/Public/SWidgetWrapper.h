// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetComponent.h"
#include "SWidgetWrapper.generated.h"

class SWidget;
class UWidgetComponent;

/**
 *
 */
UCLASS(BluePrintType)
class BLACKOUTVR_API USWidgetWrapper : public UObject
{
	GENERATED_BODY()

public:
	USWidgetWrapper(SWidget* widget);
	USWidgetWrapper();

	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool SameWidget(UWidget* component);
	~USWidgetWrapper();

private:
	SWidget* widget;
};
