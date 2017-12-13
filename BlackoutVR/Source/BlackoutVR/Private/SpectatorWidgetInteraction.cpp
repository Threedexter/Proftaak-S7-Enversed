// Fill out your copyright notice in the Description page of Project Settings.

#include "SpectatorWidgetInteraction.h"

/*USpectatorWidgetInteraction::FWidgetTraceResult USpectatorWidgetInteraction::PerformTrace() const
{
	return USpectatorWidgetInteraction::FWidgetTraceResult();
}
*/
void USpectatorWidgetInteraction::SetCustomHitResultAndUpdate(const FHitResult& HitResult)
{
	bEnableHitTesting = true;
	CustomHitResult = HitResult;
	SimulatePointerMovement();
}
