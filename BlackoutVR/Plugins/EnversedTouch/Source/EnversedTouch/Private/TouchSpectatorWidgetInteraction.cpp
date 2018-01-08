// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchSpectatorWidgetInteraction.h"


void UTouchSpectatorWidgetInteraction::SetCustomHitResultAndUpdate(const FHitResult& HitResult)
{
	bEnableHitTesting = true; //Otherwise SimulatePointerMovement won't work.
	CustomHitResult = HitResult;
	SimulatePointerMovement();
}
