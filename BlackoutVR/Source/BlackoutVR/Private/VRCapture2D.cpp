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
}

void AVRCapture2D::ScreenToSieWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection)
{
	USceneCaptureComponent2D* captureComp = GetCaptureComponent2D();
	if (captureComp) {

#if  WITH_EDITOR
		FVector2D touchScreenSize = TouchScreenHandler::GetGameSize();
		//UE_LOG(LogTemp, Log, TEXT("Window size: %s"), *touchScreenSize.ToString())
		FSceneView::DeprojectScreenToWorld(touchPosition, FIntRect(0, touchScreenSize.Y, touchScreenSize.X, 0)
			, captureComp->GetViewState(0)->GetConcreteViewState()->PrevViewMatrices.GetInvProjectionMatrix(), worldLocation, worldDirection);

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
	ScreenToSieWorld(touchPosition, hitWorldLocation, hitWorldDirection);

	FCollisionQueryParams params;
	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	FHitResult hit;
	GetWorld()->LineTraceSingleByChannel(hit, GetActorLocation(),
		GetActorLocation() - (hitWorldDirection * rayDistance), UITraceChannel, params, colResponseParams);
	
	if (bShowDebug) {
		UKismetSystemLibrary::DrawDebugLine(this, hit.TraceStart, hit.ImpactPoint, linearColor, 5, 3);
	}
	return hit;
}
