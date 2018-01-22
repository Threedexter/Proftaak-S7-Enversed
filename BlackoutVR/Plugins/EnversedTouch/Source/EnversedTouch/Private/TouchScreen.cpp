// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#define STRICT
#include "TouchScreen.h"
#include <windows.h>

static bool killedTouch;

#define WM_EXITSIZEMOVE                 0x0232

TouchScreen::TouchScreen()
{
#if(WINVER >= 0x0602)
	KillTouch();
}

void TouchScreen::KillTouch()
{
	if (!killedTouch)
	{
		HWND hwnd = GetActiveWindow();
		if (IsTouchWindow(hwnd, 0)) {
			BOOL fEnabled = FALSE;
			SetWindowFeedbackSetting(hwnd,
				FEEDBACK_TOUCH_CONTACTVISUALIZATION,
				0, sizeof(fEnabled), &fEnabled);
			SetWindowFeedbackSetting(hwnd,
				FEEDBACK_TOUCH_TAP,
				0, sizeof(fEnabled), &fEnabled);
			SetWindowFeedbackSetting(hwnd,
				FEEDBACK_TOUCH_DOUBLETAP,
				0, sizeof(fEnabled), &fEnabled);
			SetWindowFeedbackSetting(hwnd,
				FEEDBACK_TOUCH_PRESSANDHOLD,
				0, sizeof(fEnabled), &fEnabled);
			SetWindowFeedbackSetting(hwnd,
				FEEDBACK_TOUCH_RIGHTTAP,
				0, sizeof(fEnabled), &fEnabled);
			killedTouch = true;
		}
	}
#endif
}

FVector2D TouchScreen::GetGameSize()
{
	RECT rect = RECT();
	HWND hwnd = GetActiveWindow();
	GetClientRect(hwnd, &rect);

	return FVector2D(rect.right, rect.bottom);
}

TouchScreen::~TouchScreen()
{
}

