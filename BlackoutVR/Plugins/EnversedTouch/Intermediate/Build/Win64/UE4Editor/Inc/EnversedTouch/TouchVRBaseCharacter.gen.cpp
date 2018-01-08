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
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchSpectatorCapture_NoRegister();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
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
	void ATouchVRBaseCharacter::StaticRegisterNativesATouchVRBaseCharacter()
	{
		UClass* Class = ATouchVRBaseCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetSpectatorCam", (Native)&ATouchVRBaseCharacter::execGetSpectatorCam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
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

				OuterClass->LinkChild(Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam());

				UProperty* NewProp_onTouchHitEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchHitBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchHitUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchHitUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchHitUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchWorldPosition__DelegateSignature());
				UProperty* NewProp_onTouchActorEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchActorUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchActorBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchActorBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchActorBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchActor__DelegateSignature());
				UProperty* NewProp_onTouchScreenEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenEnd, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_EndTouchScreenPosition__DelegateSignature());
				UProperty* NewProp_onTouchScreenBegin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenBegin, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_BeginTouchScreenPosition__DelegateSignature());
				UProperty* NewProp_onTouchScreenUpdate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("onTouchScreenUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(onTouchScreenUpdate, ATouchVRBaseCharacter), 0x0010000010080000, Z_Construct_UDelegateFunction_EnversedTouch_UpdateTouchScreenPosition__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchVRBaseCharacter_GetSpectatorCam(), "GetSpectatorCam"); // 1063623738
				static TCppClassTypeInfo<TCppClassTypeTraits<ATouchVRBaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
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
	IMPLEMENT_CLASS(ATouchVRBaseCharacter, 3526832755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATouchVRBaseCharacter(Z_Construct_UClass_ATouchVRBaseCharacter, &ATouchVRBaseCharacter::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("ATouchVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
