// Fill out your copyright notice in the Description page of Project Settings.

#include "TouchVRExampleCharacter.h"


ATouchVRExampleCharacter::ATouchVRExampleCharacter()
{
	VROrigin = CreateDefaultSubobject<USceneComponent>("VROrigin");
	VROrigin->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>("VRCamera");
	Camera->SetupAttachment(VROrigin);
	Camera->bLockToHmd = true;
	Camera->bUsePawnControlRotation = false;
	CreateAndAttachMotionController(LeftMotionController, "LeftMotionController", EControllerHand::Left);
	CreateAndAttachMotionController(RightMotionController, "RightMotionController", EControllerHand::Right);
}

void ATouchVRExampleCharacter::CreateAndAttachMotionController(UMotionControllerComponent* motionController,
	FName componentName, EControllerHand hand)
{
	motionController = CreateDefaultSubobject<UMotionControllerComponent>(componentName);
	motionController->bAutoActivate = true;
	motionController->bAutoRegister = true;
	motionController->Hand = hand;
	motionController->SetupAttachment(RootComponent);
	motionController->SetWorldLocation(RootComponent->GetComponentLocation());
	motionController->RelativeLocation = FVector(0, 0, 0);
}

void ATouchVRExampleCharacter::SetScore_Implementation(int score)
{
	if (endGame) return;
	currentScore = score;
}

void ATouchVRExampleCharacter::AddToScore_Implementation(int score)
{
	if (endGame) return;
	currentScore += score;
}
int ATouchVRExampleCharacter::GetScore_Implementation()
{
	return currentScore;
}
FString ATouchVRExampleCharacter::GetCName_Implementation()
{
	return Name;
}
void ATouchVRExampleCharacter::SetCName_Implementation(int name)
{
	Name = TEXT("P%d"), name;
}