// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "UObject/Interface.h"
#include "TouchVRDataInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTouchVRDataInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ENVERSEDTOUCH_API ITouchVRDataInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:	

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Touch|Location")
		FVector2D GetTouchLocation(int playerID);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Touch|Location")
		void StopDrag(AActor* actor);
};
