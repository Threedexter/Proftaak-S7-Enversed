// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "SpectatorWidgetInteraction.h"
#include "VRCapture2D.generated.h"

/**
 * 
 */
UCLASS()
class BLACKOUTVR_API AVRCapture2D : public ASceneCapture2D
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
		USpectatorWidgetInteraction* widgetInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch|Rotation")
		USceneComponent* touchRotationReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch|Rotation")
		FRotator originRotation = FRotator(90.f, 0.f, 90.f);

public:

	AVRCapture2D(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category="Screen")
	void ScreenToWorld(FVector2D touchPosition, FVector& worldLocation, FVector& worldDirection);
	
	UFUNCTION(BlueprintCallable, Category="Screen")
	FHitResult RayCastWorld(FVector2D touchPosition, float rayDistance);

	UFUNCTION(BlueprintCallable, Category = "Screen")
	bool CheckIfTouchedWidgetFromCamera(FVector2D touchPosition, float rayDistance, FVector2D& touchLocationWidget, FHitResult& touchLocationWorld);
};
