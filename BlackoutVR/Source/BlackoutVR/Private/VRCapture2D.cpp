// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCapture2D.h"
#include "SceneView.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneManagement.h"
#include "TouchScreenHandler.h"
#include "Runtime/Renderer/Private/ScenePrivate.h"


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
