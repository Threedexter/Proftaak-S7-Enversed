// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TouchSpectatorCapture.h"
#include "ExampleUITouchSpectatorCapture.generated.h"

/**
 * 
 */
UCLASS()
class ENVERSEDTOUCH_API AExampleUITouchSpectatorCapture : public ATouchSpectatorCapture
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* touchSpectatorWidget;

public:
	AExampleUITouchSpectatorCapture(const FObjectInitializer& ObjectInitializer);
	
};
