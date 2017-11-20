// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBaseCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FName NAME_AVRBaseCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRBaseCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_NotifyOfTeleport),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnClimbingSteppedUp = FName(TEXT("OnClimbingSteppedUp"));
	void AVRBaseCharacter::OnClimbingSteppedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnClimbingSteppedUp),NULL);
	}
	static FName NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted = FName(TEXT("ReceiveNavigationMoveCompleted"));
	void AVRBaseCharacter::ReceiveNavigationMoveCompleted(EPathFollowingResult::Type PathingResult)
	{
		VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms Parms;
		Parms.PathingResult=PathingResult;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted),&Parms);
	}
	void AVRBaseCharacter::StaticRegisterNativesAVRBaseCharacter()
	{
		UClass* Class = AVRBaseCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ExtendedSimpleMoveToLocation", (Native)&AVRBaseCharacter::execExtendedSimpleMoveToLocation },
			{ "GetMoveStatus", (Native)&AVRBaseCharacter::execGetMoveStatus },
			{ "GetTeleportLocation", (Native)&AVRBaseCharacter::execGetTeleportLocation },
			{ "GetVRForwardVector", (Native)&AVRBaseCharacter::execGetVRForwardVector },
			{ "GetVRLocation", (Native)&AVRBaseCharacter::execGetVRLocation },
			{ "GetVRRightVector", (Native)&AVRBaseCharacter::execGetVRRightVector },
			{ "GetVRRotation", (Native)&AVRBaseCharacter::execGetVRRotation },
			{ "GetVRUpVector", (Native)&AVRBaseCharacter::execGetVRUpVector },
			{ "HasPartialPath", (Native)&AVRBaseCharacter::execHasPartialPath },
			{ "NotifyOfTeleport", (Native)&AVRBaseCharacter::execNotifyOfTeleport },
			{ "SetCharacterHalfHeightVR", (Native)&AVRBaseCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", (Native)&AVRBaseCharacter::execSetCharacterSizeVR },
			{ "StopNavigationMovement", (Native)&AVRBaseCharacter::execStopNavigationMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms
		{
			FVector GoalLocation;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExtendedSimpleMoveToLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20400, 65535, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowPartialPath, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bAllowPartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowPartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowPartialPath, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowPartialPath, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_FilterClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilterClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(FilterClass, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0014000000000080, Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), Z_Construct_UClass_UClass());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCanStrafe, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bCanStrafe = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCanStrafe"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCanStrafe, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bCanStrafe, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectDestinationToNavigation, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bProjectDestinationToNavigation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bProjectDestinationToNavigation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectDestinationToNavigation, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bProjectDestinationToNavigation, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsePathfinding, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bUsePathfinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUsePathfinding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsePathfinding, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUsePathfinding, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopOnOverlap, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bStopOnOverlap = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopOnOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopOnOverlap, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bStopOnOverlap, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_AcceptanceRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AcceptanceRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AcceptanceRadius, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_GoalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GoalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GoalLocation, VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("bStopOnOverlap,bCanStrafe,bAllowPartialPath"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRBaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AcceptanceRadius"), TEXT("-1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowPartialPath"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCanStrafe"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bProjectDestinationToNavigation"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopOnOverlap"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUsePathfinding"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("An extended simple move to location with additional parameters"));
			MetaData->SetValue(NewProp_GoalLocation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus()
	{
		struct VRBaseCharacter_eventGetMoveStatus_Parms
		{
			TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMoveStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(VRBaseCharacter_eventGetMoveStatus_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetMoveStatus_Parms), 0x0010000000000580, Z_Construct_UEnum_AIModule_EPathFollowingStatus());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRBaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation()
	{
		struct VRBaseCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTeleportLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820400, 65535, sizeof(VRBaseCharacter_eventGetTeleportLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetTeleportLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OriginalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OriginalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OriginalLocation, VRBaseCharacter_eventGetTeleportLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector()
	{
		struct VRBaseCharacter_eventGetVRForwardVector_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRForwardVector"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(VRBaseCharacter_eventGetVRForwardVector_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetVRForwardVector_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation()
	{
		struct VRBaseCharacter_eventGetVRLocation_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(VRBaseCharacter_eventGetVRLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetVRLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector()
	{
		struct VRBaseCharacter_eventGetVRRightVector_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRRightVector"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(VRBaseCharacter_eventGetVRRightVector_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetVRRightVector_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation()
	{
		struct VRBaseCharacter_eventGetVRRotation_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(VRBaseCharacter_eventGetVRRotation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetVRRotation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector()
	{
		struct VRBaseCharacter_eventGetVRUpVector_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRUpVector"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(VRBaseCharacter_eventGetVRUpVector_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRBaseCharacter_eventGetVRUpVector_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath()
	{
		struct VRBaseCharacter_eventHasPartialPath_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HasPartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(VRBaseCharacter_eventHasPartialPath_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRBaseCharacter_eventHasPartialPath_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRBaseCharacter_eventHasPartialPath_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRBaseCharacter_eventHasPartialPath_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRBaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport()
	{
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NotifyOfTeleport"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00024CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp()
	{
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnClimbingSteppedUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRMovement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when the client is in climbing mode and is stepped up onto a platform\nGenerally you should drop the climbing at this point and go into falling movement."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted()
	{
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveNavigationMoveCompleted"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms));
			UProperty* NewProp_PathingResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PathingResult"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PathingResult, VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms), 0x0010000000000080, Z_Construct_UEnum_AIModule_EPathFollowingResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRBaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when a navigation pathing operation has completed, auto calls stop movement for VR characters"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR()
	{
		struct VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCharacterHalfHeightVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), sizeof(bool), true);
			UProperty* NewProp_HalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HalfHeight, VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR()
	{
		struct VRBaseCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCharacterSizeVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterSizeVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRBaseCharacter_eventSetCharacterSizeVR_Parms), sizeof(bool), true);
			UProperty* NewProp_NewHalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewHalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewHalfHeight, VRBaseCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080);
			UProperty* NewProp_NewRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewRadius, VRBaseCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement()
	{
		UObject* Outer = Z_Construct_UClass_AVRBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopNavigationMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRBaseCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Instantly stops pathing"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister()
	{
		return AVRBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = AVRBaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement());

				UProperty* NewProp_DefaultNavigationFilterClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultNavigationFilterClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DefaultNavigationFilterClass, AVRBaseCharacter), 0x0014000000000004, Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_RightMotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightMotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightMotionController, AVRBaseCharacter), 0x00100000000a001d, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
				UProperty* NewProp_LeftMotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftMotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftMotionController, AVRBaseCharacter), 0x00100000000a001d, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
				UProperty* NewProp_ParentRelativeAttachment = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ParentRelativeAttachment"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ParentRelativeAttachment, AVRBaseCharacter), 0x00100000000a001d, Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister());
				UProperty* NewProp_VRReplicatedCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRReplicatedCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRReplicatedCamera, AVRBaseCharacter), 0x00100000000a001d, Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister());
				UProperty* NewProp_VRMovementReference = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRMovementReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRMovementReference, AVRBaseCharacter), 0x00100000000a201d, Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister());
				UProperty* NewProp_NetSmoother = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NetSmoother"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NetSmoother, AVRBaseCharacter), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_OffsetComponentToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OffsetComponentToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OffsetComponentToWorld, AVRBaseCharacter), 0x0010000000002014, Z_Construct_UScriptStruct_FTransform());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation(), "ExtendedSimpleMoveToLocation"); // 3354424582
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus(), "GetMoveStatus"); // 1920391817
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation(), "GetTeleportLocation"); // 1176669972
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector(), "GetVRForwardVector"); // 3162999762
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation(), "GetVRLocation"); // 2134917428
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector(), "GetVRRightVector"); // 3352009648
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation(), "GetVRRotation"); // 2616887605
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector(), "GetVRUpVector"); // 3693752307
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath(), "HasPartialPath"); // 2762849578
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport(), "NotifyOfTeleport"); // 3527319773
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp(), "OnClimbingSteppedUp"); // 783853573
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted(), "ReceiveNavigationMoveCompleted"); // 31466425
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR(), "SetCharacterHalfHeightVR"); // 2644046297
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR(), "SetCharacterSizeVR"); // 2858718088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement(), "StopNavigationMovement"); // 4135202068
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRBaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_DefaultNavigationFilterClass, TEXT("Category"), TEXT("AI"));
				MetaData->SetValue(NewProp_DefaultNavigationFilterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_RightMotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_RightMotionController, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_RightMotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightMotionController, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_LeftMotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftMotionController, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_LeftMotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftMotionController, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_ParentRelativeAttachment, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ParentRelativeAttachment, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_ParentRelativeAttachment, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ParentRelativeAttachment, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_VRReplicatedCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VRReplicatedCamera, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_VRReplicatedCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRReplicatedCamera, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_VRMovementReference, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VRMovementReference, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_VRMovementReference, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRMovementReference, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_NetSmoother, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_NetSmoother, TEXT("Category"), TEXT("VRBaseCharacter"));
				MetaData->SetValue(NewProp_NetSmoother, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_NetSmoother, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
				MetaData->SetValue(NewProp_NetSmoother, TEXT("ToolTip"), TEXT("This component is used with the normal character SkeletalMesh network smoothing system for simulated proxies\nIt will lerp the characters components back to zero on simulated proxies after a move is complete.\nThe simplest method of doing this was applying the exact same offset as the mesh gets to a base component that\ntracked objects are attached to."));
				MetaData->SetValue(NewProp_OffsetComponentToWorld, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_OffsetComponentToWorld, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRBaseCharacter, 899304842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRBaseCharacter(Z_Construct_UClass_AVRBaseCharacter, &AVRBaseCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
