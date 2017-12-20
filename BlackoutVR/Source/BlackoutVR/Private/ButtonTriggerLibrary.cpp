// Fill out your copyright notice in the Description page of Project Settings.

#include "ButtonTriggerLibrary.h"
#include "Button.h"


void UButtonTriggerLibrary::TriggerOnPressEvent(UButton* button)
{
	if (!button) return;
	UE_LOG(LogTemp, Log, TEXT("OnPress Following Button"))
	button->OnPressed.Broadcast();
}

void UButtonTriggerLibrary::TriggerOnReleaseEvent(UButton* button)
{
	if (!button) return;
	button->OnReleased.Broadcast();
}

