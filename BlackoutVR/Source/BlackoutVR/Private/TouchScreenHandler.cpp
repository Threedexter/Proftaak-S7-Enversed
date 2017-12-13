// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#define STRICT
#include "TouchScreenHandler.h"
#include <windows.h>

static bool killedTouch;

#define WM_EXITSIZEMOVE                 0x0232

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

// attach in the future
LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		//..
	case WM_EXITSIZEMOVE :
		{
			// on stop resize
			int width = LOWORD(lParam), height = HIWORD(lParam);
			UE_LOG(LogTemp, Warning, TEXT("Resized to %d,%d"), width, height);
		}
	case WM_SIZE:
		{
			// on resize
			int width = LOWORD(lParam), height = HIWORD(lParam);
			UE_LOG(LogTemp, Warning, TEXT("Resizing to %d,%d"), width, height);
		}
		// ..
		break;
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

TouchScreenHandler::~TouchScreenHandler()
{
}
