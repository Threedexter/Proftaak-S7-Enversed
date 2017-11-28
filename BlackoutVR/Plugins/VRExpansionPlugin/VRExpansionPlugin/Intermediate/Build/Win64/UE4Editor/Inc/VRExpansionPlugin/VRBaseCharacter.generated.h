// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UNavigationQueryFilter;
struct FRotator;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacter_generated_h
#error "VRBaseCharacter.generated.h already included, missing '#pragma once' in VRBaseCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacter_generated_h

#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_RPC_WRAPPERS \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopNavigationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopNavigationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=this->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopNavigationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopNavigationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=this->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_EVENT_PARMS \
	struct VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms \
	{ \
		TEnumAsByte<EPathFollowingResult::Type> PathingResult; \
	};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_CALLBACK_WRAPPERS
#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRBaseCharacter(); \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRBaseCharacter(); \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public:


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter)


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_12_PROLOG \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_EVENT_PARMS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_RPC_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_INCLASS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_CALLBACK_WRAPPERS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
