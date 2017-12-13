// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCapture2D.h"
#include "SceneView.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneManagement.h"
#include "TouchScreenHandler.h"
#include "Runtime/Renderer/Private/ScenePrivate.h"
#include "Kismet/KismetSystemLibrary.h"


AVRCapture2D::AVRCapture2D(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	widgetInteraction = CreateDefaultSubobject<USpectatorWidgetInteraction>(TEXT("WidgetInteractionComponent"));
	widgetInteraction->bAutoActivate = true;
	widgetInteraction->bAutoRegister = true;
	widgetInteraction->RelativeRotation = FRotator(0, 180, 180);
	widgetInteraction->InteractionSource = EWidgetInteractionSource::Custom;
	widgetInteraction->InteractionDistance = 10000.f;
	widgetInteraction->bEditableWhenInherited = true;
	widgetInteraction->SetupAttachment(RootComponent);

	touchRotationReference = CreateDefaultSubobject<USceneComponent>(TEXT("TouchRotationReference"));
	touchRotationReference->RelativeRotation = FRotator(135, 0, 0);
	widgetInteraction->SetupAttachment(RootComponent);
}

void AVRCapture2D::ScreenToWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection)
{
	USceneCaptureComponent2D* captureComp = GetCaptureComponent2D();
	if (captureComp) {
#if  WITH_EDITOR
		FVector2D touchScreenSize = TouchScreenHandler::GetGameSize();
		FSceneView::DeprojectScreenToWorld(touchPosition, FIntRect(touchScreenSize.X, 0, 0, touchScreenSize.Y)
			, captureComp->GetViewState(0)->GetConcreteViewState()->PrevViewMatrices.GetInvProjectionMatrix(), worldLocation, worldDirection);

		UE_LOG(LogTemp, Warning, TEXT("Before Rotation: %s"), *worldDirection.ToString())
		FRotator origin = captureComp->GetComponentRotation() - originRotation;
		UE_LOG(LogTemp, Warning, TEXT("Rotation: %s"), *origin.ToString())
		worldDirection = origin.RotateVector(worldDirection);
		UE_LOG(LogTemp, Warning, TEXT("After Rotation touch component: %s"), *worldDirection.ToString())
#else
		FSceneView::DeprojectScreenToWorld(touchPosition, FIntRect(0, captureComp->TextureTarget->SizeY, captureComp->TextureTarget->SizeX, 0)
			, captureComp->GetViewState(0)->GetConcreteViewState()->PrevViewMatrices.GetInvProjectionMatrix(), worldLocation, worldDirection);
#endif
	}
}

FHitResult AVRCapture2D::RayCastWorld(FVector2D touchPosition, float rayDistance)
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

bool AVRCapture2D::CheckIfTouchedWidgetFromCamera(FVector2D touchPosition, float rayDistance, FVector2D& touchLocationWidget,
	FHitResult& touchLocationWorld)
{
	if (!widgetInteraction) return false;
	touchLocationWorld = RayCastWorld(touchPosition, rayDistance);
	widgetInteraction->SetCustomHitResultAndUpdate(touchLocationWorld);
	touchLocationWidget = widgetInteraction->Get2DHitLocation();
	return widgetInteraction->IsOverFocusableWidget() || widgetInteraction->IsOverInteractableWidget();
}
