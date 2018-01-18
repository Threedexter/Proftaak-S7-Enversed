// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchSpectatorCapture.h"
#include "SceneView.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneManagement.h"
#include "TouchScreen.h"
#include "WidgetWrapper.h"
#include "Runtime/Renderer/Private/ScenePrivate.h"
#include "Kismet/KismetSystemLibrary.h"


ATouchSpectatorCapture::ATouchSpectatorCapture(const FObjectInitializer& ObjectInitializer)
{
	widgetInteraction = CreateDefaultSubobject<UTouchSpectatorWidgetInteraction>(TEXT("WidgetInteractionComponent"));
	widgetInteraction->bAutoActivate = true;
	widgetInteraction->bAutoRegister = true;
	widgetInteraction->RelativeRotation = FRotator(0, 180, 180);
	widgetInteraction->InteractionSource = EWidgetInteractionSource::Custom;
	widgetInteraction->InteractionDistance = 10000.f;
	widgetInteraction->bEditableWhenInherited = true;
	widgetInteraction->SetupAttachment(RootComponent);
}

void ATouchSpectatorCapture::ScreenToWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection)
{
	USceneCaptureComponent2D* captureComp = GetCaptureComponent2D();
	if (captureComp) {
		FVector2D touchScreenSize = TouchScreen::GetGameSize();
		FSceneView::DeprojectScreenToWorld(touchPosition, FIntRect(touchScreenSize.X, 0, 0, touchScreenSize.Y)
			, captureComp->GetViewState(0)->GetConcreteViewState()->PrevViewMatrices.GetInvProjectionMatrix(), worldLocation, worldDirection);

		worldDirection = originRotation.RotateVector(worldDirection);
		worldDirection = captureComp->GetComponentRotation().RotateVector(worldDirection);
	}
}

FHitResult ATouchSpectatorCapture::RayCastWorld(FVector2D touchPosition, float rayDistance)
{
	FVector hitWorldLocation;
	FVector hitWorldDirection;
	ScreenToWorld(touchPosition, hitWorldLocation, hitWorldDirection);

	FCollisionQueryParams params;
	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	FHitResult hit;
	GetWorld()->LineTraceSingleByChannel(hit, GetActorLocation(),
		GetActorLocation() - (hitWorldDirection * rayDistance), UITraceChannel, params, colResponseParams);

	if (bShowDebug) {
		UKismetSystemLibrary::DrawDebugLine(this, hit.TraceStart, hit.ImpactPoint, linearColor, 5.f, 3);
	}
	return hit;
}

bool ATouchSpectatorCapture::CheckIfTouchedWidgetCustom(FVector startLocation, FVector endLocation, float rayDistance,
	FVector2D& touchLocationWidget, FHitResult& touchLocationWorld)
{
	FCollisionQueryParams params;
	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	GetWorld()->LineTraceSingleByChannel(touchLocationWorld, startLocation, endLocation, UITraceChannel, params, colResponseParams);

	if (bShowDebug) {
		UKismetSystemLibrary::DrawDebugLine(this, touchLocationWorld.TraceStart, touchLocationWorld.ImpactPoint, linearColor, 5.f, 3);
	}

	widgetInteraction->SetCustomHitResultAndUpdate(touchLocationWorld);
	touchLocationWidget = widgetInteraction->Get2DHitLocation();
	return widgetInteraction->IsOverFocusableWidget() || widgetInteraction->IsOverInteractableWidget();
}

bool ATouchSpectatorCapture::CheckIfTouchedWidgetFromCamera(FVector2D touchPosition, float rayDistance,
	FVector2D& touchLocationWidget, FHitResult& touchLocationWorld)
{
	TArray<UWidgetWrapper*> a;
	return GetTouchedWidgetsFromCamera(touchPosition, rayDistance, touchLocationWidget, touchLocationWorld, a);
}

bool ATouchSpectatorCapture::GetTouchedWidgetsFromCamera(FVector2D touchPosition, float rayDistance,
	FVector2D& touchLocationWidget, FHitResult& touchLocationWorld, TArray<UWidgetWrapper*>& widgets)
{
	if (!widgetInteraction) return false;
	touchLocationWorld = RayCastWorld(touchPosition, rayDistance);
	widgetInteraction->SetCustomHitResultAndUpdate(touchLocationWorld);
	touchLocationWidget = widgetInteraction->Get2DHitLocation();
	bool isOverWidget = widgetInteraction->IsOverFocusableWidget() || widgetInteraction->IsOverInteractableWidget();
	if (isOverWidget)
	{
		TArray<TWeakPtr<SWidget>> wsarr = widgetInteraction->GetHoveredWidgetPath().Widgets;
		for (int i = 0; i < wsarr.Num(); i++)
		{
			TWeakPtr<SWidget> ws = wsarr[i];
			if (ws.IsValid())
			{
				SWidget* widg = &(*ws.Pin());
				if (widg) {					
					UWidgetWrapper* widgetWrapper = NewObject<UWidgetWrapper>();
					widgetWrapper->SetWidget(widg);
					widgets.Add(widgetWrapper);
				}
			}
		}
	}
	return isOverWidget;
}

void ATouchSpectatorCapture::KillTouchFeedback()
{
	TouchScreen* a = new TouchScreen();
}