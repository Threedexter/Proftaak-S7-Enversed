// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Interactibles/VRButtonComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRButtonComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature()
	{
		struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms
		{
			bool ButtonState;
		};
		UObject* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VRButtonStateChangedSignature__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ButtonState, _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms);
			UProperty* NewProp_ButtonState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ButtonState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ButtonState, _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(ButtonState, _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Delegate for notification when the button state changes."));
#endif
		}
		return ReturnFunction;
	}
static UEnum* EVRButtonType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRButtonType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRButtonType(EVRButtonType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRButtonType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRButtonType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRButtonType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRButtonType::Btn_Press"), 0);
			EnumNames.Emplace(TEXT("EVRButtonType::Btn_Toggle_Return"), 1);
			EnumNames.Emplace(TEXT("EVRButtonType::Btn_Toggle_Stay"), 2);
			EnumNames.Emplace(TEXT("EVRButtonType::Btn_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRButtonType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("// VR Button Types"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC() { return 1689025347U; }
	void UVRButtonComponent::StaticRegisterNativesUVRButtonComponent()
	{
		UClass* Class = UVRButtonComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsButtonInUse", (Native)&UVRButtonComponent::execIsButtonInUse },
			{ "OnOverlapBegin", (Native)&UVRButtonComponent::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&UVRButtonComponent::execOnOverlapEnd },
			{ "ResetInitialButtonLocation", (Native)&UVRButtonComponent::execResetInitialButtonLocation },
			{ "SetButtonState", (Native)&UVRButtonComponent::execSetButtonState },
			{ "SetButtonToRestingPosition", (Native)&UVRButtonComponent::execSetButtonToRestingPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse()
	{
		struct VRButtonComponent_eventIsButtonInUse_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsButtonInUse"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(VRButtonComponent_eventIsButtonInUse_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRButtonComponent_eventIsButtonInUse_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRButtonComponent_eventIsButtonInUse_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRButtonComponent_eventIsButtonInUse_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRButtonComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin()
	{
		struct VRButtonComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420401, 65535, sizeof(VRButtonComponent_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, VRButtonComponent_eventOnOverlapBegin_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, VRButtonComponent_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, VRButtonComponent_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd()
	{
		struct VRButtonComponent_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(VRButtonComponent_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, VRButtonComponent_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, VRButtonComponent_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, VRButtonComponent_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, VRButtonComponent_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation()
	{
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetInitialButtonLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRButtonComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Should be called after the button is moved post begin play"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState()
	{
		struct VRButtonComponent_eventSetButtonState_Parms
		{
			bool bNewButtonState;
			bool bCallButtonChangedEvent;
			bool bSnapIntoPosition;
		};
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetButtonState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRButtonComponent_eventSetButtonState_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSnapIntoPosition, VRButtonComponent_eventSetButtonState_Parms);
			UProperty* NewProp_bSnapIntoPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSnapIntoPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSnapIntoPosition, VRButtonComponent_eventSetButtonState_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bSnapIntoPosition, VRButtonComponent_eventSetButtonState_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCallButtonChangedEvent, VRButtonComponent_eventSetButtonState_Parms);
			UProperty* NewProp_bCallButtonChangedEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCallButtonChangedEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCallButtonChangedEvent, VRButtonComponent_eventSetButtonState_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCallButtonChangedEvent, VRButtonComponent_eventSetButtonState_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNewButtonState, VRButtonComponent_eventSetButtonState_Parms);
			UProperty* NewProp_bNewButtonState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bNewButtonState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNewButtonState, VRButtonComponent_eventSetButtonState_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bNewButtonState, VRButtonComponent_eventSetButtonState_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRButtonComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCallButtonChangedEvent"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSnapIntoPosition"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the button state outside of interaction, bSnapIntoPosition is for Toggle_Stay mode, it will lerp into the new position if this is false"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition()
	{
		struct VRButtonComponent_eventSetButtonToRestingPosition_Parms
		{
			bool bLerpToPosition;
		};
		UObject* Outer = Z_Construct_UClass_UVRButtonComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetButtonToRestingPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLerpToPosition, VRButtonComponent_eventSetButtonToRestingPosition_Parms);
			UProperty* NewProp_bLerpToPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bLerpToPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLerpToPosition, VRButtonComponent_eventSetButtonToRestingPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bLerpToPosition, VRButtonComponent_eventSetButtonToRestingPosition_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRButtonComponent"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bLerpToPosition"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resets the button to its resting location (mostly for Toggle_Stay)"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister()
	{
		return UVRButtonComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRButtonComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRButtonComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_SetButtonState());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition());

				UProperty* NewProp_MinTimeBetweenEngaging = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinTimeBetweenEngaging"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinTimeBetweenEngaging, UVRButtonComponent), 0x0010000000000005);
				UProperty* NewProp_ButtonEngageDepth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ButtonEngageDepth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ButtonEngageDepth, UVRButtonComponent), 0x0010000000000005);
				UProperty* NewProp_ButtonAxis = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ButtonAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ButtonAxis, UVRButtonComponent), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis());
				UProperty* NewProp_ButtonAxis_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ButtonAxis, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ButtonType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ButtonType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ButtonType, UVRButtonComponent), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType());
				UProperty* NewProp_ButtonType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ButtonType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_DepressDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DepressDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DepressDistance, UVRButtonComponent), 0x0010000000000005);
				UProperty* NewProp_DepressSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DepressSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DepressSpeed, UVRButtonComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bButtonState, UVRButtonComponent);
				UProperty* NewProp_bButtonState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bButtonState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bButtonState, UVRButtonComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bButtonState, UVRButtonComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsEnabled, UVRButtonComponent);
				UProperty* NewProp_bIsEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsEnabled, UVRButtonComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsEnabled, UVRButtonComponent), sizeof(bool), true);
				UProperty* NewProp_InteractingComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InteractingComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UWeakObjectProperty(CPP_PROPERTY_BASE(InteractingComponent, UVRButtonComponent), 0x001400000008001c, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_OnButtonStateChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnButtonStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnButtonStateChanged, UVRButtonComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse(), "IsButtonInUse"); // 1848225357
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin(), "OnOverlapBegin"); // 1662337091
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd(), "OnOverlapEnd"); // 3835890512
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation(), "ResetInitialButtonLocation"); // 779528773
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_SetButtonState(), "SetButtonState"); // 2628201828
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition(), "SetButtonToRestingPosition"); // 3616082501
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRButtonComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionPlugin"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_MinTimeBetweenEngaging, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_MinTimeBetweenEngaging, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_MinTimeBetweenEngaging, TEXT("ToolTip"), TEXT("Minimum time before the button can be switched again"));
				MetaData->SetValue(NewProp_ButtonEngageDepth, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_ButtonEngageDepth, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_ButtonEngageDepth, TEXT("ToolTip"), TEXT("Depth at which the button engages (switches)"));
				MetaData->SetValue(NewProp_ButtonAxis, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_ButtonAxis, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_ButtonAxis, TEXT("ToolTip"), TEXT("Negative on this axis is the depress direction"));
				MetaData->SetValue(NewProp_ButtonType, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_ButtonType, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_ButtonType, TEXT("ToolTip"), TEXT("Type of button this is"));
				MetaData->SetValue(NewProp_DepressDistance, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_DepressDistance, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_DepressDistance, TEXT("ToolTip"), TEXT("Distance that the button depresses"));
				MetaData->SetValue(NewProp_DepressSpeed, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_DepressSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_DepressSpeed, TEXT("ToolTip"), TEXT("Speed that the button de-presses when no longer interacted with"));
				MetaData->SetValue(NewProp_bButtonState, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_bButtonState, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_bButtonState, TEXT("ToolTip"), TEXT("Current state of the button, writable to set initial value"));
				MetaData->SetValue(NewProp_bIsEnabled, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_bIsEnabled, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_bIsEnabled, TEXT("ToolTip"), TEXT("Whether the button is enabled or not (can be interacted with)"));
				MetaData->SetValue(NewProp_InteractingComponent, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_InteractingComponent, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_OnButtonStateChanged, TEXT("Category"), TEXT("VRButtonComponent"));
				MetaData->SetValue(NewProp_OnButtonStateChanged, TEXT("ModuleRelativePath"), TEXT("Public/Interactibles/VRButtonComponent.h"));
				MetaData->SetValue(NewProp_OnButtonStateChanged, TEXT("ToolTip"), TEXT("Call to use an object"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRButtonComponent, 2102155966);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRButtonComponent(Z_Construct_UClass_UVRButtonComponent, &UVRButtonComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRButtonComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRButtonComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
