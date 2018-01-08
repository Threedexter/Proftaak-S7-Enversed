// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchVRBaseCharacter.h"


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



// Called to bind functionality to input
void ATouchVRBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

