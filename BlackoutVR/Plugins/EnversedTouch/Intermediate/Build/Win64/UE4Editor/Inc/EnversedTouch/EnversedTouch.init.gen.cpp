// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnversedTouch_init() {}
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWidget__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWidget__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWidget__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/EnversedTouch")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0xBF04B0EF;
			Guid.B = 0x8DB9CF68;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWidget__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWidget__DelegateSignature();
			Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWidget__DelegateSignature();
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
