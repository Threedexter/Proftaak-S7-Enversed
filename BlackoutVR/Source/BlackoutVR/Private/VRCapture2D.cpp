// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCapture2D.h"
#include "SceneView.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"


void AVRCapture2D::ScreenToSieWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection)
{
	USceneCaptureComponent2D* captureComp = GetCaptureComponent2D();
	if (captureComp) {
		UTextureRenderTarget2D* texture = captureComp->TextureTarget;
		FIntRect size = FIntRect(0, 0, texture->SizeX, texture->SizeY);
		FMatrix matrix = captureComp->CustomProjectionMatrix;
		FSceneView::DeprojectScreenToWorld(touchPosition, size, matrix, worldLocation, worldDirection);
	}
}
