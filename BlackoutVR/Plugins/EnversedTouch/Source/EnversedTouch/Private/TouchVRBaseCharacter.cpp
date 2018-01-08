// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchVRBaseCharacter.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ATouchVRBaseCharacter::ATouchVRBaseCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

// Called when the game starts or when spawned
void ATouchVRBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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

// Called to bind functionality to input
void ATouchVRBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

