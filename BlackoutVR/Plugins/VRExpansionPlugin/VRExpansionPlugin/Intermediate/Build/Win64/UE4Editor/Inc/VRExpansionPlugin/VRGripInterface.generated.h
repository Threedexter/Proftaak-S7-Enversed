// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPInteractionSettings;
class UGripMotionControllerComponent;
class USceneComponent;
struct FBPActorGripInformation;
struct FVector;
struct FTransform;
struct FBPAdvGripPhysicsSettings;
enum class EGripMovementReplicationSettings : uint8;
enum class EGripLateUpdateSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_VRGripInterface_generated_h
#error "VRGripInterface.generated.h already included, missing '#pragma once' in VRGripInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRGripInterface_generated_h

#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_RPC_WRAPPERS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation()=0; \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, bool bIsHeld)=0; \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)=0; \
	virtual bool IsInteractible_Implementation()=0; \
	virtual void OnEndSecondaryUsed_Implementation()=0; \
	virtual void OnSecondaryUsed_Implementation()=0; \
	virtual void OnEndUsed_Implementation()=0; \
	virtual void OnUsed_Implementation()=0; \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)=0; \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)=0; \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)=0; \
	virtual float GripBreakDistance_Implementation()=0; \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation()=0; \
	virtual float GripDamping_Implementation()=0; \
	virtual float GripStiffness_Implementation()=0; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation()=0; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation()=0; \
	virtual ESecondaryGripType SecondaryGripType_Implementation()=0; \
	virtual EGripCollisionType FreeGripType_Implementation()=0; \
	virtual EGripCollisionType SlotGripType_Implementation()=0; \
	virtual bool SimulateOnDrop_Implementation()=0; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation()=0; \
	virtual bool DenyGripping_Implementation()=0; \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController); \
		P_GET_UBOOL(Z_Param_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_HoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_HoldingController,Z_Param_Out_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGripRelease_Implementation(Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGrip_Implementation(Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedPhysicsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripPhysicsSettings*)Z_Param__Result=this->AdvancedPhysicsSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=this->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation()=0; \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, bool bIsHeld)=0; \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)=0; \
	virtual bool IsInteractible_Implementation()=0; \
	virtual void OnEndSecondaryUsed_Implementation()=0; \
	virtual void OnSecondaryUsed_Implementation()=0; \
	virtual void OnEndUsed_Implementation()=0; \
	virtual void OnUsed_Implementation()=0; \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)=0; \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)=0; \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)=0; \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)=0; \
	virtual float GripBreakDistance_Implementation()=0; \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation()=0; \
	virtual float GripDamping_Implementation()=0; \
	virtual float GripStiffness_Implementation()=0; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation()=0; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation()=0; \
	virtual ESecondaryGripType SecondaryGripType_Implementation()=0; \
	virtual EGripCollisionType FreeGripType_Implementation()=0; \
	virtual EGripCollisionType SlotGripType_Implementation()=0; \
	virtual bool SimulateOnDrop_Implementation()=0; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation()=0; \
	virtual bool DenyGripping_Implementation()=0; \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController); \
		P_GET_UBOOL(Z_Param_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_HoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_HoldingController,Z_Param_Out_bIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGripRelease_Implementation(Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSecondaryGrip_Implementation(Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedPhysicsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripPhysicsSettings*)Z_Param__Result=this->AdvancedPhysicsSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=this->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_EVENT_PARMS \
	struct VRGripInterface_eventAdvancedPhysicsSettings_Parms \
	{ \
		FBPAdvGripPhysicsSettings ReturnValue; \
	}; \
	struct VRGripInterface_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRGripInterface_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRGripInterface_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventFreeGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventFreeGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct VRGripInterface_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventIsHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		bool bIsHeld; \
	}; \
	struct VRGripInterface_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnSecondaryGrip_Parms \
	{ \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnSecondaryGripRelease_Parms \
	{ \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		bool bIsHeld; \
	}; \
	struct VRGripInterface_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventSlotGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSlotGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_CALLBACK_WRAPPERS
#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public:


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
private: \
	static void StaticRegisterNativesUVRGripInterface(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGripInterface(); \
public: \
	DECLARE_CLASS(UVRGripInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	static FBPAdvGripPhysicsSettings Execute_AdvancedPhysicsSettings(UObject* O); \
	static void Execute_ClosestPrimarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static void Execute_ClosestSecondarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static bool Execute_DenyGripping(UObject* O); \
	static EGripCollisionType Execute_FreeGripType(UObject* O); \
	static FBPInteractionSettings Execute_GetInteractionSettings(UObject* O); \
	static float Execute_GripBreakDistance(UObject* O); \
	static float Execute_GripDamping(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static float Execute_GripStiffness(UObject* O); \
	static void Execute_IsHeld(UObject* O, UGripMotionControllerComponent*& HoldingController, bool& bIsHeld); \
	static bool Execute_IsInteractible(UObject* O); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnEndSecondaryUsed(UObject* O); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryUsed(UObject* O); \
	static void Execute_OnUsed(UObject* O); \
	static ESecondaryGripType Execute_SecondaryGripType(UObject* O); \
	static void Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, bool bIsHeld); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripCollisionType Execute_SlotGripType(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	static FBPAdvGripPhysicsSettings Execute_AdvancedPhysicsSettings(UObject* O); \
	static void Execute_ClosestPrimarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static void Execute_ClosestSecondarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static bool Execute_DenyGripping(UObject* O); \
	static EGripCollisionType Execute_FreeGripType(UObject* O); \
	static FBPInteractionSettings Execute_GetInteractionSettings(UObject* O); \
	static float Execute_GripBreakDistance(UObject* O); \
	static float Execute_GripDamping(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static float Execute_GripStiffness(UObject* O); \
	static void Execute_IsHeld(UObject* O, UGripMotionControllerComponent*& HoldingController, bool& bIsHeld); \
	static bool Execute_IsInteractible(UObject* O); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnEndSecondaryUsed(UObject* O); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryUsed(UObject* O); \
	static void Execute_OnUsed(UObject* O); \
	static ESecondaryGripType Execute_SecondaryGripType(UObject* O); \
	static void Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, bool bIsHeld); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripCollisionType Execute_SlotGripType(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_13_PROLOG \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_EVENT_PARMS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_RPC_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
