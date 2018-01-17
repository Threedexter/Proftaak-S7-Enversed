// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef ENVERSEDTOUCH_TouchSpectatorWidgetInteraction_generated_h
#error "TouchSpectatorWidgetInteraction.generated.h already included, missing '#pragma once' in TouchSpectatorWidgetInteraction.h"
#endif
#define ENVERSEDTOUCH_TouchSpectatorWidgetInteraction_generated_h

#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomHitResultAndUpdate) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomHitResultAndUpdate(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomHitResultAndUpdate) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomHitResultAndUpdate(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchSpectatorWidgetInteraction(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction(); \
public: \
	DECLARE_CLASS(UTouchSpectatorWidgetInteraction, UWidgetInteractionComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchSpectatorWidgetInteraction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTouchSpectatorWidgetInteraction(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_UTouchSpectatorWidgetInteraction(); \
public: \
	DECLARE_CLASS(UTouchSpectatorWidgetInteraction, UWidgetInteractionComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(UTouchSpectatorWidgetInteraction) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchSpectatorWidgetInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchSpectatorWidgetInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchSpectatorWidgetInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchSpectatorWidgetInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchSpectatorWidgetInteraction(UTouchSpectatorWidgetInteraction&&); \
	NO_API UTouchSpectatorWidgetInteraction(const UTouchSpectatorWidgetInteraction&); \
public:


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchSpectatorWidgetInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchSpectatorWidgetInteraction(UTouchSpectatorWidgetInteraction&&); \
	NO_API UTouchSpectatorWidgetInteraction(const UTouchSpectatorWidgetInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchSpectatorWidgetInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchSpectatorWidgetInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchSpectatorWidgetInteraction)


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_13_PROLOG
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_RPC_WRAPPERS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_INCLASS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchSpectatorWidgetInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
