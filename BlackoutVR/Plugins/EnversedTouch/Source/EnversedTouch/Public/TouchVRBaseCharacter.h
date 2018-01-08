// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TouchVRBaseCharacter.generated.h"

UCLASS()
class ENVERSEDTOUCH_API ATouchVRBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	/**
	* Constructor
	*/
	ATouchVRBaseCharacter(const FObjectInitializer& ObjectInitializer);

	/**
	* Setup player input component
	*/
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	/**
	* Once the actor starts with the first tick in the world.
	*/
	virtual void BeginPlay() override;

	
};
