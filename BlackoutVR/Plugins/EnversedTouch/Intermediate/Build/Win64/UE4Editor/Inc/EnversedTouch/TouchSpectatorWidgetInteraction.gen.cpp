// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TouchSpectatorWidgetInteraction.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchSpectatorWidgetInteraction() {}
// Cross Module References
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_UTouchSpectatorWidgetInteraction_SetCustomHitResultAndUpdate();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
// End Cross Module References
	void UTouchSpectatorWidgetInteraction::StaticRegisterNativesUTouchSpectatorWidgetInteraction()
	{
		UClass* Class = UTouchSpectatorWidgetInteraction::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetCustomHitResultAndUpdate", (Native)&UTouchSpectatorWidgetInteraction::execSetCustomHitResultAndUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UTouchSpectatorWidgetInteraction_SetCustomHitResultAndUpdate()
	{
		struct TouchSpectatorWidgetInteraction_eventSetCustomHitResultAndUpdate_Parms
		{
			FHitResult HitResult;
		};
		UObject* Outer = Z_Construct_UClass_UTouchSpectatorWidgetInteraction();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCustomHitResultAndUpdate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(TouchSpectatorWidgetInteraction_eventSetCustomHitResultAndUpdate_Parms));
			UProperty* NewProp_HitResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitResult, TouchSpectatorWidgetInteraction_eventSetCustomHitResultAndUpdate_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorWidgetInteraction.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom."));
			MetaData->SetValue(NewProp_HitResult, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction_NoRegister()
	{
		return UTouchSpectatorWidgetInteraction::StaticClass();
	}
	UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidgetInteractionComponent();
			Z_Construct_UPackage__Script_EnversedTouch();
			OuterClass = UTouchSpectatorWidgetInteraction::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTouchSpectatorWidgetInteraction_SetCustomHitResultAndUpdate());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTouchSpectatorWidgetInteraction_SetCustomHitResultAndUpdate(), "SetCustomHitResultAndUpdate"); // 4175532288
				static TCppClassTypeInfo<TCppClassTypeTraits<UTouchSpectatorWidgetInteraction> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("UserInterface"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TouchSpectatorWidgetInteraction.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TouchSpectatorWidgetInteraction.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A custom widget itneraction component allowing you to set a custom hitresult and update"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTouchSpectatorWidgetInteraction, 1852654526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTouchSpectatorWidgetInteraction(Z_Construct_UClass_UTouchSpectatorWidgetInteraction, &UTouchSpectatorWidgetInteraction::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("UTouchSpectatorWidgetInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchSpectatorWidgetInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
