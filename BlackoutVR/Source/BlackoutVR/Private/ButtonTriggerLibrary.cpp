// Fill out your copyright notice in the Description page of Project Settings.

#include "ButtonTriggerLibrary.h"
#include "Button.h"


void UButtonTriggerLibrary::TriggerOnPressEvent(UButton* button)
{
	button->OnPressed.Broadcast();
}

void UButtonTriggerLibrary::TriggerOnReleaseEvent(UButton* button)
{
	button->OnReleased.Broadcast();
}

