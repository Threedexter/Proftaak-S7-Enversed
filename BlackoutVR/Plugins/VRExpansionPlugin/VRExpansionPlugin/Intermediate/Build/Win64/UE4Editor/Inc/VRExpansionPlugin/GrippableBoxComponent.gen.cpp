// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GrippableBoxComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableBoxComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_AdvancedPhysicsSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableBoxComponent();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_ClosestPrimarySlotInRange();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_ClosestSecondarySlotInRange();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_DenyGripping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_FreeGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GetInteractionSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripBreakDistance();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripDamping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripLateUpdateSetting();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripMovementReplicationType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripStiffness();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_IsHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_IsInteractible();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnChildGrip();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnChildGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnEndSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnEndUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SetHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SimulateOnDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SlotGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_TeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UGrippableBoxComponent_TickGrip();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	static FName NAME_UGrippableBoxComponent_AdvancedPhysicsSettings = FName(TEXT("AdvancedPhysicsSettings"));
	FBPAdvGripPhysicsSettings UGrippableBoxComponent::AdvancedPhysicsSettings()
	{
		GrippableBoxComponent_eventAdvancedPhysicsSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_AdvancedPhysicsSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_ClosestPrimarySlotInRange = FName(TEXT("ClosestPrimarySlotInRange"));
	void UGrippableBoxComponent::ClosestPrimarySlotInRange(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_ClosestPrimarySlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
	}
	static FName NAME_UGrippableBoxComponent_ClosestSecondarySlotInRange = FName(TEXT("ClosestSecondarySlotInRange"));
	void UGrippableBoxComponent::ClosestSecondarySlotInRange(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_ClosestSecondarySlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
	}
	static FName NAME_UGrippableBoxComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UGrippableBoxComponent::DenyGripping()
	{
		GrippableBoxComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_FreeGripType = FName(TEXT("FreeGripType"));
	EGripCollisionType UGrippableBoxComponent::FreeGripType()
	{
		GrippableBoxComponent_eventFreeGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_FreeGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GetInteractionSettings = FName(TEXT("GetInteractionSettings"));
	FBPInteractionSettings UGrippableBoxComponent::GetInteractionSettings()
	{
		GrippableBoxComponent_eventGetInteractionSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GetInteractionSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UGrippableBoxComponent::GripBreakDistance()
	{
		GrippableBoxComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GripDamping = FName(TEXT("GripDamping"));
	float UGrippableBoxComponent::GripDamping()
	{
		GrippableBoxComponent_eventGripDamping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GripDamping),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UGrippableBoxComponent::GripLateUpdateSetting()
	{
		GrippableBoxComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UGrippableBoxComponent::GripMovementReplicationType()
	{
		GrippableBoxComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_GripStiffness = FName(TEXT("GripStiffness"));
	float UGrippableBoxComponent::GripStiffness()
	{
		GrippableBoxComponent_eventGripStiffness_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_GripStiffness),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_IsHeld = FName(TEXT("IsHeld"));
	void UGrippableBoxComponent::IsHeld(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)
	{
		GrippableBoxComponent_eventIsHeld_Parms Parms;
		Parms.HoldingController=HoldingController;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_IsHeld),&Parms);
		HoldingController=Parms.HoldingController;
		bIsHeld=Parms.bIsHeld;
	}
	static FName NAME_UGrippableBoxComponent_IsInteractible = FName(TEXT("IsInteractible"));
	bool UGrippableBoxComponent::IsInteractible()
	{
		GrippableBoxComponent_eventIsInteractible_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_IsInteractible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UGrippableBoxComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UGrippableBoxComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UGrippableBoxComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableBoxComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UGrippableBoxComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnEndUsed),NULL);
	}
	static FName NAME_UGrippableBoxComponent_OnGrip = FName(TEXT("OnGrip"));
	void UGrippableBoxComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnGrip),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UGrippableBoxComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UGrippableBoxComponent::OnSecondaryGrip(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UGrippableBoxComponent::OnSecondaryGripRelease(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableBoxComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UGrippableBoxComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableBoxComponent_OnUsed = FName(TEXT("OnUsed"));
	void UGrippableBoxComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_OnUsed),NULL);
	}
	static FName NAME_UGrippableBoxComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UGrippableBoxComponent::SecondaryGripType()
	{
		GrippableBoxComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_SetHeld = FName(TEXT("SetHeld"));
	void UGrippableBoxComponent::SetHeld(UGripMotionControllerComponent* HoldingController, bool bIsHeld)
	{
		GrippableBoxComponent_eventSetHeld_Parms Parms;
		Parms.HoldingController=HoldingController;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_SetHeld),&Parms);
	}
	static FName NAME_UGrippableBoxComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UGrippableBoxComponent::SimulateOnDrop()
	{
		GrippableBoxComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_SlotGripType = FName(TEXT("SlotGripType"));
	EGripCollisionType UGrippableBoxComponent::SlotGripType()
	{
		GrippableBoxComponent_eventSlotGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_SlotGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UGrippableBoxComponent::TeleportBehavior()
	{
		GrippableBoxComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableBoxComponent_TickGrip = FName(TEXT("TickGrip"));
	void UGrippableBoxComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		GrippableBoxComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableBoxComponent_TickGrip),&Parms);
	}
	void UGrippableBoxComponent::StaticRegisterNativesUGrippableBoxComponent()
	{
		UClass* Class = UGrippableBoxComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AdvancedPhysicsSettings", (Native)&UGrippableBoxComponent::execAdvancedPhysicsSettings },
			{ "ClosestPrimarySlotInRange", (Native)&UGrippableBoxComponent::execClosestPrimarySlotInRange },
			{ "ClosestSecondarySlotInRange", (Native)&UGrippableBoxComponent::execClosestSecondarySlotInRange },
			{ "DenyGripping", (Native)&UGrippableBoxComponent::execDenyGripping },
			{ "FreeGripType", (Native)&UGrippableBoxComponent::execFreeGripType },
			{ "GetInteractionSettings", (Native)&UGrippableBoxComponent::execGetInteractionSettings },
			{ "GripBreakDistance", (Native)&UGrippableBoxComponent::execGripBreakDistance },
			{ "GripDamping", (Native)&UGrippableBoxComponent::execGripDamping },
			{ "GripLateUpdateSetting", (Native)&UGrippableBoxComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", (Native)&UGrippableBoxComponent::execGripMovementReplicationType },
			{ "GripStiffness", (Native)&UGrippableBoxComponent::execGripStiffness },
			{ "IsHeld", (Native)&UGrippableBoxComponent::execIsHeld },
			{ "IsInteractible", (Native)&UGrippableBoxComponent::execIsInteractible },
			{ "OnChildGrip", (Native)&UGrippableBoxComponent::execOnChildGrip },
			{ "OnChildGripRelease", (Native)&UGrippableBoxComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", (Native)&UGrippableBoxComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", (Native)&UGrippableBoxComponent::execOnEndUsed },
			{ "OnGrip", (Native)&UGrippableBoxComponent::execOnGrip },
			{ "OnGripRelease", (Native)&UGrippableBoxComponent::execOnGripRelease },
			{ "OnSecondaryGrip", (Native)&UGrippableBoxComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", (Native)&UGrippableBoxComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", (Native)&UGrippableBoxComponent::execOnSecondaryUsed },
			{ "OnUsed", (Native)&UGrippableBoxComponent::execOnUsed },
			{ "SecondaryGripType", (Native)&UGrippableBoxComponent::execSecondaryGripType },
			{ "SetHeld", (Native)&UGrippableBoxComponent::execSetHeld },
			{ "SimulateOnDrop", (Native)&UGrippableBoxComponent::execSimulateOnDrop },
			{ "SlotGripType", (Native)&UGrippableBoxComponent::execSlotGripType },
			{ "TeleportBehavior", (Native)&UGrippableBoxComponent::execTeleportBehavior },
			{ "TickGrip", (Native)&UGrippableBoxComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_AdvancedPhysicsSettings()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AdvancedPhysicsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventAdvancedPhysicsSettings_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventAdvancedPhysicsSettings_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the advanced physics settings for this grip"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_ClosestPrimarySlotInRange()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestPrimarySlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0CC20C00, 65535, sizeof(GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms));
			UProperty* NewProp_OverridePrefix = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverridePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(OverridePrefix, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_CallingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CallingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CallingController, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			UProperty* NewProp_SlotWorldTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotWorldTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlotWorldTransform, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FTransform());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHadSlotInRange, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms);
			UProperty* NewProp_bHadSlotInRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHadSlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHadSlotInRange, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bHadSlotInRange, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorldLocation, GrippableBoxComponent_eventClosestPrimarySlotInRange_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_OverridePrefix"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get closest primary slot in range"));
			MetaData->SetValue(NewProp_CallingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_ClosestSecondarySlotInRange()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestSecondarySlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0CC20C00, 65535, sizeof(GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms));
			UProperty* NewProp_OverridePrefix = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverridePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(OverridePrefix, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), 0x0010000000000080);
			UProperty* NewProp_CallingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CallingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CallingController, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			UProperty* NewProp_SlotWorldTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotWorldTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlotWorldTransform, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FTransform());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHadSlotInRange, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms);
			UProperty* NewProp_bHadSlotInRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHadSlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHadSlotInRange, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bHadSlotInRange, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), sizeof(bool), true);
			UProperty* NewProp_WorldLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorldLocation, GrippableBoxComponent_eventClosestSecondarySlotInRange_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_OverridePrefix"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get closest secondary slot in range"));
			MetaData->SetValue(NewProp_CallingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_DenyGripping()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DenyGripping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventDenyGripping_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GrippableBoxComponent_eventDenyGripping_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GrippableBoxComponent_eventDenyGripping_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GrippableBoxComponent_eventDenyGripping_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set up as deny instead of allow so that default allows for gripping"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_FreeGripType()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FreeGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventFreeGripType_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventFreeGripType_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Grip type to use when not gripping a slot"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GetInteractionSettings()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInteractionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGetInteractionSettings_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGetInteractionSettings_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FBPInteractionSettings());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get interactable settings"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripBreakDistance()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GripBreakDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGripBreakDistance_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGripBreakDistance_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("What distance to break a grip at (only relevent with physics enabled grips"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripDamping()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GripDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGripDamping_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGripDamping_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("What grip damping to use if using a physics constraint"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripLateUpdateSetting()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GripLateUpdateSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGripLateUpdateSetting_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGripLateUpdateSetting_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Define the late update setting"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripMovementReplicationType()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GripMovementReplicationType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGripMovementReplicationType_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGripMovementReplicationType_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Define which movement repliation setting to use"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_GripStiffness()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GripStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventGripStiffness_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventGripStiffness_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("What grip stiffness to use if using a physics constraint"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_IsHeld()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsHeld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C420C00, 65535, sizeof(GrippableBoxComponent_eventIsHeld_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsHeld, GrippableBoxComponent_eventIsHeld_Parms);
			UProperty* NewProp_bIsHeld = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsHeld"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsHeld, GrippableBoxComponent_eventIsHeld_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bIsHeld, GrippableBoxComponent_eventIsHeld_Parms), sizeof(bool), true);
			UProperty* NewProp_HoldingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HoldingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HoldingController, GrippableBoxComponent_eventIsHeld_Parms), 0x0010000000080180, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns if the object is held and if so, which pawn is holding it"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_IsInteractible()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsInteractible"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventIsInteractible_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GrippableBoxComponent_eventIsInteractible_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GrippableBoxComponent_eventIsInteractible_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GrippableBoxComponent_eventIsInteractible_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check if the object is an interactable"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnChildGrip()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnChildGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnChildGrip_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnChildGrip_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_GrippingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GrippingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrippingController, GrippableBoxComponent_eventOnChildGrip_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when child component is gripped"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_GrippingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnChildGripRelease()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnChildGripRelease"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnChildGripRelease_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnChildGripRelease_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_ReleasingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReleasingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReleasingController, GrippableBoxComponent_eventOnChildGripRelease_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when child component is released"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ReleasingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnEndSecondaryUsed()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEndSecondaryUsed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call to stop using an object"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnEndUsed()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEndUsed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call to stop using an object"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnGrip()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnGrip_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnGrip_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_GrippingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GrippingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrippingController, GrippableBoxComponent_eventOnGrip_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when gripped"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_GrippingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnGripRelease()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnGripRelease"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnGripRelease_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnGripRelease_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_ReleasingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReleasingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReleasingController, GrippableBoxComponent_eventOnGripRelease_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when grip is released"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ReleasingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGrip()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSecondaryGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnSecondaryGrip_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnSecondaryGrip_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_SecondaryGripComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SecondaryGripComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SecondaryGripComponent, GrippableBoxComponent_eventOnSecondaryGrip_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when secondary gripped"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SecondaryGripComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGripRelease()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSecondaryGripRelease"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventOnSecondaryGripRelease_Parms));
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventOnSecondaryGripRelease_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_ReleasingSecondaryGripComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReleasingSecondaryGripComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReleasingSecondaryGripComponent, GrippableBoxComponent_eventOnSecondaryGripRelease_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered on the interfaced object when secondary grip is released"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_ReleasingSecondaryGripComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryUsed()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSecondaryUsed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call to use an object"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_OnUsed()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnUsed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Call to use an object"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SecondaryGripType()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SecondaryGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventSecondaryGripType_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventSecondaryGripType_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Secondary grip type"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SetHeld()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetHeld"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventSetHeld_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsHeld, GrippableBoxComponent_eventSetHeld_Parms);
			UProperty* NewProp_bIsHeld = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsHeld"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsHeld, GrippableBoxComponent_eventSetHeld_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsHeld, GrippableBoxComponent_eventSetHeld_Parms), sizeof(bool), true);
			UProperty* NewProp_HoldingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HoldingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HoldingController, GrippableBoxComponent_eventSetHeld_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets is held, used by the plugin"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SimulateOnDrop()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SimulateOnDrop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventSimulateOnDrop_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GrippableBoxComponent_eventSimulateOnDrop_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GrippableBoxComponent_eventSimulateOnDrop_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GrippableBoxComponent_eventSimulateOnDrop_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Should this object simulate on drop"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_SlotGripType()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SlotGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventSlotGripType_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventSlotGripType_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Grip type to use when gripping a slot"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_TeleportBehavior()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TeleportBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(GrippableBoxComponent_eventTeleportBehavior_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, GrippableBoxComponent_eventTeleportBehavior_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("How an interfaced object behaves when teleporting"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrippableBoxComponent_TickGrip()
	{
		UObject* Outer = Z_Construct_UClass_UGrippableBoxComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TickGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420C00, 65535, sizeof(GrippableBoxComponent_eventTickGrip_Parms));
			UProperty* NewProp_DeltaTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeltaTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DeltaTime, GrippableBoxComponent_eventTickGrip_Parms), 0x0010000000000080);
			UProperty* NewProp_GripInformation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GripInformation, GrippableBoxComponent_eventTickGrip_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_GrippingController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GrippingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrippingController, GrippableBoxComponent_eventTickGrip_Parms), 0x0010000000080080, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic"));
			MetaData->SetValue(NewProp_GripInformation, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_GrippingController, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrippableBoxComponent_NoRegister()
	{
		return UGrippableBoxComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGrippableBoxComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBoxComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UGrippableBoxComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_AdvancedPhysicsSettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_ClosestPrimarySlotInRange());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_ClosestSecondarySlotInRange());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_DenyGripping());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_FreeGripType());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GetInteractionSettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GripBreakDistance());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GripDamping());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GripLateUpdateSetting());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GripMovementReplicationType());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_GripStiffness());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_IsHeld());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_IsInteractible());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnChildGrip());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnChildGripRelease());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnEndSecondaryUsed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnEndUsed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnGrip());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnGripRelease());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGrip());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGripRelease());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryUsed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_OnUsed());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_SecondaryGripType());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_SetHeld());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_SimulateOnDrop());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_SlotGripType());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_TeleportBehavior());
				OuterClass->LinkChild(Z_Construct_UFunction_UGrippableBoxComponent_TickGrip());

				UProperty* NewProp_VRGripInterfaceSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRGripInterfaceSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VRGripInterfaceSettings, UGrippableBoxComponent), 0x0010008000000025, Z_Construct_UScriptStruct_FBPInterfaceProperties());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReplicateMovement, UGrippableBoxComponent);
				UProperty* NewProp_bReplicateMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bReplicateMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReplicateMovement, UGrippableBoxComponent), 0x0010000000000025, CPP_BOOL_PROPERTY_BITMASK(bReplicateMovement, UGrippableBoxComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRepGripSettingsAndGameplayTags, UGrippableBoxComponent);
				UProperty* NewProp_bRepGripSettingsAndGameplayTags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRepGripSettingsAndGameplayTags"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRepGripSettingsAndGameplayTags, UGrippableBoxComponent), 0x0010000000000025, CPP_BOOL_PROPERTY_BITMASK(bRepGripSettingsAndGameplayTags, UGrippableBoxComponent), sizeof(bool), true);
				UProperty* NewProp_GameplayTags = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameplayTags"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GameplayTags, UGrippableBoxComponent), 0x0010000000000025, Z_Construct_UScriptStruct_FGameplayTagContainer());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_AdvancedPhysicsSettings(), "AdvancedPhysicsSettings"); // 4011750555
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_ClosestPrimarySlotInRange(), "ClosestPrimarySlotInRange"); // 3920806215
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_ClosestSecondarySlotInRange(), "ClosestSecondarySlotInRange"); // 2358343439
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_DenyGripping(), "DenyGripping"); // 4171047685
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_FreeGripType(), "FreeGripType"); // 2499514790
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GetInteractionSettings(), "GetInteractionSettings"); // 4294491651
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GripBreakDistance(), "GripBreakDistance"); // 536529440
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GripDamping(), "GripDamping"); // 150793475
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GripLateUpdateSetting(), "GripLateUpdateSetting"); // 3215694463
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GripMovementReplicationType(), "GripMovementReplicationType"); // 2443003590
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_GripStiffness(), "GripStiffness"); // 1193431033
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_IsHeld(), "IsHeld"); // 1957078995
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_IsInteractible(), "IsInteractible"); // 985300627
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnChildGrip(), "OnChildGrip"); // 1937854781
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnChildGripRelease(), "OnChildGripRelease"); // 3821656511
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnEndSecondaryUsed(), "OnEndSecondaryUsed"); // 2435859333
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnEndUsed(), "OnEndUsed"); // 2886683626
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnGrip(), "OnGrip"); // 1925606615
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnGripRelease(), "OnGripRelease"); // 2947717843
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGrip(), "OnSecondaryGrip"); // 2653818344
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryGripRelease(), "OnSecondaryGripRelease"); // 2158827790
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnSecondaryUsed(), "OnSecondaryUsed"); // 3494894053
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_OnUsed(), "OnUsed"); // 106043604
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_SecondaryGripType(), "SecondaryGripType"); // 3152810941
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_SetHeld(), "SetHeld"); // 2380789046
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_SimulateOnDrop(), "SimulateOnDrop"); // 2311520943
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_SlotGripType(), "SlotGripType"); // 2679810470
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_TeleportBehavior(), "TeleportBehavior"); // 3491845865
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGrippableBoxComponent_TickGrip(), "TickGrip"); // 2897729613
				static TCppClassTypeInfo<TCppClassTypeTraits<UGrippableBoxComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UVRGripInterface_NoRegister(), VTABLE_OFFSET(UGrippableBoxComponent, IVRGripInterface), false ));
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister(), VTABLE_OFFSET(UGrippableBoxComponent, IGameplayTagAssetInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionPlugin"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GrippableBoxComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
				MetaData->SetValue(NewProp_VRGripInterfaceSettings, TEXT("Category"), TEXT("VRGripInterface"));
				MetaData->SetValue(NewProp_VRGripInterfaceSettings, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
				MetaData->SetValue(NewProp_bReplicateMovement, TEXT("Category"), TEXT("VRGripInterface|Replication"));
				MetaData->SetValue(NewProp_bReplicateMovement, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
				MetaData->SetValue(NewProp_bReplicateMovement, TEXT("ToolTip"), TEXT("Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components"));
				MetaData->SetValue(NewProp_bRepGripSettingsAndGameplayTags, TEXT("Category"), TEXT("VRGripInterface|Replication"));
				MetaData->SetValue(NewProp_bRepGripSettingsAndGameplayTags, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
				MetaData->SetValue(NewProp_bRepGripSettingsAndGameplayTags, TEXT("ToolTip"), TEXT("Requires bReplicates to be true for the component"));
				MetaData->SetValue(NewProp_GameplayTags, TEXT("Category"), TEXT("GameplayTags"));
				MetaData->SetValue(NewProp_GameplayTags, TEXT("ModuleRelativePath"), TEXT("Public/GrippableBoxComponent.h"));
				MetaData->SetValue(NewProp_GameplayTags, TEXT("ToolTip"), TEXT("Tags that are set on this object"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrippableBoxComponent, 1713809930);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrippableBoxComponent(Z_Construct_UClass_UGrippableBoxComponent, &UGrippableBoxComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGrippableBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
