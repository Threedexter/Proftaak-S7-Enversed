// Fill out your copyright notice in the Description page of Project Settings.

#include "ExampleUITouchSpectatorCapture.h"




AExampleUITouchSpectatorCapture::AExampleUITouchSpectatorCapture(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	touchSpectatorWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("TouchSpectatorWidget"));
	touchSpectatorWidget->bAutoActivate = true;
	touchSpectatorWidget->bAutoRegister = true;
	touchSpectatorWidget->RelativeLocation = FVector(960, 0, 0);
	touchSpectatorWidget->RelativeRotation = FRotator(0, 180, 0);
	touchSpectatorWidget->bEditableWhenInherited = true;
	touchSpectatorWidget->SetupAttachment(RootComponent);
}

