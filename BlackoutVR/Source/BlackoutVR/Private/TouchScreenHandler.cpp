// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#define STRICT
#include "TouchScreenHandler.h"
#include <windows.h>
#include <ole2.h>

struct HD {
	unsigned long process_id;
	HWND best_handle;
};

static bool killedTouch;

TouchScreenHandler::TouchScreenHandler()
{
#if(WINVER >= 0x0602)
	if (!killedTouch)
	{
		KillTouch();
	}
}

void TouchScreenHandler::KillTouch()
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
	}
#endif
}

FVector2D TouchScreenHandler::GetGameSize()
{
	RECT rect = RECT();
	HWND hwnd = GetActiveWindow();
	GetClientRect(hwnd, &rect);

	return FVector2D(rect.right, rect.bottom);
}

TouchScreenHandler::~TouchScreenHandler()
{
}
