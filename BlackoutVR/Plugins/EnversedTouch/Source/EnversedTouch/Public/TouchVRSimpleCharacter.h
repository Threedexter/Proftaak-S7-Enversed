// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TouchVRBaseCharacter.h"
#include "TouchVRDataInterface.h"
#include "TouchVRSimpleCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ENVERSEDTOUCH_API ATouchVRSimpleCharacter : public ATouchVRBaseCharacter, public ITouchVRDataInterface
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game")
		bool endGame = false;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Game")
		bool gameStarted = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game|Touch")
		float touchDistance = 50;

private:

public:

	/**
	 * Beginplay
	 */
	virtual void BeginPlay() override;

	/**
	* Checks if a actor has been touched.
	* @param touchLocation - The touch location on the display.
	* @param hitLocation - A reference to the
	*/
	virtual bool CheckIfTouchedActorOnEnter(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit) override;

	virtual bool CheckIfTouchedActorOnMoved(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit) override;

	virtual bool CheckIfTouchedActorOnExit(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit) override;

	UFUNCTION(BlueprintCallable, Category = "Touch|World")
		AActor* GetNearestActor(FVector worldLocation, float& length);
	
	void MoveTouchActor(AActor* touchActor, FVector worldHitPosition);

	//interface methods
	virtual FVector2D GetTouchLocation_Implementation(int playerID) override;
	virtual void StopDrag_Implementation(AActor* actor) override;
};
