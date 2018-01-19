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
class AActor;
class ATouchSpectatorCapture;
#ifdef ENVERSEDTOUCH_TouchVRBaseCharacter_generated_h
#error "TouchVRBaseCharacter.generated.h already included, missing '#pragma once' in TouchVRBaseCharacter.h"
#endif
#define ENVERSEDTOUCH_TouchVRBaseCharacter_generated_h

#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_22_DELEGATE \
struct _Script_EnversedTouch_eventEndTouchWidget_Parms \
{ \
	FVector2D touchWidgetLocation; \
	FHitResult touchWorldHit; \
	TArray<UWidgetWrapper*> widgets; \
	bool hitWidget; \
}; \
static inline void FEndTouchWidget_DelegateWrapper(const FMulticastScriptDelegate& EndTouchWidget, FVector2D touchWidgetLocation, FHitResult touchWorldHit, TArray<UWidgetWrapper*> const& widgets, bool hitWidget) \
{ \
	_Script_EnversedTouch_eventEndTouchWidget_Parms Parms; \
	Parms.touchWidgetLocation=touchWidgetLocation; \
	Parms.touchWorldHit=touchWorldHit; \
	Parms.widgets=widgets; \
	Parms.hitWidget=hitWidget ? true : false; \
	EndTouchWidget.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_21_DELEGATE \
struct _Script_EnversedTouch_eventUpdateTouchWidget_Parms \
{ \
	FVector2D touchWidgetLocation; \
	FHitResult touchWorldHit; \
	TArray<UWidgetWrapper*> widgets; \
	bool hitWidget; \
}; \
static inline void FUpdateTouchWidget_DelegateWrapper(const FMulticastScriptDelegate& UpdateTouchWidget, FVector2D touchWidgetLocation, FHitResult touchWorldHit, TArray<UWidgetWrapper*> const& widgets, bool hitWidget) \
{ \
	_Script_EnversedTouch_eventUpdateTouchWidget_Parms Parms; \
	Parms.touchWidgetLocation=touchWidgetLocation; \
	Parms.touchWorldHit=touchWorldHit; \
	Parms.widgets=widgets; \
	Parms.hitWidget=hitWidget ? true : false; \
	UpdateTouchWidget.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_20_DELEGATE \
struct _Script_EnversedTouch_eventBeginTouchWidget_Parms \
{ \
	FVector2D touchWidgetLocation; \
	FHitResult touchWorldHit; \
	TArray<UWidgetWrapper*> widgets; \
	bool hitWidget; \
}; \
static inline void FBeginTouchWidget_DelegateWrapper(const FMulticastScriptDelegate& BeginTouchWidget, FVector2D touchWidgetLocation, FHitResult touchWorldHit, TArray<UWidgetWrapper*> const& widgets, bool hitWidget) \
{ \
	_Script_EnversedTouch_eventBeginTouchWidget_Parms Parms; \
	Parms.touchWidgetLocation=touchWidgetLocation; \
	Parms.touchWorldHit=touchWorldHit; \
	Parms.widgets=widgets; \
	Parms.hitWidget=hitWidget ? true : false; \
	BeginTouchWidget.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_19_DELEGATE \
struct _Script_EnversedTouch_eventEndTouchWorldPosition_Parms \
{ \
	FHitResult touchHitResult; \
	FVector worldHitPosition; \
}; \
static inline void FEndTouchWorldPosition_DelegateWrapper(const FMulticastScriptDelegate& EndTouchWorldPosition, FHitResult touchHitResult, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventEndTouchWorldPosition_Parms Parms; \
	Parms.touchHitResult=touchHitResult; \
	Parms.worldHitPosition=worldHitPosition; \
	EndTouchWorldPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_18_DELEGATE \
struct _Script_EnversedTouch_eventBeginTouchWorldPosition_Parms \
{ \
	FHitResult touchHitResult; \
	FVector worldHitPosition; \
}; \
static inline void FBeginTouchWorldPosition_DelegateWrapper(const FMulticastScriptDelegate& BeginTouchWorldPosition, FHitResult touchHitResult, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventBeginTouchWorldPosition_Parms Parms; \
	Parms.touchHitResult=touchHitResult; \
	Parms.worldHitPosition=worldHitPosition; \
	BeginTouchWorldPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_17_DELEGATE \
struct _Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms \
{ \
	FHitResult touchHitResult; \
	FVector worldHitPosition; \
}; \
static inline void FUpdateTouchWorldPosition_DelegateWrapper(const FMulticastScriptDelegate& UpdateTouchWorldPosition, FHitResult touchHitResult, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventUpdateTouchWorldPosition_Parms Parms; \
	Parms.touchHitResult=touchHitResult; \
	Parms.worldHitPosition=worldHitPosition; \
	UpdateTouchWorldPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_16_DELEGATE \
struct _Script_EnversedTouch_eventEndTouchActor_Parms \
{ \
	AActor* touchActor; \
	FVector worldHitPosition; \
}; \
static inline void FEndTouchActor_DelegateWrapper(const FMulticastScriptDelegate& EndTouchActor, AActor* touchActor, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventEndTouchActor_Parms Parms; \
	Parms.touchActor=touchActor; \
	Parms.worldHitPosition=worldHitPosition; \
	EndTouchActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_15_DELEGATE \
struct _Script_EnversedTouch_eventUpdateTouchActor_Parms \
{ \
	AActor* touchActor; \
	FVector worldHitPosition; \
}; \
static inline void FUpdateTouchActor_DelegateWrapper(const FMulticastScriptDelegate& UpdateTouchActor, AActor* touchActor, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventUpdateTouchActor_Parms Parms; \
	Parms.touchActor=touchActor; \
	Parms.worldHitPosition=worldHitPosition; \
	UpdateTouchActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_14_DELEGATE \
struct _Script_EnversedTouch_eventBeginTouchActor_Parms \
{ \
	AActor* touchActor; \
	FVector worldHitPosition; \
}; \
static inline void FBeginTouchActor_DelegateWrapper(const FMulticastScriptDelegate& BeginTouchActor, AActor* touchActor, FVector worldHitPosition) \
{ \
	_Script_EnversedTouch_eventBeginTouchActor_Parms Parms; \
	Parms.touchActor=touchActor; \
	Parms.worldHitPosition=worldHitPosition; \
	BeginTouchActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_13_DELEGATE \
struct _Script_EnversedTouch_eventEndTouchScreenPosition_Parms \
{ \
	FVector2D touchLocation; \
	bool IsTouch; \
}; \
static inline void FEndTouchScreenPosition_DelegateWrapper(const FMulticastScriptDelegate& EndTouchScreenPosition, FVector2D touchLocation, bool IsTouch) \
{ \
	_Script_EnversedTouch_eventEndTouchScreenPosition_Parms Parms; \
	Parms.touchLocation=touchLocation; \
	Parms.IsTouch=IsTouch ? true : false; \
	EndTouchScreenPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_12_DELEGATE \
struct _Script_EnversedTouch_eventBeginTouchScreenPosition_Parms \
{ \
	FVector2D touchLocation; \
	bool IsTouch; \
}; \
static inline void FBeginTouchScreenPosition_DelegateWrapper(const FMulticastScriptDelegate& BeginTouchScreenPosition, FVector2D touchLocation, bool IsTouch) \
{ \
	_Script_EnversedTouch_eventBeginTouchScreenPosition_Parms Parms; \
	Parms.touchLocation=touchLocation; \
	Parms.IsTouch=IsTouch ? true : false; \
	BeginTouchScreenPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_11_DELEGATE \
struct _Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms \
{ \
	FVector2D touchLocation; \
	bool IsTouch; \
}; \
static inline void FUpdateTouchScreenPosition_DelegateWrapper(const FMulticastScriptDelegate& UpdateTouchScreenPosition, FVector2D touchLocation, bool IsTouch) \
{ \
	_Script_EnversedTouch_eventUpdateTouchScreenPosition_Parms Parms; \
	Parms.touchLocation=touchLocation; \
	Parms.IsTouch=IsTouch ? true : false; \
	UpdateTouchScreenPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckActorBeenTouched) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckActorBeenTouched(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFingerIndex) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_fingerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFingerIndex(ETouchIndex::Type(Z_Param_fingerIndex)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTouchLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetLastTouchLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchedActor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_fingerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetTouchedActor(ETouchIndex::Type(Z_Param_fingerIndex)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectatorCam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATouchSpectatorCapture**)Z_Param__Result=this->GetSpectatorCam(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckActorBeenTouched) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CheckActorBeenTouched(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFingerIndex) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_fingerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFingerIndex(ETouchIndex::Type(Z_Param_fingerIndex)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTouchLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetLastTouchLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchedActor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_fingerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetTouchedActor(ETouchIndex::Type(Z_Param_fingerIndex)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpectatorCam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATouchSpectatorCapture**)Z_Param__Result=this->GetSpectatorCam(); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchVRBaseCharacter(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_ATouchVRBaseCharacter(); \
public: \
	DECLARE_CLASS(ATouchVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesATouchVRBaseCharacter(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_ATouchVRBaseCharacter(); \
public: \
	DECLARE_CLASS(ATouchVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(ATouchVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATouchVRBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchVRBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchVRBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchVRBaseCharacter(ATouchVRBaseCharacter&&); \
	NO_API ATouchVRBaseCharacter(const ATouchVRBaseCharacter&); \
public:


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchVRBaseCharacter(ATouchVRBaseCharacter&&); \
	NO_API ATouchVRBaseCharacter(const ATouchVRBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchVRBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchVRBaseCharacter)


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_38_PROLOG
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_RPC_WRAPPERS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_INCLASS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_TouchVRBaseCharacter_h


#define FOREACH_ENUM_ETOUCHFINGERSTATE(op) \
	op(ETouchFingerState::Begin) \
	op(ETouchFingerState::Update) \
	op(ETouchFingerState::Exit) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
