// Fill out your copyright notice in the Description page of Project Settings.

#include "BlackoutVRCharacter.h"
#include <string>
#include "TouchScreenHandler.h"


ABlackoutVRCharacter::ABlackoutVRCharacter()
{

}

void ABlackoutVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ABlackoutVRCharacter::TouchEnter);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ABlackoutVRCharacter::TouchMoved);
	InputComponent->BindTouch(EInputEvent::IE_Released, this, &ABlackoutVRCharacter::TouchExit);
}

void ABlackoutVRCharacter::BeginPlay()
{
	Super::BeginPlay();

	touch_screen_handler = TouchScreenHandler();

	if (GetSpectatorCam())
	{
		UE_LOG(LogTemp, Log, TEXT("Found the spec cam"))
	}
}

AVRCapture2D* ABlackoutVRCharacter::GetSpectatorCam()
{
	if (!currentSpecCam)
	{
		TArray<AActor*> foundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AVRCapture2D::StaticClass(), foundActors);
		currentSpecCam = (foundActors.Num() > 0) ? Cast<AVRCapture2D>(foundActors[0]) : currentSpecCam;
	}
	return currentSpecCam;
}

void ABlackoutVRCharacter::TouchEnter(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	lastTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	onTouchUpdate.Broadcast(FVector2D(touchLocation.X, touchLocation.Y), true);
	if (endGame) return;

	AActor* actor;
	FVector hitLocation;
	if (CheckIfTouchedActor(FVector2D(touchLocation.X, touchLocation.Y), hitLocation, actor))
	{
		if (!CheckActorBeenTouched(actor))
		{
			AddFingerTouchToArray(fingerIndex, hitLocation, actor);
		}
	}
}

void ABlackoutVRCharacter::TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	lastTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	onTouchUpdate.Broadcast(FVector2D(touchLocation.X, touchLocation.Y),false);
	if (endGame) return;
	
	bool touched = false;
	for (FFingerTouch& touchStruct : touchStructs)
	{
		if (touchStruct.fingerIndex == fingerIndex && currentSpecCam)
		{
			//currentSpecCam->RayCastWorld(touchLocation, rayDistance);
			touchStruct.lastTouchedPositionOnScreen.X = touchLocation.X;
			touchStruct.lastTouchedPositionOnScreen.Y = touchLocation.Y;
			touched = true;
			break;
		}
	}
	if (!touched) return;
	

	FHitResult hit;
	if(TouchTrace(FVector2D(touchLocation.X, touchLocation.Y), hit))
	{
		SetTouchedActorMovementLocation(fingerIndex, hit.Location);
	}
}

void ABlackoutVRCharacter::TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	lastTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	if (endGame) return;

	if (!HasTouchedActor(fingerIndex))
	{
		return;
	}

	AActor* touchedActor = GetTouchedActor(fingerIndex);
	if(touchedActor)
	{
		ITouchActor::Execute_StopActorMovement(touchedActor);
	}

	RemoveTouchFromArray(fingerIndex);
}

bool ABlackoutVRCharacter::CheckIfTouchedActor(FVector2D touchLocation, FVector& hitLocation, AActor*& actor)
{
	FHitResult hit;
	if (TouchTrace(touchLocation, hit))
	{
		if (hit.GetActor() && hit.GetActor()->GetClass()->ImplementsInterface(UTouchActor::StaticClass()))
		{
			hitLocation = hit.Location;
			actor = hit.GetActor();
			return true;
		}
	}
	return false;
}

bool ABlackoutVRCharacter::HasTouchedActor(ETouchIndex::Type fingerIndex)
{
	for(FFingerTouch touchStruct : touchStructs)
	{
		if(touchStruct.fingerIndex == fingerIndex && touchStruct.touchedActor)
		{
			return true;
		}
	}
	return false;
}

bool ABlackoutVRCharacter::CheckActorBeenTouched(AActor* actor)
{
	for (FFingerTouch touchstruct : touchStructs)
	{
		if (touchstruct.touchedActor == actor)
		{
			return true;
		}
	}
	return false;
}

void ABlackoutVRCharacter::AddFingerTouchToArray(ETouchIndex::Type fingerIndex, FVector hitLocation, AActor* actor)
{
	FVector2D empty = FVector2D(0, 0);
	touchStructs.Add(FFingerTouch(fingerIndex, hitLocation, actor, empty));
}

void ABlackoutVRCharacter::RemoveTouchFromArray(ETouchIndex::Type fingerIndex)
{
	for (int i = 0; i < touchStructs.Num(); i++)
	{
		if (touchStructs[i].fingerIndex == fingerIndex)
		{
			touchStructs.RemoveAt(i);
			return;
		}
	}
}

AActor * ABlackoutVRCharacter::GetTouchedActor(ETouchIndex::Type fingerIndex)
{
	for(FFingerTouch touchStruct : touchStructs)
	{
		if(touchStruct.fingerIndex == fingerIndex)
		{
			return touchStruct.touchedActor;
		}
	}
	return nullptr;
}

void ABlackoutVRCharacter::SetTouchedActorMovementLocation(ETouchIndex::Type fingerIndex, FVector hitLocation)
{
	for(FFingerTouch touchStruct : touchStructs)
	{
		if(touchStruct.fingerIndex == fingerIndex)
		{
			touchStruct.lastTouchedPosition = hitLocation;
			if(touchStruct.touchedActor)
			{
				ITouchActor::Execute_SetMoveActorLocation(touchStruct.touchedActor, hitLocation);
			}
		}
	}
}

FVector2D ABlackoutVRCharacter::GetLastTouchLocation()
{
	return lastTouchLocation;
}

FVector2D ABlackoutVRCharacter::GetTouchLocation_Implementation(int playerID)
{
	//check if is being touched
	FFingerTouch* touched = nullptr;

	for (FFingerTouch touchStruct : touchStructs)
	{
		FString name = IScoreKeeper::Execute_GetCName(touchStruct.touchedActor);
		FString pid = FString::FromInt(playerID);
		if (name.Contains(pid)) // limited to 10
		{
			touched = &touchStruct;
			break;
		}
	}
	// if touched
	if (touched)
	{
		// return current finger touch on screen
		return touched->lastTouchedPositionOnScreen;
	}
	else return FVector2D(-1,-1);
}
void ABlackoutVRCharacter::StopDrag_Implementation(AActor* actor)
{
	FFingerTouch* touched = nullptr;

	for (FFingerTouch touchStruct : touchStructs)
	{
		if (touchStruct.touchedActor == actor)
		{
			touched = &touchStruct;
			break;
		}
	}

	if (touched)
	{
		ITouchActor::Execute_StopActorMovement(actor);
		RemoveTouchFromArray(touched->fingerIndex);
	}
}

bool ABlackoutVRCharacter::TouchTrace(FVector2D touchLocation, FHitResult& hit)
{
	FVector worldLocation;
	FVector worldDirection;
	AVRCapture2D* spec = GetSpectatorCam();

	if (spec)
	{
		spec->ScreenToSieWorld(touchLocation, worldLocation, worldDirection);
	}
	else { return false; }

	FCollisionQueryParams params;
	params.AddIgnoredActor(this);

	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	return GetWorld()->LineTraceSingleByChannel(hit, spec->GetActorLocation(), 
		spec->GetActorLocation() - (worldDirection * rayDistance), ECollisionChannel::ECC_Visibility, params, colResponseParams);
}

void ABlackoutVRCharacter::SetScore_Implementation(int score)
{
	if (endGame) return;
	currentScore = score;
}

void ABlackoutVRCharacter::AddToScore_Implementation(int score)
{
	if (endGame) return;
	currentScore += score;
}
int ABlackoutVRCharacter::GetScore_Implementation()
{
	return currentScore;
}
FString ABlackoutVRCharacter::GetCName_Implementation()
{
	return Name;
}
void ABlackoutVRCharacter::SetCName_Implementation(int name)
{
	Name = TEXT("P%d"),name;
}