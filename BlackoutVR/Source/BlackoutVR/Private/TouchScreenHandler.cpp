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

TouchScreenHandler::TouchScreenHandler()
{
	HWND hwnd = GetGameHandler(GetCurrentProcessId());
	if (IsTouchWindow(hwnd, 0)) {
		BOOL fEnabled = FALSE;
		//#if(WINVER >= 0x0602)
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
		//#endif
	}
}

HWND TouchScreenHandler::GetGameHandler(unsigned long process_id)
{
	HD data;
	data.process_id = process_id;
	data.best_handle = 0;
	EnumWindows(EnumWindowsCallback, (LPARAM)&data);
	return data.best_handle;
}

BOOL CALLBACK TouchScreenHandler::EnumWindowsCallback(HWND handle, LPARAM lParam)
{
	HD& data = *(HD*)lParam;
	unsigned long process_id = 0;
	GetWindowThreadProcessId(handle, &process_id);
	if (data.process_id != process_id || !IsMainWindow(handle)) {
		return TRUE;
	}
	data.best_handle = handle;
	return FALSE;
}

BOOL TouchScreenHandler::IsMainWindow(HWND handle)
{
	return GetWindow(handle, GW_OWNER) == (HWND)0 && IsWindowVisible(handle);
}

TouchScreenHandler::~TouchScreenHandler()
{
}
