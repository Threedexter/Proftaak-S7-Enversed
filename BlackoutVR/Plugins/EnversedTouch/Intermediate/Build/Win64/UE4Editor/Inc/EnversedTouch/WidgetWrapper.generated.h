// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef ENVERSEDTOUCH_WidgetWrapper_generated_h
#error "WidgetWrapper.generated.h already included, missing '#pragma once' in WidgetWrapper.h"
#endif
#define ENVERSEDTOUCH_WidgetWrapper_generated_h

#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSameWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSameWidget(Z_Param_component); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSameWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSameWidget(Z_Param_component); \
		P_NATIVE_END; \
	}


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetWrapper(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_UWidgetWrapper(); \
public: \
	DECLARE_CLASS(UWidgetWrapper, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(UWidgetWrapper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetWrapper(); \
	friend ENVERSEDTOUCH_API class UClass* Z_Construct_UClass_UWidgetWrapper(); \
public: \
	DECLARE_CLASS(UWidgetWrapper, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EnversedTouch"), NO_API) \
	DECLARE_SERIALIZER(UWidgetWrapper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetWrapper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetWrapper(UWidgetWrapper&&); \
	NO_API UWidgetWrapper(const UWidgetWrapper&); \
public:


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetWrapper(UWidgetWrapper&&); \
	NO_API UWidgetWrapper(const UWidgetWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetWrapper)


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_PRIVATE_PROPERTY_OFFSET
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_16_PROLOG
#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_RPC_WRAPPERS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_INCLASS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_PRIVATE_PROPERTY_OFFSET \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_INCLASS_NO_PURE_DECLS \
	BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BlackoutVR_Plugins_EnversedTouch_Source_EnversedTouch_Public_WidgetWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
