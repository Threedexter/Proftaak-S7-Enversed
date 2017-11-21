// Fill out your copyright notice in the Description page of Project Settings.

#include "BlackoutVRCharacter.h"


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
	FHitResult hit;
	TouchTrace(FVector2D(touchLocation.X, touchLocation.Y), hit);
	UE_LOG(LogTemp, Log, TEXT("Touched my trallala: %s"), *hit.Location.ToString())
}

void ABlackoutVRCharacter::TouchMoved(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	FHitResult hit;
	TouchTrace(FVector2D(touchLocation.X, touchLocation.Y), hit);
	UE_LOG(LogTemp, Log, TEXT("Moved my trallala: %s"), *hit.Location.ToString())
}

void ABlackoutVRCharacter::TouchExit(ETouchIndex::Type fingerIndex, FVector touchLocation)
{
	FHitResult hit;
	TouchTrace(FVector2D(touchLocation.X, touchLocation.Y), hit);
	UE_LOG(LogTemp, Log, TEXT("Pulled my trallala: %s"), *hit.Location.ToString())
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

	const FRotator rot(0, 270, 0);
	FVector traceRot = rot.RotateVector(worldLocation);
	FVector traceEnd = spec->GetActorLocation() - (FVector((((traceRot.X * -1) / raySpread) + rayOffset), traceRot.Y, traceRot.Z) * rayDistance);


	FCollisionQueryParams params;
	params.AddIgnoredActor(this);

	FCollisionResponseParams colResponseParams;
	colResponseParams.CollisionResponse.SetAllChannels(ECollisionResponse::ECR_Block);
	return GetWorld()->LineTraceSingleByChannel(hit, spec->GetActorLocation(), traceEnd, ECollisionChannel::ECC_Visibility, params, colResponseParams);
}

