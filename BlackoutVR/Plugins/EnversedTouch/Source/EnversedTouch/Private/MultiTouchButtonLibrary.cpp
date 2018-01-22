// Fill out your copyright notice in the Description page of Project Settings.

#include "MultiTouchButtonLibrary.h"


void UMultiTouchButtonLibrary::TriggerButtonPress(UButton* button)
{
	if (!button) return;
	button->OnPressed.Broadcast();
}

void UMultiTouchButtonLibrary::TriggerButtonRelease(UButton* button)
{
	if (!button) return;
	button->OnReleased.Broadcast();
}
