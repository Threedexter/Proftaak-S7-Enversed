// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <windows.h>

/**
 * 
 */
class BLACKOUTVR_API TouchScreenHandler
{
public:
	TouchScreenHandler();
	static FVector2D GetGameSize();
	~TouchScreenHandler();

private:
	LRESULT WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	void KillTouch();
};
