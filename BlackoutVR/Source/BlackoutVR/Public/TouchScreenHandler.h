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
	HWND GetGameHandler(unsigned long process_id);
	static BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam);
	static BOOL IsMainWindow(HWND handle);
	TouchScreenHandler();
	~TouchScreenHandler();
};
