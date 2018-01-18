// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "WidgetWrapper.h"
#include "TouchSpectatorWidgetInteraction.h"
#include "TouchSpectatorCapture.generated.h"

/**
 * Class used for making a custom camera.
 */
UCLASS()
class ENVERSEDTOUCH_API ATouchSpectatorCapture : public ASceneCapture2D
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI|CollisionChannel")
		TEnumAsByte<ECollisionChannel> UITraceChannel = ECollisionChannel::ECC_GameTraceChannel1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI|CollisionChannel|Debug")
		bool bShowDebug = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI|CollisionChannel|Debug")
		FLinearColor linearColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WidgetInteraction", meta = (AllowPrivateAccess = "true"))
		UTouchSpectatorWidgetInteraction* widgetInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch|Rotation")
		FRotator originRotation = FRotator(0.f, 90.f, 90.f);

public:

	ATouchSpectatorCapture(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		void ScreenToWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		FHitResult RayCastWorld(FVector2D touchPosition, float rayDistance);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		bool CheckIfTouchedWidgetCustom(FVector startLocation, FVector endLocation, float rayDistance, FVector2D& touchLocationWidget, FHitResult& touchLocationWorld);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		bool CheckIfTouchedWidgetFromCamera(FVector2D touchPosition, float rayDistance, FVector2D& touchLocationWidget, FHitResult& touchLocationWorld);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		bool GetTouchedWidgetsFromCamera(FVector2D touchPosition, float rayDistance, FVector2D& touchLocationWidget, FHitResult& touchLocationWorld, TArray<UWidgetWrapper*>& widgets);

	UFUNCTION(BlueprintCallable, Category = "Touch")
		void KillTouchFeedback();
};
