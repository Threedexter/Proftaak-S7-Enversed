// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FHitResult;
class UWidgetWrapper;
struct FVector;
#ifdef ENVERSEDTOUCH_TouchSpectatorCapture_generated_h
#error "TouchSpectatorCapture.generated.h already included, missing '#pragma once' in TouchSpectatorCapture.h"
#endif
#define ENVERSEDTOUCH_TouchSpectatorCapture_generated_h

#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTouchedWidgetsFromCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_GET_TARRAY_REF(UWidgetWrapper*,Z_Param_Out_widgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTouchedWidgetsFromCamera(Z_Param_touchPosition,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld,Z_Param_Out_widgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfTouchedWidgetFromCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckIfTouchedWidgetFromCamera(Z_Param_touchPosition,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfTouchedWidgetCustom) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_startLocation); \
		P_GET_STRUCT(FVector,Z_Param_endLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckIfTouchedWidgetCustom(Z_Param_startLocation,Z_Param_endLocation,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRayCastWorld) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=this->RayCastWorld(Z_Param_touchPosition,Z_Param_rayDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWorld) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScreenToWorld(Z_Param_touchPosition,Z_Param_Out_worldLocation,Z_Param_Out_worldDirection); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTouchedWidgetsFromCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_GET_TARRAY_REF(UWidgetWrapper*,Z_Param_Out_widgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTouchedWidgetsFromCamera(Z_Param_touchPosition,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld,Z_Param_Out_widgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfTouchedWidgetFromCamera) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckIfTouchedWidgetFromCamera(Z_Param_touchPosition,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfTouchedWidgetCustom) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_startLocation); \
		P_GET_STRUCT(FVector,Z_Param_endLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_touchLocationWidget); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_touchLocationWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckIfTouchedWidgetCustom(Z_Param_startLocation,Z_Param_endLocation,Z_Param_rayDistance,Z_Param_Out_touchLocationWidget,Z_Param_Out_touchLocationWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRayCastWorld) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rayDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=this->RayCastWorld(Z_Param_touchPosition,Z_Param_rayDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenToWorld) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_touchPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_worldDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScreenToWorld(Z_Param_touchPosition,Z_Param_Out_worldLocation,Z_Param_Out_worldDirection); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchSpectatorCapture(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_ATouchSpectatorCapture(); \
public: \
	DECLARE_CLASS(ATouchSpectatorCapture, ASceneCapture2D, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchSpectatorCapture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATouchSpectatorCapture(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_ATouchSpectatorCapture(); \
public: \
	DECLARE_CLASS(ATouchSpectatorCapture, ASceneCapture2D, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchSpectatorCapture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATouchSpectatorCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchSpectatorCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchSpectatorCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchSpectatorCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchSpectatorCapture(ATouchSpectatorCapture&&); \
	NO_API ATouchSpectatorCapture(const ATouchSpectatorCapture&); \
public:


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchSpectatorCapture(ATouchSpectatorCapture&&); \
	NO_API ATouchSpectatorCapture(const ATouchSpectatorCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchSpectatorCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchSpectatorCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchSpectatorCapture)


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_14_PROLOG
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_RPC_WRAPPERS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_INCLASS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
