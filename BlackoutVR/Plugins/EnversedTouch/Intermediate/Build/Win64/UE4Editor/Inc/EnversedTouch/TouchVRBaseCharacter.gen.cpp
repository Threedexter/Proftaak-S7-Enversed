// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TouchVRBaseCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchVRBaseCharacter() {}
// Cross Module References
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWidget__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UWidgetWrapper_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWidget__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWidget__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UEnum* Z_Construct_UEnum_EnversedTouch_ETouchFingerState();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_CheckActorBeenTouched();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetLastTouchLocation();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchSpectatorCapture_NoRegister();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetTouchedActor();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_HasFingerIndex();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENVERSEDTOUCH_API UScriptStruct* Z_Construct_UScriptStruct_FTouchFinger();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWidget__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventEndTouchWidget_Parms
		{
			FVector2D touchWidgetLocation;
			FHitResult touchWorldHit;
			TArray<UWidgetWrapper*> widgets;
			bool hitWidget;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndTouchWidget__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventEndTouchWidget_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(hitWidget, _Script_EnversedTouch_eventEndTouchWidget_Parms);
			UProperty* NewProp_hitWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("hitWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(hitWidget, _Script_EnversedTouch_eventEndTouchWidget_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(hitWidget, _Script_EnversedTouch_eventEndTouchWidget_Parms), sizeof(bool), true);
			UProperty* NewProp_widgets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(widgets, _Script_EnversedTouch_eventEndTouchWidget_Parms), 0x0010000000000080);
			UProperty* NewProp_widgets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_widgets, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UWidgetWrapper_NoRegister());
			UProperty* NewProp_touchWorldHit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWorldHit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWorldHit, _Script_EnversedTouch_eventEndTouchWidget_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchWidgetLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWidgetLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWidgetLocation, _Script_EnversedTouch_eventEndTouchWidget_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWidget__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventUpdateTouchWidget_Parms
		{
			FVector2D touchWidgetLocation;
			FHitResult touchWorldHit;
			TArray<UWidgetWrapper*> widgets;
			bool hitWidget;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTouchWidget__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventUpdateTouchWidget_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(hitWidget, _Script_EnversedTouch_eventUpdateTouchWidget_Parms);
			UProperty* NewProp_hitWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("hitWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(hitWidget, _Script_EnversedTouch_eventUpdateTouchWidget_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(hitWidget, _Script_EnversedTouch_eventUpdateTouchWidget_Parms), sizeof(bool), true);
			UProperty* NewProp_widgets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(widgets, _Script_EnversedTouch_eventUpdateTouchWidget_Parms), 0x0010000000000080);
			UProperty* NewProp_widgets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_widgets, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UWidgetWrapper_NoRegister());
			UProperty* NewProp_touchWorldHit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWorldHit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWorldHit, _Script_EnversedTouch_eventUpdateTouchWidget_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchWidgetLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWidgetLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWidgetLocation, _Script_EnversedTouch_eventUpdateTouchWidget_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWidget__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventBeginTouchWidget_Parms
		{
			FVector2D touchWidgetLocation;
			FHitResult touchWorldHit;
			TArray<UWidgetWrapper*> widgets;
			bool hitWidget;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginTouchWidget__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventBeginTouchWidget_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(hitWidget, _Script_EnversedTouch_eventBeginTouchWidget_Parms);
			UProperty* NewProp_hitWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("hitWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(hitWidget, _Script_EnversedTouch_eventBeginTouchWidget_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(hitWidget, _Script_EnversedTouch_eventBeginTouchWidget_Parms), sizeof(bool), true);
			UProperty* NewProp_widgets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(widgets, _Script_EnversedTouch_eventBeginTouchWidget_Parms), 0x0010000000000080);
			UProperty* NewProp_widgets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_widgets, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UWidgetWrapper_NoRegister());
			UProperty* NewProp_touchWorldHit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWorldHit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWorldHit, _Script_EnversedTouch_eventBeginTouchWidget_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchWidgetLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchWidgetLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchWidgetLocation, _Script_EnversedTouch_eventBeginTouchWidget_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventEndTouchWorldPosition_Parms
		{
			FHitResult touchHitResult;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndTouchWorldPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventEndTouchWorldPosition_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventEndTouchWorldPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchHitResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchHitResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchHitResult, _Script_EnversedTouch_eventEndTouchWorldPosition_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventBeginTouchWorldPosition_Parms
		{
			FHitResult touchHitResult;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginTouchWorldPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventBeginTouchWorldPosition_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventBeginTouchWorldPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchHitResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchHitResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchHitResult, _Script_EnversedTouch_eventBeginTouchWorldPosition_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms
		{
			FHitResult touchHitResult;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTouchWorldPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchHitResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchHitResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchHitResult, _Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms), 0x0010008000000080, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventEndTouchActor_Parms
		{
			AActor* touchActor;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndTouchActor__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventEndTouchActor_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventEndTouchActor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(touchActor, _Script_EnversedTouch_eventEndTouchActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventUpdateTouchActor_Parms
		{
			AActor* touchActor;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTouchActor__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventUpdateTouchActor_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventUpdateTouchActor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(touchActor, _Script_EnversedTouch_eventUpdateTouchActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventBeginTouchActor_Parms
		{
			AActor* touchActor;
			FVector worldHitPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginTouchActor__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventBeginTouchActor_Parms));
			UProperty* NewProp_worldHitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldHitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldHitPosition, _Script_EnversedTouch_eventBeginTouchActor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(touchActor, _Script_EnversedTouch_eventBeginTouchActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventEndTouchScreenPosition_Parms
		{
			FVector2D touchLocation;
			bool IsTouch;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndTouchScreenPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventEndTouchScreenPosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsTouch, _Script_EnversedTouch_eventEndTouchScreenPosition_Parms);
			UProperty* NewProp_IsTouch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsTouch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsTouch, _Script_EnversedTouch_eventEndTouchScreenPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(IsTouch, _Script_EnversedTouch_eventEndTouchScreenPosition_Parms), sizeof(bool), true);
			UProperty* NewProp_touchLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocation, _Script_EnversedTouch_eventEndTouchScreenPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms
		{
			FVector2D touchLocation;
			bool IsTouch;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginTouchScreenPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventBeginTouchScreenPosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsTouch, _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms);
			UProperty* NewProp_IsTouch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsTouch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsTouch, _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(IsTouch, _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms), sizeof(bool), true);
			UProperty* NewProp_touchLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocation, _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature()
	{
		struct _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms
		{
			FVector2D touchLocation;
			bool IsTouch;
		};
		UObject* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTouchScreenPosition__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsTouch, _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms);
			UProperty* NewProp_IsTouch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IsTouch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsTouch, _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(IsTouch, _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms), sizeof(bool), true);
			UProperty* NewProp_touchLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocation, _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
static UEnum* ETouchFingerState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_EnversedTouch_ETouchFingerState, Z_Construct_UPackage__Script_EnversedTouch(), TEXT("ETouchFingerState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchFingerState(ETouchFingerState_StaticEnum, TEXT("/Script/EnversedTouch"), TEXT("ETouchFingerState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_EnversedTouch_ETouchFingerState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		extern uint32 Get_Z_Construct_UEnum_EnversedTouch_ETouchFingerState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchFingerState"), 0, Get_Z_Construct_UEnum_EnversedTouch_ETouchFingerState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETouchFingerState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETouchFingerState::Begin"), 0);
			EnumNames.Emplace(TEXT("ETouchFingerState::Update"), 1);
			EnumNames.Emplace(TEXT("ETouchFingerState::Exit"), 2);
			EnumNames.Emplace(TEXT("ETouchFingerState::ETouchFingerState_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETouchFingerState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Structure used for remembering the lastTouchedPosition for a finger."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_EnversedTouch_ETouchFingerState_CRC() { return 3711536052U; }
	void ATouchVRBaseCharacter::StaticRegisterNativesATouchVRBaseCharacter()
	{
		UClass* Class = ATouchVRBaseCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CheckActorBeenTouched", (Native)&ATouchVRBaseCharacter::execCheckActorBeenTouched },
			{ "GetLastTouchLocation", (Native)&ATouchVRBaseCharacter::execGetLastTouchLocation },
			{ "GetSpectatorCam", (Native)&ATouchVRBaseCharacter::execGetSpectatorCam },
			{ "GetTouchedActor", (Native)&ATouchVRBaseCharacter::execGetTouchedActor },
			{ "HasFingerIndex", (Native)&ATouchVRBaseCharacter::execHasFingerIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_CheckActorBeenTouched()
	{
		struct TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CheckActorBeenTouched"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms), sizeof(bool), true);
			UProperty* NewProp_actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(actor, TouchVRBaseCharacter_eventCheckActorBeenTouched_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Touch|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks if an actor is already touched/selected by a finger.\n@param actor - The actor you want to check for if it has een touched.\n@return Wether the actor has been touched"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetLastTouchLocation()
	{
		struct TouchVRBaseCharacter_eventGetLastTouchLocation_Parms
		{
			FVector2D ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLastTouchLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820401, 65535, sizeof(TouchVRBaseCharacter_eventGetLastTouchLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TouchVRBaseCharacter_eventGetLastTouchLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Touch|Location"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the last touched screen location.\n@return The last touched screen location."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam()
	{
		struct TouchVRBaseCharacter_eventGetSpectatorCam_Parms
		{
			ATouchSpectatorCapture* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSpectatorCam"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(TouchVRBaseCharacter_eventGetSpectatorCam_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, TouchVRBaseCharacter_eventGetSpectatorCam_Parms), 0x0010000000000580, Z_Construct_UClass_ATouchSpectatorCapture_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Specator|Cam"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the spectator cam\n@return Either returns the spectator cam or a nullptr, always check if valid."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetTouchedActor()
	{
		struct TouchVRBaseCharacter_eventGetTouchedActor_Parms
		{
			TEnumAsByte<ETouchIndex::Type> fingerIndex;
			AActor* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTouchedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TouchVRBaseCharacter_eventGetTouchedActor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, TouchVRBaseCharacter_eventGetTouchedActor_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_fingerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fingerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(fingerIndex, TouchVRBaseCharacter_eventGetTouchedActor_Parms), 0x0010000000000080, Z_Construct_UEnum_InputCore_ETouchIndex());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Touch|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the touched actor by a certain finger.\n@param fingerIndex - The finger you want to check for an Actor\n@return A Actor touched by the given finger or a null pointer. Always check if the returned object is valid!"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_HasFingerIndex()
	{
		struct TouchVRBaseCharacter_eventHasFingerIndex_Parms
		{
			TEnumAsByte<ETouchIndex::Type> fingerIndex;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HasFingerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TouchVRBaseCharacter_eventHasFingerIndex_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TouchVRBaseCharacter_eventHasFingerIndex_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TouchVRBaseCharacter_eventHasFingerIndex_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TouchVRBaseCharacter_eventHasFingerIndex_Parms), sizeof(bool), true);
			UProperty* NewProp_fingerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fingerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(fingerIndex, TouchVRBaseCharacter_eventHasFingerIndex_Parms), 0x0010000000000080, Z_Construct_UEnum_InputCore_ETouchIndex());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Touch|Actor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks if a fingerindex is currently touching something.\n@param fingerIndex - The fingerindex you want to check\n@return Wether the given fingerindex is currently touching something."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATouchVRBaseCharacter_NoRegister()
	{
		return ATouchVRBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ATouchVRBaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_EnversedTouch();
			OuterClass = ATouchVRBaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_CheckActorBeenTouched());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_GetLastTouchLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_GetTouchedActor());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_HasFingerIndex());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(gameStarted, ATouchVRBaseCharacter);
				UProperty* NewProp_gameStarted = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("gameStarted"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(gameStarted, ATouchVRBaseCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(gameStarted, ATouchVRBaseCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(endGame, ATouchVRBaseCharacter);
				UProperty* NewProp_endGame = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("endGame"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(endGame, ATouchVRBaseCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(endGame, ATouchVRBaseCharacter), sizeof(bool), true);
				UProperty* NewProp_lastTouchLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("lastTouchLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lastTouchLocation, ATouchVRBaseCharacter), 0x0010000000020015, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_touchStructs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("touchStructs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(touchStructs, ATouchVRBaseCharacter), 0x0010000000020015);
				UProperty* NewProp_touchStructs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_touchStructs, TEXT("touchStructs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FTouchFinger());
				UProperty* NewProp_rayDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("rayDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rayDistance, ATouchVRBaseCharacter), 0x0010000000000005);
				UProperty* NewProp_onTouchWidgetEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchWidgetEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchWidgetEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWidget__DelegateSignature());
				UProperty* NewProp_onTouchWidgetUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchWidgetUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchWidgetUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWidget__DelegateSignature());
				UProperty* NewProp_onTouchWidgetBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchWidgetBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchWidgetBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWidget__DelegateSignature());
				UProperty* NewProp_onTouchHitEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchHitBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchHitUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchActorEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchActorUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchActorBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchScreenEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature());
				UProperty* NewProp_onTouchScreenBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature());
				UProperty* NewProp_onTouchScreenUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_CheckActorBeenTouched(), "CheckActorBeenTouched"); // 3193235851
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_GetLastTouchLocation(), "GetLastTouchLocation"); // 4248278740
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam(), "GetSpectatorCam"); // 1063623738
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_GetTouchedActor(), "GetTouchedActor"); // 4182834205
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_HasFingerIndex(), "HasFingerIndex"); // 3058326322
				static TCppClassTypeInfo<TCppClassTypeTraits<ATouchVRBaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_gameStarted, TEXT("Category"), TEXT("Game"));
				MetaData->SetValue(NewProp_gameStarted, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_endGame, TEXT("Category"), TEXT("Game"));
				MetaData->SetValue(NewProp_endGame, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_lastTouchLocation, TEXT("Category"), TEXT("Touch|Location"));
				MetaData->SetValue(NewProp_lastTouchLocation, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_touchStructs, TEXT("Category"), TEXT("Touch|Actors"));
				MetaData->SetValue(NewProp_touchStructs, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_rayDistance, TEXT("Category"), TEXT("Touch|Ray"));
				MetaData->SetValue(NewProp_rayDistance, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchWidgetEnd, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchWidgetEnd, TEXT("ToolTip"), TEXT("* When the player finished touching the actor."));
				MetaData->SetValue(NewProp_onTouchWidgetUpdate, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchWidgetUpdate, TEXT("ToolTip"), TEXT("* While the player is touching the actor, this will get called multiple times."));
				MetaData->SetValue(NewProp_onTouchWidgetBegin, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchWidgetBegin, TEXT("ToolTip"), TEXT("* When the player starts touching an actor."));
				MetaData->SetValue(NewProp_onTouchHitEnd, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchHitEnd, TEXT("ToolTip"), TEXT("* Last world hitposition of the touchscreen player."));
				MetaData->SetValue(NewProp_onTouchHitBegin, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchHitBegin, TEXT("ToolTip"), TEXT("* First world hitposition of the touchscreen player."));
				MetaData->SetValue(NewProp_onTouchHitUpdate, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchHitUpdate, TEXT("ToolTip"), TEXT("* World hitposition of the touchscreen player, while swiping/holding the finger on the screen."));
				MetaData->SetValue(NewProp_onTouchActorEnd, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchActorEnd, TEXT("ToolTip"), TEXT("* When the player finished touching the actor."));
				MetaData->SetValue(NewProp_onTouchActorUpdate, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchActorUpdate, TEXT("ToolTip"), TEXT("* While the player is touching the actor, this will get called multiple times."));
				MetaData->SetValue(NewProp_onTouchActorBegin, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchActorBegin, TEXT("ToolTip"), TEXT("* When the player starts touching an actor."));
				MetaData->SetValue(NewProp_onTouchScreenEnd, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchScreenEnd, TEXT("ToolTip"), TEXT("* When the player finishes touching the screen."));
				MetaData->SetValue(NewProp_onTouchScreenBegin, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchScreenBegin, TEXT("ToolTip"), TEXT("* When the player starts touching the screen."));
				MetaData->SetValue(NewProp_onTouchScreenUpdate, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(NewProp_onTouchScreenUpdate, TEXT("ToolTip"), TEXT("* While the player is touching the screen, this will get called multiple times."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATouchVRBaseCharacter, 2069716072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATouchVRBaseCharacter(Z_Construct_UClass_ATouchVRBaseCharacter, &ATouchVRBaseCharacter::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("ATouchVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
