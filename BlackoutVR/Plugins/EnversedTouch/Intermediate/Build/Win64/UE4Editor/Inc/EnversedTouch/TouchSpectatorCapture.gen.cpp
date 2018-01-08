// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TouchSpectatorCapture.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchSpectatorCapture() {}
// Cross Module References
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetCustom();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchSpectatorCapture();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetFromCamera();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_GetTouchedWidgetsFromCamera();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UWidgetWrapper_NoRegister();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_RayCastWorld();
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_ScreenToWorld();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchSpectatorCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void ATouchSpectatorCapture::StaticRegisterNativesATouchSpectatorCapture()
	{
		UClass* Class = ATouchSpectatorCapture::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CheckIfTouchedWidgetCustom", (Native)&ATouchSpectatorCapture::execCheckIfTouchedWidgetCustom },
			{ "CheckIfTouchedWidgetFromCamera", (Native)&ATouchSpectatorCapture::execCheckIfTouchedWidgetFromCamera },
			{ "GetTouchedWidgetsFromCamera", (Native)&ATouchSpectatorCapture::execGetTouchedWidgetsFromCamera },
			{ "RayCastWorld", (Native)&ATouchSpectatorCapture::execRayCastWorld },
			{ "ScreenToWorld", (Native)&ATouchSpectatorCapture::execScreenToWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetCustom()
	{
		struct TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms
		{
			FVector startLocation;
			FVector endLocation;
			float rayDistance;
			FVector2D touchLocationWidget;
			FHitResult touchLocationWorld;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchSpectatorCapture();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CheckIfTouchedWidgetCustom"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), sizeof(bool), true);
			UProperty* NewProp_touchLocationWorld = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWorld, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010008000000180, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchLocationWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWidget, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_rayDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rayDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rayDistance, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010000000000080);
			UProperty* NewProp_endLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("endLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(endLocation, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_startLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("startLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(startLocation, TouchSpectatorCapture_eventCheckIfTouchedWidgetCustom_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Screen"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetFromCamera()
	{
		struct TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms
		{
			FVector2D touchPosition;
			float rayDistance;
			FVector2D touchLocationWidget;
			FHitResult touchLocationWorld;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchSpectatorCapture();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CheckIfTouchedWidgetFromCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), sizeof(bool), true);
			UProperty* NewProp_touchLocationWorld = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWorld, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), 0x0010008000000180, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchLocationWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWidget, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_rayDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rayDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rayDistance, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), 0x0010000000000080);
			UProperty* NewProp_touchPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchPosition, TouchSpectatorCapture_eventCheckIfTouchedWidgetFromCamera_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Screen"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_GetTouchedWidgetsFromCamera()
	{
		struct TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms
		{
			FVector2D touchPosition;
			float rayDistance;
			FVector2D touchLocationWidget;
			FHitResult touchLocationWorld;
			TArray<UWidgetWrapper*> widgets;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchSpectatorCapture();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTouchedWidgetsFromCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), sizeof(bool), true);
			UProperty* NewProp_widgets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(widgets, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010000000000180);
			UProperty* NewProp_widgets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_widgets, TEXT("widgets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UWidgetWrapper_NoRegister());
			UProperty* NewProp_touchLocationWorld = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWorld, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010008000000180, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_touchLocationWidget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchLocationWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchLocationWidget, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_rayDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rayDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rayDistance, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010000000000080);
			UProperty* NewProp_touchPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchPosition, TouchSpectatorCapture_eventGetTouchedWidgetsFromCamera_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Screen"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_RayCastWorld()
	{
		struct TouchSpectatorCapture_eventRayCastWorld_Parms
		{
			FVector2D touchPosition;
			float rayDistance;
			FHitResult ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATouchSpectatorCapture();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RayCastWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(TouchSpectatorCapture_eventRayCastWorld_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TouchSpectatorCapture_eventRayCastWorld_Parms), 0x0010008000000580, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_rayDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("rayDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rayDistance, TouchSpectatorCapture_eventRayCastWorld_Parms), 0x0010000000000080);
			UProperty* NewProp_touchPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchPosition, TouchSpectatorCapture_eventRayCastWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Screen"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATouchSpectatorCapture_ScreenToWorld()
	{
		struct TouchSpectatorCapture_eventScreenToWorld_Parms
		{
			FVector2D touchPosition;
			FVector worldLocation;
			FVector worldDirection;
		};
		UObject* Outer = Z_Construct_UClass_ATouchSpectatorCapture();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ScreenToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(TouchSpectatorCapture_eventScreenToWorld_Parms));
			UProperty* NewProp_worldDirection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldDirection, TouchSpectatorCapture_eventScreenToWorld_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_worldLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("worldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(worldLocation, TouchSpectatorCapture_eventScreenToWorld_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_touchPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("touchPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(touchPosition, TouchSpectatorCapture_eventScreenToWorld_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Screen"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATouchSpectatorCapture_NoRegister()
	{
		return ATouchSpectatorCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_ATouchSpectatorCapture()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASceneCapture2D();
			Z_Construct_UPackage__Script_EnversedTouch();
			OuterClass = ATouchSpectatorCapture::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetCustom());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetFromCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchSpectatorCapture_GetTouchedWidgetsFromCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchSpectatorCapture_RayCastWorld());
				OuterClass->LinkChild(Z_Construct_UFunction_ATouchSpectatorCapture_ScreenToWorld());

				UProperty* NewProp_originRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("originRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(originRotation, ATouchSpectatorCapture), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_widgetInteraction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("widgetInteraction"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(widgetInteraction, ATouchSpectatorCapture), 0x001000000008000d, Z_Construct_UClass_UTouchSpectatorWidgetInteraction_NoRegister());
				UProperty* NewProp_linearColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("linearColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(linearColor, ATouchSpectatorCapture), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowDebug, ATouchSpectatorCapture);
				UProperty* NewProp_bShowDebug = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowDebug"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowDebug, ATouchSpectatorCapture), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bShowDebug, ATouchSpectatorCapture), sizeof(bool), true);
				UProperty* NewProp_UITraceChannel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UITraceChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(UITraceChannel, ATouchSpectatorCapture), 0x0010000000000005, Z_Construct_UEnum_Engine_ECollisionChannel());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetCustom(), "CheckIfTouchedWidgetCustom"); // 754515594
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchSpectatorCapture_CheckIfTouchedWidgetFromCamera(), "CheckIfTouchedWidgetFromCamera"); // 2660583015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchSpectatorCapture_GetTouchedWidgetsFromCamera(), "GetTouchedWidgetsFromCamera"); // 2400921557
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchSpectatorCapture_RayCastWorld(), "RayCastWorld"); // 265947141
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATouchSpectatorCapture_ScreenToWorld(), "ScreenToWorld"); // 441618664
				static TCppClassTypeInfo<TCppClassTypeTraits<ATouchSpectatorCapture> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Material Attachment Actor Collision Attachment Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TouchSpectatorCapture.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Class used for making a custom camera."));
				MetaData->SetValue(NewProp_originRotation, TEXT("Category"), TEXT("Touch|Rotation"));
				MetaData->SetValue(NewProp_originRotation, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
				MetaData->SetValue(NewProp_widgetInteraction, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_widgetInteraction, TEXT("Category"), TEXT("WidgetInteraction"));
				MetaData->SetValue(NewProp_widgetInteraction, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_widgetInteraction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
				MetaData->SetValue(NewProp_linearColor, TEXT("Category"), TEXT("UI|CollisionChannel|Debug"));
				MetaData->SetValue(NewProp_linearColor, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
				MetaData->SetValue(NewProp_bShowDebug, TEXT("Category"), TEXT("UI|CollisionChannel|Debug"));
				MetaData->SetValue(NewProp_bShowDebug, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
				MetaData->SetValue(NewProp_UITraceChannel, TEXT("Category"), TEXT("UI|CollisionChannel"));
				MetaData->SetValue(NewProp_UITraceChannel, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorCapture.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATouchSpectatorCapture, 4145975767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATouchSpectatorCapture(Z_Construct_UClass_ATouchSpectatorCapture, &ATouchSpectatorCapture::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("ATouchSpectatorCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchSpectatorCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
