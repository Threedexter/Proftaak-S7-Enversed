// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchVRBaseCharacter.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ATouchVRBaseCharacter::ATouchVRBaseCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATouchVRBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called to bind functionality to input
void ATouchVRBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ATouchVRBaseCharacter::TouchEnter);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ATouchVRBaseCharacter::TouchMoved);
	InputComponent->BindTouch(EInputEvent::IE_Released, this, &ATouchVRBaseCharacter::TouchExit);
}

ATouchSpectatorCapture* ATouchVRBaseCharacter::GetSpectatorCam()
{
	if (!currentSpecCam)
	{
		TArray<AActor*> foundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATouchSpectatorCapture::StaticClass(), foundActors);
		currentSpecCam = (foundActors.Num() > 0) ? Cast<ATouchSpectatorCapture>(foundActors[0]) : currentSpecCam;
	}
	return currentSpecCam;
}

AActor* ATouchVRBaseCharacter::GetTouchedActor(ETouchIndex::Type fingerIndex)
{
	for (FTouchFinger touchStruct : touchStructs)
	{
		if (touchStruct.fingerIndex == fingerIndex)
		{
			return touchStruct.touchedActor;
		}
	}
	return nullptr;
}

FVector2D ATouchVRBaseCharacter::GetLastTouchLocation()
{
	return lastTouchLocation;
}

void ATouchVRBaseCharacter::AddFingerTouchToArray(ETouchIndex::Type fingerIndex, FVector hitLocation, AActor* actor)
{
	FVector2D empty = FVector2D(0, 0);
	touchStructs.Add(FTouchFinger(fingerIndex, hitLocation, actor, empty));
}

void ATouchVRBaseCharacter::RemoveTouchFromArray(ETouchIndex::Type fingerIndex)
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

bool ATouchVRBaseCharacter::CheckIfTouchedActorOnEnter(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation, FHitResult& hit)
{
	if (TouchTrace(touchScreenLocation, hit))
	{
		onTouchHitBegin.Broadcast(hit, hit.Location);
		if (hit.GetActor() && !CheckActorBeenTouched(hit.GetActor()))
		{
			AddFingerTouchToArray(fingerIndex, hit.Location, hit.GetActor());
			onTouchActorBegin.Broadcast(hit.GetActor(), hit.Location);
			return true;
		}
	}
	return false;
}

bool ATouchVRBaseCharacter::CheckIfTouchedActorOnMoved(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation,
	FHitResult& hit)
{
	if (TouchTrace(touchScreenLocation, hit))
	{
		onTouchHitUpdate.Broadcast(hit, hit.Location);

		for (FTouchFinger touchStruct : touchStructs)
		{
			if (touchStruct.fingerIndex == fingerIndex)
			{
				touchStruct.lastTouchedPosition = hit.Location;
				if(touchStruct.touchedActor)
				{
					onTouchActorUpdate.Broadcast(touchStruct.touchedActor, hit.Location);
					return true;
				}
			}
		}
	}

	return false;
}

bool ATouchVRBaseCharacter::CheckIfTouchedActorOnExit(ETouchIndex::Type fingerIndex, FVector2D touchScreenLocation,
	FHitResult& hit)
{
	if (TouchTrace(touchScreenLocation, hit))
	{
		onTouchHitEnd.Broadcast(hit, hit.Location);
		for (FTouchFinger touchStruct : touchStructs) {
			if (touchStruct.fingerIndex == fingerIndex)
			{
				touchStruct.lastTouchedPosition = hit.Location;
				if (touchStruct.touchedActor) {
					onTouchActorEnd.Broadcast(touchStruct.touchedActor, hit.Location);
					return true;
				}
			}
		}
	}
	return false;
}

bool ATouchVRBaseCharacter::CheckIfTouchedWidget(ETouchFingerState fingerState, FVector2D touchScreenLocation, FVector2D& touchLocationWidget,
	FHitResult& hit)
{
	if (GetSpectatorCam())
	{
		TArray<UWidgetWrapper*> widgets;
		if (GetSpectatorCam()->GetTouchedWidgetsFromCamera(touchScreenLocation, rayDistance, touchLocationWidget, hit, widgets))
		{
			BroadCastTouchedWidget(fingerState, true, touchLocationWidget, hit, widgets);
			return true;
		}
	}
	return false;
}

bool ATouchVRBaseCharacter::BroadCastTouchedWidget(ETouchFingerState fingerState, bool hitWidget,
	FVector2D& touchLocationWidget, FHitResult& hit, TArray<UWidgetWrapper*>& widgets)
{
	switch (fingerState)
	{
	case ETouchFingerState::Begin:
		onTouchWidgetBegin.Broadcast(touchLocationWidget, hit, widgets, hitWidget);
		return true;
	case ETouchFingerState::Update:
		onTouchWidgetUpdate.Broadcast(touchLocationWidget, hit, widgets, hitWidget);
		return true;
	case ETouchFingerState::Exit:
		onTouchWidgetEnd.Broadcast(touchLocationWidget, hit, widgets, hitWidget);
		return true;
	}
	return false;
}

bool ATouchVRBaseCharacter::HasFingerIndex(ETouchIndex::Type fingerIndex)
{
	for (int i = 0; i < touchStructs.Num(); i++)
	{
		if (touchStructs[i].fingerIndex == fingerIndex)
		{
			return true;
		}
	}
	return false;
}

void ATouchVRBaseCharacter::TouchEnter(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	if (fingerIndex == ETouchIndex::CursorPointerIndex || HasFingerIndex(fingerIndex)) { return; } //Check if a mouse touched the display or a finger is already being used, this prevents double taps.

	FVector2D screenTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	lastTouchLocation = screenTouchLocation;
	onTouchScreenBegin.Broadcast(screenTouchLocation, true);

	FHitResult hit;
	if (!CheckIfTouchedActorOnEnter(fingerIndex, screenTouchLocation, hit))
	{
		AddFingerTouchToArray(fingerIndex, hit.Location, hit.GetActor());
	}

	FHitResult hitWidget;
	FVector2D widgetTouchLocation;
	CheckIfTouchedWidget(ETouchFingerState::Begin, screenTouchLocation, widgetTouchLocation, hitWidget); //returns a bool so you can do some more stuff with it in the future.
}

void ATouchVRBaseCharacter::TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	FVector2D screenTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	lastTouchLocation = screenTouchLocation;
	onTouchScreenUpdate.Broadcast(screenTouchLocation, true);

	FHitResult hit;
	CheckIfTouchedActorOnMoved(fingerIndex, screenTouchLocation, hit);

	FHitResult hitWidget;
	FVector2D widgetTouchLocation;
	if (CheckIfTouchedWidget(ETouchFingerState::Update, screenTouchLocation, widgetTouchLocation, hitWidget))
	{

		for (FTouchFinger& touchStruct : touchStructs)
		{
			if (touchStruct.fingerIndex == fingerIndex && currentSpecCam)
			{
				touchStruct.lastTouchedWidgetPosition.X = widgetTouchLocation.X;
				touchStruct.lastTouchedWidgetPosition.Y = widgetTouchLocation.Y;
				break;
			}
		}
	}
}

void ATouchVRBaseCharacter::TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	if (!HasFingerIndex(fingerIndex)) return;

	FVector2D screenTouchLocation = FVector2D(touchLocation.X, touchLocation.Y);
	lastTouchLocation = screenTouchLocation;
	onTouchScreenEnd.Broadcast(screenTouchLocation, true);

	FHitResult hit;
	CheckIfTouchedActorOnExit(fingerIndex, screenTouchLocation, hit);

	FHitResult hitWidget;
	FVector2D hitLocationWidget;
	CheckIfTouchedWidget(ETouchFingerState::Exit, screenTouchLocation, hitLocationWidget, hitWidget);

	RemoveTouchFromArray(fingerIndex);
}

bool ATouchVRBaseCharacter::CheckActorBeenTouched(AActor* actor)
{
	for (FTouchFinger touchstruct : touchStructs)
	{
		if (touchstruct.touchedActor == actor)
		{
			return true;
		}
	}
	return false;
}

bool ATouchVRBaseCharacter::TouchTrace(FVector2D touchLocation, FHitResult& hit)
{
	FVector worldLocation;
	FVector worldDirection;
	ATouchSpectatorCapture* spec = GetSpectatorCam();

	if (spec)
	{
		spec->ScreenToWorld(touchLocation, worldLocation, worldDirection);
	}
	else
	{
		return false;
	}

	FCollisionQueryParams params;
	params.AddIgnoredActor(this);

	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	return GetWorld()->LineTraceSingleByChannel(hit, spec->GetActorLocation(),
		spec->GetActorLocation() - (worldDirection * rayDistance), ECollisionChannel::ECC_Visibility, params, colResponseParams);
}
