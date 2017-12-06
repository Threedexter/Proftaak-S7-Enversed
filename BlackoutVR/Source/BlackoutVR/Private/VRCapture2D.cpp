// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCapture2D.h"
#include "SceneView.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneManagement.h"
#include "Runtime/Renderer/Private/ScenePrivate.h"


void AVRCapture2D::ScreenToSieWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection)
{
	USceneCaptureComponent2D* captureComp = GetCaptureComponent2D();
	if (captureComp) {
		FSceneView::DeprojectScreenToWorld(touchPosition, FIntRect(0, 0, captureComp->TextureTarget->SizeX, captureComp->TextureTarget->SizeY)
			, captureComp->GetViewState(0)->GetConcreteViewState()->PrevViewMatrices.GetInvProjectionMatrix(), worldLocation, worldDirection);
	}
}
