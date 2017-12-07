// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class BLACKOUTVR_API TouchScreenHandler
{
public:
	TouchScreenHandler();
	FVector2D GetGameSize();
	~TouchScreenHandler();

private:
	void KillTouch();
};
