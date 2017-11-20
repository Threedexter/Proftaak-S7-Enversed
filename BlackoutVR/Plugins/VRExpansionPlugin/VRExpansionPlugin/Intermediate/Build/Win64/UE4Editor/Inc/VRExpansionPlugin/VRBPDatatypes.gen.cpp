// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBPDatatypes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBPDatatypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
static UEnum* EPhysicsGripConstraintType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EPhysicsGripConstraintType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsGripConstraintType(EPhysicsGripConstraintType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EPhysicsGripConstraintType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsGripConstraintType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EPhysicsGripConstraintType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EPhysicsGripConstraintType::AccelerationConstraint"), 0);
			EnumNames.Emplace(TEXT("EPhysicsGripConstraintType::ForceConstraint"), 1);
			EnumNames.Emplace(TEXT("EPhysicsGripConstraintType::EPhysicsGripConstraintType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EPhysicsGripConstraintType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Type of physics constraint to use"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType_CRC() { return 3265881845U; }
static UEnum* EGripInterfaceTeleportBehavior_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripInterfaceTeleportBehavior"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripInterfaceTeleportBehavior(EGripInterfaceTeleportBehavior_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripInterfaceTeleportBehavior"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripInterfaceTeleportBehavior"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripInterfaceTeleportBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripInterfaceTeleportBehavior::TeleportAllComponents"), 0);
			EnumNames.Emplace(TEXT("EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent"), 1);
			EnumNames.Emplace(TEXT("EGripInterfaceTeleportBehavior::DropOnTeleport"), 2);
			EnumNames.Emplace(TEXT("EGripInterfaceTeleportBehavior::DontTeleport"), 3);
			EnumNames.Emplace(TEXT("EGripInterfaceTeleportBehavior::EGripInterfaceTeleportBehavior_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripInterfaceTeleportBehavior");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Lerp states"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior_CRC() { return 3839928646U; }
static UEnum* EGripTargetType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripTargetType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripTargetType(EGripTargetType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripTargetType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripTargetType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripTargetType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripTargetType::ActorGrip"), 0);
			EnumNames.Emplace(TEXT("EGripTargetType::ComponentGrip"), 1);
			EnumNames.Emplace(TEXT("EGripTargetType::EGripTargetType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripTargetType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Grip Target Type"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType_CRC() { return 4018121734U; }
static UEnum* EGripMovementReplicationSettings_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripMovementReplicationSettings"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripMovementReplicationSettings(EGripMovementReplicationSettings_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripMovementReplicationSettings"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripMovementReplicationSettings"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripMovementReplicationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::KeepOriginalMovement"), 0);
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::ForceServerSideMovement"), 1);
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::ForceClientSideMovement"), 2);
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::ClientSide_Authoritive"), 3);
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep"), 4);
			EnumNames.Emplace(TEXT("EGripMovementReplicationSettings::EGripMovementReplicationSettings_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripMovementReplicationSettings");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Grip movement replication settings\nLocalOnly_Not_Replicated is useful for instant client grips\nthat can be sent to the server and everyone locally grips it (IE: inventories that don't ever leave a player)\nObjects that need to be handled possibly by multiple players should be ran\nnon locally gripped instead so that the server can validate grips instead.\nClientSide_Authoritive will grip on the client instantly without server intervention and then send a notice to the server\nClientSide_Authoritive_NoRep will grip on the client instantly without server intervention but will not rep the grip to the server\nthat the grip was made"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings_CRC() { return 44289862U; }
static UEnum* EGripLateUpdateSettings_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLateUpdateSettings"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripLateUpdateSettings(EGripLateUpdateSettings_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripLateUpdateSettings"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripLateUpdateSettings"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripLateUpdateSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::LateUpdatesAlwaysOn"), 0);
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::LateUpdatesAlwaysOff"), 1);
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::NotWhenColliding"), 2);
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::NotWhenDoubleGripping"), 3);
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::NotWhenCollidingOrDoubleGripping"), 4);
			EnumNames.Emplace(TEXT("EGripLateUpdateSettings::EGripLateUpdateSettings_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripLateUpdateSettings");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Grip Late Update information"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings_CRC() { return 3039263241U; }
static UEnum* ESecondaryGripType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ESecondaryGripType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecondaryGripType(ESecondaryGripType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("ESecondaryGripType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecondaryGripType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESecondaryGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_None"), 0);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_Free"), 1);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_SlotOnly"), 2);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_Free_Retain"), 3);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_SlotOnly_Retain"), 4);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_FreeWithScaling_Retain"), 5);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_SlotOnlyWithScaling_Retain"), 6);
			EnumNames.Emplace(TEXT("ESecondaryGripType::SG_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESecondaryGripType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("SG_Free.ToolTip"), TEXT("No secondary grip"));
			MetaData->SetValue(ReturnEnum, TEXT("SG_Free_Retain.ToolTip"), TEXT("Only secondary grip at a slot"));
			MetaData->SetValue(ReturnEnum, TEXT("SG_SlotOnly.ToolTip"), TEXT("Free secondary grip"));
			MetaData->SetValue(ReturnEnum, TEXT("SG_SlotOnly_Retain.ToolTip"), TEXT("Retain pos on drop"));
			MetaData->SetValue(ReturnEnum, TEXT("SG_SlotOnlyWithScaling_Retain.ToolTip"), TEXT("Scaling with retain pos on drop"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Secondary Grip Type"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType_CRC() { return 2883530480U; }
static UEnum* EGripLerpState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripLerpState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripLerpState(EGripLerpState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripLerpState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripLerpState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripLerpState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripLerpState::StartLerp"), 0);
			EnumNames.Emplace(TEXT("EGripLerpState::EndLerp"), 1);
			EnumNames.Emplace(TEXT("EGripLerpState::ConstantLerp"), 2);
			EnumNames.Emplace(TEXT("EGripLerpState::NotLerping"), 3);
			EnumNames.Emplace(TEXT("EGripLerpState::EGripLerpState_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripLerpState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Lerp states"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripLerpState_CRC() { return 2901599553U; }
static UEnum* EBPHMDDeviceType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDDeviceType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPHMDDeviceType(EBPHMDDeviceType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPHMDDeviceType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPHMDDeviceType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPHMDDeviceType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_OculusRift"), 0);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_Morpheus"), 1);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_ES2GenericStereoMesh"), 2);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_SteamVR"), 3);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_GearVR"), 4);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_GoogleVR"), 5);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_Unknown"), 6);
			EnumNames.Emplace(TEXT("EBPHMDDeviceType::DT_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPHMDDeviceType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType_CRC() { return 1622973117U; }
static UEnum* EGripCollisionType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGripCollisionType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripCollisionType(EGripCollisionType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGripCollisionType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripCollisionType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripCollisionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripCollisionType::InteractiveCollisionWithPhysics"), 0);
			EnumNames.Emplace(TEXT("EGripCollisionType::InteractiveCollisionWithSweep"), 1);
			EnumNames.Emplace(TEXT("EGripCollisionType::InteractiveHybridCollisionWithPhysics"), 2);
			EnumNames.Emplace(TEXT("EGripCollisionType::InteractiveHybridCollisionWithSweep"), 3);
			EnumNames.Emplace(TEXT("EGripCollisionType::SweepWithPhysics"), 4);
			EnumNames.Emplace(TEXT("EGripCollisionType::PhysicsOnly"), 5);
			EnumNames.Emplace(TEXT("EGripCollisionType::ManipulationGrip"), 6);
			EnumNames.Emplace(TEXT("EGripCollisionType::ManipulationGripWithWristTwist"), 7);
			EnumNames.Emplace(TEXT("EGripCollisionType::CustomGrip"), 8);
			EnumNames.Emplace(TEXT("EGripCollisionType::EGripCollisionType_MAX"), 9);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripCollisionType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("InteractiveCollisionWithSweep.ToolTip"), TEXT("InteractiveCollisionWithVelocity,"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Interactive Collision With Physics = Held items can be offset by geometry, uses physics for the offset, pushes physics simulating objects with weight taken into account\nInteractive Collision With Sweep = Held items can be offset by geometry, uses sweep for the offset, pushes physics simulating objects, no weight\nSweep With Physics = Only sweeps movement, will not be offset by geomtry, still pushes physics simulating objects, no weight\nPhysics Only = Does not sweep at all (does not trigger OnHitEvents), still pushes physics simulating objects, no weight\nManipulation grip = free constraint to controller base, no rotational drives\nManipulationGripWithWristTwise = free constraint to controller base with a twist drive\nCustom grip is to be handled by the object itself, it just sends the TickGrip event every frame but doesn't move the object.\nInteractiveHybridCollisionWithPhysics = Uses Stiffness and damping settings on collision, on no collision uses stiffness values 10x stronger so it has less play."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType_CRC() { return 2268848266U; }
static UEnum* EVRVectorQuantization_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRVectorQuantization"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRVectorQuantization(EVRVectorQuantization_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRVectorQuantization"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRVectorQuantization"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRVectorQuantization"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRVectorQuantization::RoundOneDecimal"), 0);
			EnumNames.Emplace(TEXT("EVRVectorQuantization::RoundTwoDecimals"), 1);
			EnumNames.Emplace(TEXT("EVRVectorQuantization::EVRVectorQuantization_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRVectorQuantization");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("RoundOneDecimal.ToolTip"), TEXT("Each vector component will be rounded, preserving one decimal place."));
			MetaData->SetValue(ReturnEnum, TEXT("RoundTwoDecimals.ToolTip"), TEXT("Each vector component will be rounded, preserving two decimal places."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization_CRC() { return 3822325071U; }
static UEnum* EBPVRWaistTrackingMode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRWaistTrackingMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRWaistTrackingMode(EBPVRWaistTrackingMode_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRWaistTrackingMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRWaistTrackingMode"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPVRWaistTrackingMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPVRWaistTrackingMode::VRWaist_Tracked_Front"), 0);
			EnumNames.Emplace(TEXT("EBPVRWaistTrackingMode::VRWaist_Tracked_Rear"), 1);
			EnumNames.Emplace(TEXT("EBPVRWaistTrackingMode::VRWaist_Tracked_Left"), 2);
			EnumNames.Emplace(TEXT("EBPVRWaistTrackingMode::VRWaist_Tracked_Right"), 3);
			EnumNames.Emplace(TEXT("EBPVRWaistTrackingMode::VRWaist_Tracked_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPVRWaistTrackingMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Wasn't needed when final setup was realized\nTracked device waist location"));
			MetaData->SetValue(ReturnEnum, TEXT("VRWaist_Tracked_Front.ToolTip"), TEXT("Waist is tracked from the front"));
			MetaData->SetValue(ReturnEnum, TEXT("VRWaist_Tracked_Left.ToolTip"), TEXT("Waist is tracked from the left (self perspective)"));
			MetaData->SetValue(ReturnEnum, TEXT("VRWaist_Tracked_Rear.ToolTip"), TEXT("Waist is tracked from the rear"));
			MetaData->SetValue(ReturnEnum, TEXT("VRWaist_Tracked_Right.ToolTip"), TEXT("Waist is tracked from the right (self perspective)"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode_CRC() { return 345206782U; }
static UEnum* EBPVRResultSwitch_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRResultSwitch"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRResultSwitch(EBPVRResultSwitch_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRResultSwitch"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRResultSwitch"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPVRResultSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPVRResultSwitch::OnSucceeded"), 0);
			EnumNames.Emplace(TEXT("EBPVRResultSwitch::OnFailed"), 1);
			EnumNames.Emplace(TEXT("EBPVRResultSwitch::EBPVRResultSwitch_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPVRResultSwitch");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("OnFailed.ToolTip"), TEXT("On Failure"));
			MetaData->SetValue(ReturnEnum, TEXT("OnSucceeded.ToolTip"), TEXT("On Success"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This makes a lot of the blueprint functions cleaner"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch_CRC() { return 4067300667U; }
static UEnum* EVRConjoinedMovementModes_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRConjoinedMovementModes"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRConjoinedMovementModes(EVRConjoinedMovementModes_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRConjoinedMovementModes"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRConjoinedMovementModes"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRConjoinedMovementModes"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_None"), 0);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_Walking"), 1);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_NavWalking"), 2);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_Falling"), 3);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_Swimming"), 4);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_Flying"), 5);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MOVE_MAX"), 7);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Climbing"), 8);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_LowGrav"), 9);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom1"), 10);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom2"), 11);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom3"), 12);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom4"), 13);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom5"), 14);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_VRMOVE_Custom6"), 15);
			EnumNames.Emplace(TEXT("EVRConjoinedMovementModes::C_MAX"), 16);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRConjoinedMovementModes");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_Falling.DisplayName"), TEXT("Falling"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_Flying.DisplayName"), TEXT("Flying"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_MAX.ToolTip"), TEXT("C_MOVE_Custom = 0x06    UMETA(DisplayName = \"Custom\"),  Skip this, could technically get a Custom7 out of using this slot but who needs 7?"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_NavWalking.DisplayName"), TEXT("Navmesh Walking"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_None.DisplayName"), TEXT("None"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_Swimming.DisplayName"), TEXT("Swimming"));
			MetaData->SetValue(ReturnEnum, TEXT("C_MOVE_Walking.DisplayName"), TEXT("Walking"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Climbing.DisplayName"), TEXT("Climbing"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom1.DisplayName"), TEXT("Custom1"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom1.ToolTip"), TEXT("C_VRMOVE_Spider = 0x0A UMETA(DisplayName = \"Spider\"),"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom2.DisplayName"), TEXT("Custom2"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom3.DisplayName"), TEXT("Custom3"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom4.DisplayName"), TEXT("Custom4"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom5.DisplayName"), TEXT("Custom5"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_Custom6.DisplayName"), TEXT("Custom6"));
			MetaData->SetValue(ReturnEnum, TEXT("C_VRMOVE_LowGrav.DisplayName"), TEXT("LowGrav"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("We use 4 bits for this so a maximum of 16 elements"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes_CRC() { return 48061805U; }
static UEnum* EVRCustomMovementMode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRCustomMovementMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRCustomMovementMode(EVRCustomMovementMode_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRCustomMovementMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRCustomMovementMode"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRCustomMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRCustomMovementMode::VRMOVE_Climbing"), 0);
			EnumNames.Emplace(TEXT("EVRCustomMovementMode::VRMOVE_LowGrav"), 1);
			EnumNames.Emplace(TEXT("EVRCustomMovementMode::VRMOVE_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRCustomMovementMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Custom movement modes for the characters"));
			MetaData->SetValue(ReturnEnum, TEXT("VRMOVE_Climbing.DisplayName"), TEXT("Climbing"));
			MetaData->SetValue(ReturnEnum, TEXT("VRMOVE_LowGrav.DisplayName"), TEXT("LowGrav"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRCustomMovementMode_CRC() { return 2699516762U; }
static UEnum* EVRInteractibleAxis_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleAxis"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRInteractibleAxis(EVRInteractibleAxis_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRInteractibleAxis"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRInteractibleAxis"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRInteractibleAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRInteractibleAxis::Axis_X"), 0);
			EnumNames.Emplace(TEXT("EVRInteractibleAxis::Axis_Y"), 1);
			EnumNames.Emplace(TEXT("EVRInteractibleAxis::Axis_Z"), 2);
			EnumNames.Emplace(TEXT("EVRInteractibleAxis::Axis_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRInteractibleAxis");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_CRC() { return 1226957216U; }
class UScriptStruct* FBPActorPhysicsHandleInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorPhysicsHandleInformation"), sizeof(FBPActorPhysicsHandleInformation), Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPActorPhysicsHandleInformation(FBPActorPhysicsHandleInformation::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPActorPhysicsHandleInformation"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPActorPhysicsHandleInformation")),new UScriptStruct::TCppStructOps<FBPActorPhysicsHandleInformation>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorPhysicsHandleInformation;
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPActorPhysicsHandleInformation"), sizeof(FBPActorPhysicsHandleInformation), Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPActorPhysicsHandleInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPActorPhysicsHandleInformation>, EStructFlags(0x00000201));
			UProperty* NewProp_HandledObject = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HandledObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HandledObject, FBPActorPhysicsHandleInformation), 0x0010000000000014, Z_Construct_UClass_UObject_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_HandledObject, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_HandledObject, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation_CRC() { return 3316821971U; }
class UScriptStruct* FBPInterfaceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceProperties, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPInterfaceProperties"), sizeof(FBPInterfaceProperties), Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPInterfaceProperties(FBPInterfaceProperties::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPInterfaceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPInterfaceProperties")),new UScriptStruct::TCppStructOps<FBPInterfaceProperties>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInterfaceProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPInterfaceProperties"), sizeof(FBPInterfaceProperties), Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPInterfaceProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPInterfaceProperties>, EStructFlags(0x00000205));
			UProperty* NewProp_InteractionSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InteractionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InteractionSettings, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UScriptStruct_FBPInteractionSettings());
			UProperty* NewProp_HoldingController = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HoldingController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HoldingController, FBPInterfaceProperties), 0x001000008008000c, Z_Construct_UClass_UGripMotionControllerComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsHeld, FBPInterfaceProperties);
			UProperty* NewProp_bIsHeld = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsHeld"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsHeld, FBPInterfaceProperties), 0x0010000080000004, CPP_BOOL_PROPERTY_BITMASK(bIsHeld, FBPInterfaceProperties), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsInteractible, FBPInterfaceProperties);
			UProperty* NewProp_bIsInteractible = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsInteractible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsInteractible, FBPInterfaceProperties), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsInteractible, FBPInterfaceProperties), sizeof(bool), true);
			UProperty* NewProp_PrimarySlotRange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PrimarySlotRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PrimarySlotRange, FBPInterfaceProperties), 0x0010000000000005);
			UProperty* NewProp_SecondarySlotRange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondarySlotRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SecondarySlotRange, FBPInterfaceProperties), 0x0010000000000005);
			UProperty* NewProp_ConstraintBreakDistance = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ConstraintBreakDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConstraintBreakDistance, FBPInterfaceProperties), 0x0010000000000005);
			UProperty* NewProp_AdvancedPhysicsSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdvancedPhysicsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AdvancedPhysicsSettings, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings());
			UProperty* NewProp_ConstraintDamping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ConstraintDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConstraintDamping, FBPInterfaceProperties), 0x0010000000000005);
			UProperty* NewProp_ConstraintStiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ConstraintStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ConstraintStiffness, FBPInterfaceProperties), 0x0010000000000005);
			UProperty* NewProp_LateUpdateSetting = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LateUpdateSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(LateUpdateSetting, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings());
			UProperty* NewProp_LateUpdateSetting_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_LateUpdateSetting, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MovementReplicationType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MovementReplicationType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MovementReplicationType, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings());
			UProperty* NewProp_MovementReplicationType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MovementReplicationType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_SecondaryGripType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondaryGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(SecondaryGripType, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType());
			UProperty* NewProp_SecondaryGripType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SecondaryGripType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FreeDefaultGripType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FreeDefaultGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FreeDefaultGripType, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType());
			UProperty* NewProp_FreeDefaultGripType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FreeDefaultGripType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_SlotDefaultGripType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SlotDefaultGripType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(SlotDefaultGripType, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType());
			UProperty* NewProp_SlotDefaultGripType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SlotDefaultGripType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSimulateOnDrop, FBPInterfaceProperties);
			UProperty* NewProp_bSimulateOnDrop = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bSimulateOnDrop"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSimulateOnDrop, FBPInterfaceProperties), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bSimulateOnDrop, FBPInterfaceProperties), sizeof(bool), true);
			UProperty* NewProp_OnTeleportBehavior = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OnTeleportBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OnTeleportBehavior, FBPInterfaceProperties), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior());
			UProperty* NewProp_OnTeleportBehavior_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OnTeleportBehavior, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDenyGripping, FBPInterfaceProperties);
			UProperty* NewProp_bDenyGripping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDenyGripping"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDenyGripping, FBPInterfaceProperties), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDenyGripping, FBPInterfaceProperties), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("template<>\nstruct TStructOpsTypeTraits< FBPActorGripInformation > : public TStructOpsTypeTraitsBase2<FBPActorGripInformation>\n{\n       enum\n       {\n               WithNetSerializer = true\n       };\n};"));
			MetaData->SetValue(NewProp_InteractionSettings, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_InteractionSettings, TEXT("editcondition"), TEXT("bIsInteractible"));
			MetaData->SetValue(NewProp_InteractionSettings, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_InteractionSettings, TEXT("ToolTip"), TEXT("Set on grip notify, not net serializing"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_HoldingController, TEXT("ToolTip"), TEXT("Set on grip notify, not net serializing"));
			MetaData->SetValue(NewProp_bIsHeld, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_bIsHeld, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bIsInteractible, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_bIsInteractible, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_PrimarySlotRange, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_PrimarySlotRange, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondarySlotRange, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_SecondarySlotRange, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_ConstraintBreakDistance, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_ConstraintBreakDistance, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AdvancedPhysicsSettings, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_AdvancedPhysicsSettings, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_ConstraintDamping, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_ConstraintDamping, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_ConstraintStiffness, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_ConstraintStiffness, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_LateUpdateSetting, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_LateUpdateSetting, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MovementReplicationType, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_MovementReplicationType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondaryGripType, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_SecondaryGripType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondaryGripType, TEXT("ToolTip"), TEXT("UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\n       bool bCanHaveDoubleGrip;"));
			MetaData->SetValue(NewProp_FreeDefaultGripType, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_FreeDefaultGripType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SlotDefaultGripType, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_SlotDefaultGripType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SlotDefaultGripType, TEXT("ToolTip"), TEXT("UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"VRGripInterface\")\n       uint8 EnumObjectType;"));
			MetaData->SetValue(NewProp_bSimulateOnDrop, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_bSimulateOnDrop, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_OnTeleportBehavior, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_OnTeleportBehavior, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bDenyGripping, TEXT("Category"), TEXT("VRGripInterface"));
			MetaData->SetValue(NewProp_bDenyGripping, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceProperties_CRC() { return 1508861062U; }
class UScriptStruct* FBPActorGripInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPActorGripInformation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPActorGripInformation"), sizeof(FBPActorGripInformation), Get_Z_Construct_UScriptStruct_FBPActorGripInformation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPActorGripInformation(FBPActorGripInformation::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPActorGripInformation"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPActorGripInformation")),new UScriptStruct::TCppStructOps<FBPActorGripInformation>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPActorGripInformation;
	UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPActorGripInformation"), sizeof(FBPActorGripInformation), Get_Z_Construct_UScriptStruct_FBPActorGripInformation_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPActorGripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPActorGripInformation>, EStructFlags(0x00000205));
			UProperty* NewProp_AdditionTransform = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdditionTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AdditionTransform, FBPActorGripInformation), 0x0010000080000004, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_SecondaryGripInfo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondaryGripInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SecondaryGripInfo, FBPActorGripInformation), 0x0010008000000014, Z_Construct_UScriptStruct_FBPSecondaryGripInfo());
			UProperty* NewProp_AdvancedPhysicsSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AdvancedPhysicsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AdvancedPhysicsSettings, FBPActorGripInformation), 0x0010000000000000, Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings());
			UProperty* NewProp_Stiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Stiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Stiffness, FBPActorGripInformation), 0x0010000000000000);
			UProperty* NewProp_Damping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Damping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damping, FBPActorGripInformation), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOriginalGravity, FBPActorGripInformation);
			UProperty* NewProp_bOriginalGravity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOriginalGravity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOriginalGravity, FBPActorGripInformation), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(bOriginalGravity, FBPActorGripInformation), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOriginalReplicatesMovement, FBPActorGripInformation);
			UProperty* NewProp_bOriginalReplicatesMovement = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOriginalReplicatesMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOriginalReplicatesMovement, FBPActorGripInformation), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(bOriginalReplicatesMovement, FBPActorGripInformation), sizeof(bool), true);
			UProperty* NewProp_GripMovementReplicationSetting = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GripMovementReplicationSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GripMovementReplicationSetting, FBPActorGripInformation), 0x0010000000000014, Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings());
			UProperty* NewProp_GripMovementReplicationSetting_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GripMovementReplicationSetting, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsSlotGrip, FBPActorGripInformation);
			UProperty* NewProp_bIsSlotGrip = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsSlotGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsSlotGrip, FBPActorGripInformation), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(bIsSlotGrip, FBPActorGripInformation), sizeof(bool), true);
			UProperty* NewProp_RelativeTransform = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RelativeTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RelativeTransform, FBPActorGripInformation), 0x0010000000000004, Z_Construct_UScriptStruct_FTransform_NetQuantize());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bColliding, FBPActorGripInformation);
			UProperty* NewProp_bColliding = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bColliding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bColliding, FBPActorGripInformation), 0x0010000080000014, CPP_BOOL_PROPERTY_BITMASK(bColliding, FBPActorGripInformation), sizeof(bool), true);
			UProperty* NewProp_GripLateUpdateSetting = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GripLateUpdateSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GripLateUpdateSetting, FBPActorGripInformation), 0x0010000000000004, Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings());
			UProperty* NewProp_GripLateUpdateSetting_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GripLateUpdateSetting, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_GripCollisionType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GripCollisionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GripCollisionType, FBPActorGripInformation), 0x0010000000000014, Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType());
			UProperty* NewProp_GripCollisionType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GripCollisionType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_GrippedObject = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GrippedObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrippedObject, FBPActorGripInformation), 0x0010000000000014, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_GripTargetType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GripTargetType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GripTargetType, FBPActorGripInformation), 0x0010000000000014, Z_Construct_UEnum_VRExpansionPlugin_EGripTargetType());
			UProperty* NewProp_GripTargetType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GripTargetType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AdditionTransform, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_AdditionTransform, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AdditionTransform, TEXT("ToolTip"), TEXT("Optional Additive Transform for programmatic animation"));
			MetaData->SetValue(NewProp_SecondaryGripInfo, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_SecondaryGripInfo, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondaryGripInfo, TEXT("ToolTip"), TEXT("For multi grip situations"));
			MetaData->SetValue(NewProp_AdvancedPhysicsSettings, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_Stiffness, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_Damping, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bOriginalGravity, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bOriginalGravity, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bOriginalReplicatesMovement, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bOriginalReplicatesMovement, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bOriginalReplicatesMovement, TEXT("ToolTip"), TEXT("I would have loved to have both of these not be replicated (and in normal grips they wouldn't have to be)\nHowever for serialization purposes and Client_Authority grips they need to be...."));
			MetaData->SetValue(NewProp_GripMovementReplicationSetting, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_GripMovementReplicationSetting, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bIsSlotGrip, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bIsSlotGrip, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_RelativeTransform, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_RelativeTransform, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bColliding, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bColliding, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_GripLateUpdateSetting, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_GripLateUpdateSetting, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_GripCollisionType, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_GripCollisionType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_GrippedObject, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_GrippedObject, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_GripTargetType, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_GripTargetType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPActorGripInformation_CRC() { return 2250049230U; }
class UScriptStruct* FBPInteractionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPInteractionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInteractionSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPInteractionSettings"), sizeof(FBPInteractionSettings), Get_Z_Construct_UScriptStruct_FBPInteractionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPInteractionSettings(FBPInteractionSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPInteractionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInteractionSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInteractionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPInteractionSettings")),new UScriptStruct::TCppStructOps<FBPInteractionSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPInteractionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPInteractionSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPInteractionSettings"), sizeof(FBPInteractionSettings), Get_Z_Construct_UScriptStruct_FBPInteractionSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPInteractionSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPInteractionSettings>, EStructFlags(0x00000201));
			UProperty* NewProp_MaxAngularTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxAngularTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MaxAngularTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_MinAngularTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinAngularTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MinAngularTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_InitialAngularTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InitialAngularTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InitialAngularTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_MaxLinearTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxLinearTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MaxLinearTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_MinLinearTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinLinearTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MinLinearTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InitialLinearTranslation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InitialLinearTranslation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InitialLinearTranslation, FBPInteractionSettings), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreHandRotation, FBPInteractionSettings);
			UProperty* NewProp_bIgnoreHandRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreHandRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreHandRotation, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIgnoreHandRotation, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitRoll, FBPInteractionSettings);
			UProperty* NewProp_bLimitRoll = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitRoll, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitRoll, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitYaw, FBPInteractionSettings);
			UProperty* NewProp_bLimitYaw = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitYaw, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitYaw, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitPitch, FBPInteractionSettings);
			UProperty* NewProp_bLimitPitch = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitPitch, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitPitch, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitZ, FBPInteractionSettings);
			UProperty* NewProp_bLimitZ = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitZ"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitZ, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitZ, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitY, FBPInteractionSettings);
			UProperty* NewProp_bLimitY = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitY"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitY, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitY, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitX, FBPInteractionSettings);
			UProperty* NewProp_bLimitX = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitX"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitX, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitX, FBPInteractionSettings), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLimitsInLocalSpace, FBPInteractionSettings);
			UProperty* NewProp_bLimitsInLocalSpace = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bLimitsInLocalSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLimitsInLocalSpace, FBPInteractionSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLimitsInLocalSpace, FBPInteractionSettings), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MaxAngularTranslation, TEXT("Category"), TEXT("AngularSettings"));
			MetaData->SetValue(NewProp_MaxAngularTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MinAngularTranslation, TEXT("Category"), TEXT("AngularSettings"));
			MetaData->SetValue(NewProp_MinAngularTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MinAngularTranslation, TEXT("ToolTip"), TEXT("To use property, set value as -Rotation"));
			MetaData->SetValue(NewProp_InitialAngularTranslation, TEXT("Category"), TEXT("Settings|Angular"));
			MetaData->SetValue(NewProp_InitialAngularTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_InitialAngularTranslation, TEXT("ToolTip"), TEXT("FRotators already by default NetSerialize as shorts"));
			MetaData->SetValue(NewProp_MaxLinearTranslation, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_MaxLinearTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MaxLinearTranslation, TEXT("ToolTip"), TEXT("_NetQuantize100"));
			MetaData->SetValue(NewProp_MinLinearTranslation, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_MinLinearTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MinLinearTranslation, TEXT("ToolTip"), TEXT("_NetQuantize100"));
			MetaData->SetValue(NewProp_InitialLinearTranslation, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_InitialLinearTranslation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_InitialLinearTranslation, TEXT("ToolTip"), TEXT("_NetQuantize100"));
			MetaData->SetValue(NewProp_bIgnoreHandRotation, TEXT("Category"), TEXT("Settings|Angular"));
			MetaData->SetValue(NewProp_bIgnoreHandRotation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bIgnoreHandRotation, TEXT("ToolTip"), TEXT("Doesn't work totally correctly without using the ConvertToControllerRelativeTransform node in the motion controller"));
			MetaData->SetValue(NewProp_bLimitRoll, TEXT("Category"), TEXT("Settings|Angular"));
			MetaData->SetValue(NewProp_bLimitRoll, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitYaw, TEXT("Category"), TEXT("Settings|Angular"));
			MetaData->SetValue(NewProp_bLimitYaw, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitPitch, TEXT("Category"), TEXT("Settings|Angular"));
			MetaData->SetValue(NewProp_bLimitPitch, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitZ, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_bLimitZ, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitY, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_bLimitY, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitX, TEXT("Category"), TEXT("Settings|Linear"));
			MetaData->SetValue(NewProp_bLimitX, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bLimitsInLocalSpace, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_bLimitsInLocalSpace, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPInteractionSettings_CRC() { return 4248128796U; }
class UScriptStruct* FBPSecondaryGripInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSecondaryGripInfo, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPSecondaryGripInfo"), sizeof(FBPSecondaryGripInfo), Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSecondaryGripInfo(FBPSecondaryGripInfo::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPSecondaryGripInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSecondaryGripInfo")),new UScriptStruct::TCppStructOps<FBPSecondaryGripInfo>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPSecondaryGripInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSecondaryGripInfo"), sizeof(FBPSecondaryGripInfo), Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPSecondaryGripInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPSecondaryGripInfo>, EStructFlags(0x00000205));
			UProperty* NewProp_LerpToRate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LerpToRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LerpToRate, FBPSecondaryGripInfo), 0x0010000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsSlotGrip, FBPSecondaryGripInfo);
			UProperty* NewProp_bIsSlotGrip = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsSlotGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsSlotGrip, FBPSecondaryGripInfo), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(bIsSlotGrip, FBPSecondaryGripInfo), sizeof(bool), true);
			UProperty* NewProp_SecondaryRelativeLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondaryRelativeLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SecondaryRelativeLocation, FBPSecondaryGripInfo), 0x0010000000000000, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_SecondarySmoothingScaler = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondarySmoothingScaler"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SecondarySmoothingScaler, FBPSecondaryGripInfo), 0x0010000000000004);
			UProperty* NewProp_SecondaryAttachment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SecondaryAttachment"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SecondaryAttachment, FBPSecondaryGripInfo), 0x001000000008001c, Z_Construct_UClass_USceneComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasSecondaryAttachment, FBPSecondaryGripInfo);
			UProperty* NewProp_bHasSecondaryAttachment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bHasSecondaryAttachment"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasSecondaryAttachment, FBPSecondaryGripInfo), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(bHasSecondaryAttachment, FBPSecondaryGripInfo), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_LerpToRate, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_LerpToRate, TEXT("ToolTip"), TEXT("Lerp transitions\nMax value is 16 seconds with two decimal precision, this is to reduce replication overhead"));
			MetaData->SetValue(NewProp_bIsSlotGrip, TEXT("Category"), TEXT("SecondaryGripInfo"));
			MetaData->SetValue(NewProp_bIsSlotGrip, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondaryRelativeLocation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondarySmoothingScaler, TEXT("Category"), TEXT("SecondaryGripInfo"));
			MetaData->SetValue(NewProp_SecondarySmoothingScaler, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_SecondaryAttachment, TEXT("Category"), TEXT("SecondaryGripInfo"));
			MetaData->SetValue(NewProp_SecondaryAttachment, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_SecondaryAttachment, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bHasSecondaryAttachment, TEXT("Category"), TEXT("SecondaryGripInfo"));
			MetaData->SetValue(NewProp_bHasSecondaryAttachment, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bHasSecondaryAttachment, TEXT("ToolTip"), TEXT("For multi grip situations"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSecondaryGripInfo_CRC() { return 4147391941U; }
class UScriptStruct* FBPAdvGripPhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPAdvGripPhysicsSettings"), sizeof(FBPAdvGripPhysicsSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPAdvGripPhysicsSettings(FBPAdvGripPhysicsSettings::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPAdvGripPhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPAdvGripPhysicsSettings")),new UScriptStruct::TCppStructOps<FBPAdvGripPhysicsSettings>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPAdvGripPhysicsSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPAdvGripPhysicsSettings"), sizeof(FBPAdvGripPhysicsSettings), Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPAdvGripPhysicsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPAdvGripPhysicsSettings>, EStructFlags(0x00000201));
			UProperty* NewProp_AngularDamping = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AngularDamping"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AngularDamping, FBPAdvGripPhysicsSettings), 0x0010000000000005);
			UProperty* NewProp_AngularStiffness = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AngularStiffness"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AngularStiffness, FBPAdvGripPhysicsSettings), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCustomAngularValues, FBPAdvGripPhysicsSettings);
			UProperty* NewProp_bUseCustomAngularValues = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseCustomAngularValues"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCustomAngularValues, FBPAdvGripPhysicsSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseCustomAngularValues, FBPAdvGripPhysicsSettings), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTurnOffGravityDuringGrip, FBPAdvGripPhysicsSettings);
			UProperty* NewProp_bTurnOffGravityDuringGrip = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bTurnOffGravityDuringGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTurnOffGravityDuringGrip, FBPAdvGripPhysicsSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bTurnOffGravityDuringGrip, FBPAdvGripPhysicsSettings), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDoNotSetCOMToGripLocation, FBPAdvGripPhysicsSettings);
			UProperty* NewProp_bDoNotSetCOMToGripLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDoNotSetCOMToGripLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDoNotSetCOMToGripLocation, FBPAdvGripPhysicsSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDoNotSetCOMToGripLocation, FBPAdvGripPhysicsSettings), sizeof(bool), true);
			UProperty* NewProp_PhysicsConstraintType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PhysicsConstraintType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PhysicsConstraintType, FBPAdvGripPhysicsSettings), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EPhysicsGripConstraintType());
			UProperty* NewProp_PhysicsConstraintType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PhysicsConstraintType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseAdvancedPhysicsSettings, FBPAdvGripPhysicsSettings);
			UProperty* NewProp_bUseAdvancedPhysicsSettings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseAdvancedPhysicsSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseAdvancedPhysicsSettings, FBPAdvGripPhysicsSettings), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseAdvancedPhysicsSettings, FBPAdvGripPhysicsSettings), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AngularDamping, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_AngularDamping, TEXT("ClampMin"), TEXT("0.000"));
			MetaData->SetValue(NewProp_AngularDamping, TEXT("editcondition"), TEXT("bUseCustomAngularValues"));
			MetaData->SetValue(NewProp_AngularDamping, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AngularDamping, TEXT("UIMin"), TEXT("0.000"));
			MetaData->SetValue(NewProp_AngularStiffness, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_AngularStiffness, TEXT("ClampMin"), TEXT("0.000"));
			MetaData->SetValue(NewProp_AngularStiffness, TEXT("editcondition"), TEXT("bUseCustomAngularValues"));
			MetaData->SetValue(NewProp_AngularStiffness, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_AngularStiffness, TEXT("UIMin"), TEXT("0.000"));
			MetaData->SetValue(NewProp_bUseCustomAngularValues, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bUseCustomAngularValues, TEXT("editcondition"), TEXT("bUseAdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bUseCustomAngularValues, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bUseCustomAngularValues, TEXT("ToolTip"), TEXT("Use the custom angular values on this grip"));
			MetaData->SetValue(NewProp_bTurnOffGravityDuringGrip, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bTurnOffGravityDuringGrip, TEXT("editcondition"), TEXT("bUseAdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bTurnOffGravityDuringGrip, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bTurnOffGravityDuringGrip, TEXT("ToolTip"), TEXT("Turn off gravity during the grip, resolves the slight downward offset of the object with normal constraint strengths."));
			MetaData->SetValue(NewProp_bDoNotSetCOMToGripLocation, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bDoNotSetCOMToGripLocation, TEXT("editcondition"), TEXT("bUseAdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bDoNotSetCOMToGripLocation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bDoNotSetCOMToGripLocation, TEXT("ToolTip"), TEXT("Do not set the Center Of Mass to the grip location, use this if the default is buggy or you want a custom COM"));
			MetaData->SetValue(NewProp_PhysicsConstraintType, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_PhysicsConstraintType, TEXT("editcondition"), TEXT("bUseAdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_PhysicsConstraintType, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_bUseAdvancedPhysicsSettings, TEXT("Category"), TEXT("AdvancedPhysicsSettings"));
			MetaData->SetValue(NewProp_bUseAdvancedPhysicsSettings, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings_CRC() { return 3245724782U; }
class UScriptStruct* FBPVRComponentPosRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRComponentPosRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRComponentPosRep"), sizeof(FBPVRComponentPosRep), Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRComponentPosRep(FBPVRComponentPosRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRComponentPosRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRComponentPosRep")),new UScriptStruct::TCppStructOps<FBPVRComponentPosRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRComponentPosRep;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRComponentPosRep"), sizeof(FBPVRComponentPosRep), Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPVRComponentPosRep"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPVRComponentPosRep>, EStructFlags(0x00000201));
			UProperty* NewProp_QuantizationLevel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("QuantizationLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(QuantizationLevel, FBPVRComponentPosRep), 0x0010040000010001, Z_Construct_UEnum_VRExpansionPlugin_EVRVectorQuantization());
			UProperty* NewProp_QuantizationLevel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_QuantizationLevel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, FBPVRComponentPosRep), 0x0010000000002000, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, FBPVRComponentPosRep), 0x0010000000002000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_QuantizationLevel, TEXT("Category"), TEXT("Replication"));
			MetaData->SetValue(NewProp_QuantizationLevel, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_Rotation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_Position, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRComponentPosRep_CRC() { return 1604266999U; }
class UScriptStruct* FTransform_NetQuantize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform_NetQuantize, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("Transform_NetQuantize"), sizeof(FTransform_NetQuantize), Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransform_NetQuantize(FTransform_NetQuantize::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("Transform_NetQuantize"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Transform_NetQuantize")),new UScriptStruct::TCppStructOps<FTransform_NetQuantize>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFTransform_NetQuantize;
	UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Transform_NetQuantize"), sizeof(FTransform_NetQuantize), Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Transform_NetQuantize"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FTransform(), new UScriptStruct::TCppStructOps<FTransform_NetQuantize>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary|Transform"));
			MetaData->SetValue(ReturnStruct, TEXT("HasNativeBreak"), TEXT("VRExpansionPlugin.VRExpansionPluginFunctionLibrary.BreakTransform_NetQuantize"));
			MetaData->SetValue(ReturnStruct, TEXT("HasNativeMake"), TEXT("VRExpansionPlugin.VRExpansionPluginFunctionLibrary.MakeTransform_NetQuantize"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("noexport,"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransform_NetQuantize_CRC() { return 2834805813U; }
class UScriptStruct* FBPEuroLowPassFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEuroLowPassFilter, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPEuroLowPassFilter"), sizeof(FBPEuroLowPassFilter), Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPEuroLowPassFilter(FBPEuroLowPassFilter::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPEuroLowPassFilter"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPEuroLowPassFilter")),new UScriptStruct::TCppStructOps<FBPEuroLowPassFilter>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPEuroLowPassFilter;
	UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPEuroLowPassFilter"), sizeof(FBPEuroLowPassFilter), Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPEuroLowPassFilter"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPEuroLowPassFilter>, EStructFlags(0x00000201));
			UProperty* NewProp_DeltaCutoff = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeltaCutoff"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DeltaCutoff, FBPEuroLowPassFilter), 0x0010000000000005);
			UProperty* NewProp_CutoffSlope = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CutoffSlope"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CutoffSlope, FBPEuroLowPassFilter), 0x0010000000000005);
			UProperty* NewProp_MinCutoff = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinCutoff"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinCutoff, FBPEuroLowPassFilter), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("A re-implementation of the Euro Low Pass Filter that epic uses for the VR Editor, but for blueprints"));
			MetaData->SetValue(NewProp_DeltaCutoff, TEXT("Category"), TEXT("FilterSettings"));
			MetaData->SetValue(NewProp_DeltaCutoff, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_CutoffSlope, TEXT("Category"), TEXT("FilterSettings"));
			MetaData->SetValue(NewProp_CutoffSlope, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_MinCutoff, TEXT("Category"), TEXT("FilterSettings"));
			MetaData->SetValue(NewProp_MinCutoff, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPEuroLowPassFilter_CRC() { return 2285942286U; }
class UScriptStruct* FBPVRWaistTracking_Info::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRWaistTracking_Info"), sizeof(FBPVRWaistTracking_Info), Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRWaistTracking_Info(FBPVRWaistTracking_Info::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRWaistTracking_Info"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPVRWaistTracking_Info")),new UScriptStruct::TCppStructOps<FBPVRWaistTracking_Info>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRWaistTracking_Info;
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRWaistTracking_Info"), sizeof(FBPVRWaistTracking_Info), Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPVRWaistTracking_Info"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPVRWaistTracking_Info>, EStructFlags(0x00000205));
			UProperty* NewProp_TrackedDevice = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TrackedDevice"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TrackedDevice, FBPVRWaistTracking_Info), 0x001000000008000d, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_TrackingMode = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TrackingMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(TrackingMode, FBPVRWaistTracking_Info), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode());
			UProperty* NewProp_TrackingMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_TrackingMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WaistRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WaistRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaistRadius, FBPVRWaistTracking_Info), 0x0010000000000005);
			UProperty* NewProp_RestingRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RestingRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RestingRotation, FBPVRWaistTracking_Info), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_TrackedDevice, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_TrackedDevice, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_TrackedDevice, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_TrackedDevice, TEXT("ToolTip"), TEXT("Tracked parent reference"));
			MetaData->SetValue(NewProp_TrackingMode, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_TrackingMode, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_TrackingMode, TEXT("ToolTip"), TEXT("Controls forward vector"));
			MetaData->SetValue(NewProp_WaistRadius, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_WaistRadius, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_WaistRadius, TEXT("ToolTip"), TEXT("Distance to offset to get center of waist from tracked parent location"));
			MetaData->SetValue(NewProp_RestingRotation, TEXT("Category"), TEXT("Settings"));
			MetaData->SetValue(NewProp_RestingRotation, TEXT("ModuleRelativePath"), TEXT("Public/VRBPDatatypes.h"));
			MetaData->SetValue(NewProp_RestingRotation, TEXT("ToolTip"), TEXT("Initial \"Resting\" location of the tracker parent, assumed to be the calibration zero"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRWaistTracking_Info_CRC() { return 335340574U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
