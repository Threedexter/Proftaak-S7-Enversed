// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FBPActorGripInformation;
class UGripMotionControllerComponent;
struct FBPInteractionSettings;
struct FVector;
struct FTransform;
struct FBPAdvGripPhysicsSettings;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
class USplineComponent;
#ifdef VREXPANSIONPLUGIN_VRSliderComponent_generated_h
#error "VRSliderComponent.generated.h already included, missing '#pragma once' in VRSliderComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRSliderComponent_generated_h

#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_RPC_WRAPPERS \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& CurHoldingController, bool& bCurIsHeld); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
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
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_NewHoldingController); \
		P_GET_UBOOL(Z_Param_bNewIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_NewHoldingController,Z_Param_bNewIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_CurHoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bCurIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_CurHoldingController,Z_Param_Out_bCurIsHeld); \
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
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
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
	} \
 \
	DECLARE_FUNCTION(execSetSplineComponentToFollow) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineToFollow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSplineComponentToFollow(Z_Param_SplineToFollow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialSliderLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetInitialSliderLocation(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation(); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(UGripMotionControllerComponent*& CurHoldingController, bool& bCurIsHeld); \
	virtual bool IsInteractible_Implementation(); \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripPhysicsSettings AdvancedPhysicsSettings_Implementation(); \
	virtual float GripDamping_Implementation(); \
	virtual float GripStiffness_Implementation(); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType FreeGripType_Implementation(); \
	virtual EGripCollisionType SlotGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
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
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_NewHoldingController); \
		P_GET_UBOOL(Z_Param_bNewIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeld_Implementation(Z_Param_NewHoldingController,Z_Param_bNewIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_OBJECT_REF(UGripMotionControllerComponent,Z_Param_Out_CurHoldingController); \
		P_GET_UBOOL_REF(Z_Param_Out_bCurIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsHeld_Implementation(Z_Param_Out_CurHoldingController,Z_Param_Out_bCurIsHeld); \
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
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
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
	} \
 \
	DECLARE_FUNCTION(execSetSplineComponentToFollow) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_SplineToFollow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSplineComponentToFollow(Z_Param_SplineToFollow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialSliderLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetInitialSliderLocation(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_EVENT_PARMS \
	struct VRSliderComponent_eventAdvancedPhysicsSettings_Parms \
	{ \
		FBPAdvGripPhysicsSettings ReturnValue; \
	}; \
	struct VRSliderComponent_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRSliderComponent_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRSliderComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventFreeGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventFreeGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct VRSliderComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventIsHeld_Parms \
	{ \
		UGripMotionControllerComponent* CurHoldingController; \
		bool bCurIsHeld; \
	}; \
	struct VRSliderComponent_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventOnSecondaryGrip_Parms \
	{ \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRSliderComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* NewHoldingController; \
		bool bNewIsHeld; \
	}; \
	struct VRSliderComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventSlotGripType_Parms \
	{ \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventSlotGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRSliderComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct VRSliderComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_CALLBACK_WRAPPERS
#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRSliderComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRSliderComponent(); \
public: \
	DECLARE_CLASS(UVRSliderComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRSliderComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVRSliderComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVRSliderComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRSliderComponent(); \
public: \
	DECLARE_CLASS(UVRSliderComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRSliderComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UVRSliderComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRSliderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRSliderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRSliderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRSliderComponent(UVRSliderComponent&&); \
	NO_API UVRSliderComponent(const UVRSliderComponent&); \
public:


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRSliderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRSliderComponent(UVRSliderComponent&&); \
	NO_API UVRSliderComponent(const UVRSliderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRSliderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRSliderComponent)


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_15_PROLOG \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_EVENT_PARMS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_RPC_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_INCLASS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRSliderComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
