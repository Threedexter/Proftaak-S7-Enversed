// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Vector2D.h"

/**
 * A class that is used to get the screen size of the game using the windows api.
 */
class ENVERSEDTOUCH_API TouchScreen
{
public:
	TouchScreen();
	static FVector2D GetGameSize();
	~TouchScreen();

private:
	void KillTouch();
};
