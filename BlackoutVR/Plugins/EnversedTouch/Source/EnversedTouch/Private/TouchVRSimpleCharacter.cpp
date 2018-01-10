// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchVRSimpleCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Public/TouchActorInterface.h"


void ATouchVRSimpleCharacter::BeginPlay()
{
	onTouchActorUpdate.AddDynamic(this, &ATouchVRSimpleCharacter::MoveTouchActor);
}

bool ATouchVRSimpleCharacter::CheckIfTouchedActorOnEnter(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation,
	FHitResult& hit)
{
	if (endGame) return false;

	AActor* actor;
	float length;
	if(Super::CheckIfTouchedActorOnEnter(fingerIndex, touchScreenLocation, hit))
	{
		return true;
	}
	if (gameStarted && (actor = GetNearestActor(hit.Location, length)) != nullptr)
	{
		if (!CheckActorBeenTouched(actor))
		{
			// check if distance is not too far
			if (length <= touchDistance)
			{
				AddFingerTouchToArray(fingerIndex, hit.Location, actor);
				return true;
			}
		}
	}
	return false;
}

bool ATouchVRSimpleCharacter::CheckIfTouchedActorOnMoved(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation,
	FHitResult& hit)
{
	if (endGame) return false;
	return Super::CheckIfTouchedActorOnMoved(fingerIndex, touchScreenLocation, hit);
}

bool ATouchVRSimpleCharacter::CheckIfTouchedActorOnExit(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation,
	FHitResult& hit)
{
	if (endGame) return false;
	return Super::CheckIfTouchedActorOnExit(fingerIndex, touchScreenLocation, hit);
}

FVector2D ATouchVRSimpleCharacter::GetTouchLocation_Implementation(int playerID)
{
	//check if is being touched
	FTouchFinger* touched = nullptr;

	for (FTouchFinger touchStruct : touchStructs)
	{
		if (touchStruct.touchedActor)
			if (playerID == ITouchActorInterface::Execute_GetTouchActorID(touchStruct.touchedActor))
			{
				touched = &touchStruct;
				break;
			}
	}
	// if touched
	if (touched)
	{
		// return current finger touch on screen
		return touched->lastTouchedWidgetPosition;
	}
	else return FVector2D(-1, -1);
}
void ATouchVRSimpleCharacter::StopDrag_Implementation(AActor* actor)
{
	FTouchFinger* touched = nullptr;

	for (FTouchFinger touchStruct : touchStructs)
	{
		if (touchStruct.touchedActor == actor)
		{
			touched = &touchStruct;
			break;
		}
	}

	if (touched)
	{
		ITouchActorInterface::Execute_StopActorMovement(actor);
		RemoveTouchFromArray(touched->fingerIndex);
	}
}

#pragma optimize("", off)
AActor* ATouchVRSimpleCharacter::GetNearestActor(FVector worldLocation, float& length)
{
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UTouchActorInterface::StaticClass(), actors);
	if (actors.Num() <= 0) return nullptr;

	// we don't care about height
	worldLocation.Z = 0;

	AActor* ret = nullptr;
	float tlength = 0;
	FVector temp;

	for (AActor* a : actors)
	{
		if (a)
		{
			temp = a->GetActorLocation();
			temp.Z = 0;
			if (tlength == 0)
			{
				tlength = FVector::Dist(worldLocation, temp);
				ret = a;
			}
			else
			{
				// check distance, ignore height
				float ttlength = FVector::Dist(worldLocation, temp);
				if (ttlength < tlength)
				{
					tlength = ttlength;
					ret = a;
				}
			}
		}
	}
	length = tlength;
	return ret;
}

void ATouchVRSimpleCharacter::MoveTouchActor(AActor* touchActor, FVector worldHitPosition)
{
	ITouchActorInterface::Execute_SetMoveActorLocation(touchActor, worldHitPosition);
}
#pragma optimize("", on)
