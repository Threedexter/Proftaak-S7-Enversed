// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetComponent.h"
#include "UObject/NoExportTypes.h"
#include "WidgetWrapper.generated.h"

class SWidget;
class UWidgetComponent;

/**
* A wrapper used for comparing SWidgets in blueprints.
*/
UCLASS(BluePrintType)
class ENVERSEDTOUCH_API UWidgetWrapper : public UObject
{
	GENERATED_BODY()
	
public:
	UWidgetWrapper(SWidget* widget);
	UWidgetWrapper();
	~UWidgetWrapper();
	
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool IsSameWidget(UWidget* component);

	void SetWidget(SWidget* widget);

private:
	SWidget* widget;

	
	
};
