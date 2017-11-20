// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OpenVRExpansionFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenVRExpansionFunctionLibrary() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex();
	OPENVREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* EVRDeviceProperty_Matrix34_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Matrix34"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Matrix34(EVRDeviceProperty_Matrix34_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Matrix34"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Matrix34"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_Matrix34"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34"), 13);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34"), 116);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Matrix34::EVRDeviceProperty_MAX"), 117);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_Matrix34");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_CameraToHeadTransform_Matrix34.ToolTip"), TEXT("1 Prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_StatusDisplayTransform_Matrix34.ToolTip"), TEXT("No prefix = 1000 series"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_CRC() { return 3107294715U; }
static UEnum* EVRDeviceProperty_UInt64_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_UInt64"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_UInt64(EVRDeviceProperty_UInt64_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_UInt64"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_UInt64"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_UInt64"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64"), 17);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64"), 18);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64"), 19);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64"), 20);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64"), 21);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64"), 22);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64"), 34);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64"), 104);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64"), 105);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64"), 106);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64"), 127);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64"), 129);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64"), 130);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64"), 131);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64"), 132);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64"), 201);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_UInt64::EVRDeviceProperty_MAX"), 202);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_UInt64");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerProp_SupportedButtons_Uint64.ToolTip"), TEXT("2 Prefix = 3000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_CurrentUniverseId_Uint64.ToolTip"), TEXT("1 Prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_HardwareRevision_Uint64.ToolTip"), TEXT("No prefix = 1000 series"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_CRC() { return 1956870037U; }
static UEnum* EVRDeviceProperty_Int32_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Int32"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Int32(EVRDeviceProperty_Int32_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Int32"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Int32"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_Int32"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::Prop_DeviceClass_Int32"), 29);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32"), 108);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32"), 111);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32"), 115);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32"), 117);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32"), 133);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32"), 138);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32"), 139);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32"), 140);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32"), 202);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32"), 203);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32"), 204);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32"), 205);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32"), 206);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32"), 207);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Int32::EVRDeviceProperty_MAX"), 208);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_Int32");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerProp_Axis0Type_Int32.ToolTip"), TEXT("2 Prefix = 3000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerProp_ControllerRoleHint_Int32.ToolTip"), TEXT("Return value is of type EVRControllerAxisType"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerPropProp_Axis1Type_Int32.ToolTip"), TEXT("Return value is of type EVRControllerAxisType"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerPropProp_Axis2Type_Int32.ToolTip"), TEXT("Return value is of type EVRControllerAxisType"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerPropProp_Axis3Type_Int32.ToolTip"), TEXT("Return value is of type EVRControllerAxisType"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerPropProp_Axis4Type_Int32.ToolTip"), TEXT("Return value is of type EVRControllerAxisType"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_DisplayMCType_Int32.ToolTip"), TEXT("1 Prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_DeviceClass_Int32.ToolTip"), TEXT("No prefix = 1000 series"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_CRC() { return 2699715943U; }
static UEnum* EVRDeviceProperty_Float_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Float"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Float(EVRDeviceProperty_Float_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Float"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Float"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_Float"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float"), 12);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float"), 101);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float"), 102);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float"), 103);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float"), 109);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float"), 110);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float"), 114);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float"), 118);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float"), 119);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float"), 120);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float"), 122);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float"), 123);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float"), 124);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float"), 125);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float"), 126);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float"), 134);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float"), 135);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Float::EVRDeviceProperty_MAX"), 136);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_Float");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_SecondsFromVsyncToPhotons_Float.ToolTip"), TEXT("1 Prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_DeviceBatteryPercentage_Float.ToolTip"), TEXT("No Prefix = 1000 series"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_CRC() { return 2612592029U; }
static UEnum* EVRDeviceProperty_Bool_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Bool"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Bool(EVRDeviceProperty_Bool_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Bool"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Bool"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_Bool"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool"), 4);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool"), 10);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool"), 11);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool"), 14);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool"), 15);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool"), 23);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool"), 24);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool"), 25);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool"), 26);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool"), 27);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_HasCamera_Bool"), 30);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool"), 32);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool"), 33);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool"), 100);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool"), 107);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool"), 136);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool"), 137);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::HMDProp_UsesDriverDirectMode_Bool"), 142);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_Bool::EVRDeviceProperty_MAX"), 143);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_Bool");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_ReportsTimeSinceVSync_Bool.ToolTip"), TEXT("1 prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_WillDriftInYaw_Bool.ToolTip"), TEXT("No prefix = 1000 series"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_CRC() { return 2702508142U; }
static UEnum* EVRDeviceProperty_String_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_String"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_String(EVRDeviceProperty_String_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_String"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_String"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRDeviceProperty_String"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_TrackingSystemName_String"), 0);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_ModelNumber_String"), 1);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_SerialNumber_String"), 2);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_RenderModelName_String"), 3);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_ManufacturerName_String"), 5);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String"), 6);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_HardwareRevision_String"), 7);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String"), 8);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String"), 9);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String"), 16);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String"), 28);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::Prop_DriverVersion_String"), 31);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String"), 112);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String"), 113);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::HMDProp_DisplayGCImage_String"), 121);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String"), 128);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String"), 200);
			EnumNames.Emplace(TEXT("EVRDeviceProperty_String::EVRDeviceProperty_MAX"), 201);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRDeviceProperty_String");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerProp_AttachedDeviceId_String.ToolTip"), TEXT("2 prefix = 3000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("HMDProp_DisplayMCImageLeft_String.ToolTip"), TEXT("/\n 1 prefix = 2000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Prop_TrackingSystemName_String.ToolTip"), TEXT("No prefix = 1000 series"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("#TODO: Update these"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_CRC() { return 3009053031U; }
static UEnum* EBPSteamVRTrackedDeviceType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPSteamVRTrackedDeviceType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPSteamVRTrackedDeviceType(EBPSteamVRTrackedDeviceType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPSteamVRTrackedDeviceType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPSteamVRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPSteamVRTrackedDeviceType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPSteamVRTrackedDeviceType::Controller"), 0);
			EnumNames.Emplace(TEXT("EBPSteamVRTrackedDeviceType::TrackingReference"), 1);
			EnumNames.Emplace(TEXT("EBPSteamVRTrackedDeviceType::Other"), 2);
			EnumNames.Emplace(TEXT("EBPSteamVRTrackedDeviceType::Invalid"), 3);
			EnumNames.Emplace(TEXT("EBPSteamVRTrackedDeviceType::EBPSteamVRTrackedDeviceType_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPSteamVRTrackedDeviceType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Controller.ToolTip"), TEXT("Represents a Steam VR Controller"));
			MetaData->SetValue(ReturnEnum, TEXT("Invalid.ToolTip"), TEXT("DeviceId is invalid"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Other.ToolTip"), TEXT("Misc. device types, for future expansion"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("#TODO: Update these"));
			MetaData->SetValue(ReturnEnum, TEXT("TrackingReference.ToolTip"), TEXT("Represents a static tracking reference device, such as a Lighthouse or tracking camera"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_CRC() { return 2562121664U; }
static UEnum* EAsyncBlueprintResultSwitch_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EAsyncBlueprintResultSwitch"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAsyncBlueprintResultSwitch(EAsyncBlueprintResultSwitch_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EAsyncBlueprintResultSwitch"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAsyncBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EAsyncBlueprintResultSwitch"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EAsyncBlueprintResultSwitch::OnSuccess"), 0);
			EnumNames.Emplace(TEXT("EAsyncBlueprintResultSwitch::AsyncLoading"), 1);
			EnumNames.Emplace(TEXT("EAsyncBlueprintResultSwitch::OnFailure"), 2);
			EnumNames.Emplace(TEXT("EAsyncBlueprintResultSwitch::EAsyncBlueprintResultSwitch_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EAsyncBlueprintResultSwitch");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AsyncLoading.ToolTip"), TEXT("On still loading async"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("OnFailure.ToolTip"), TEXT("On Failure"));
			MetaData->SetValue(ReturnEnum, TEXT("OnSuccess.ToolTip"), TEXT("On Success"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This will make using the load model as async easier to understand"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_CRC() { return 2973059405U; }
static UEnum* EOpenVRCameraFrameType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EOpenVRCameraFrameType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenVRCameraFrameType(EOpenVRCameraFrameType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EOpenVRCameraFrameType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenVRCameraFrameType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EOpenVRCameraFrameType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EOpenVRCameraFrameType::VRFrameType_Distorted"), 0);
			EnumNames.Emplace(TEXT("EOpenVRCameraFrameType::VRFrameType_Undistorted"), 1);
			EnumNames.Emplace(TEXT("EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted"), 2);
			EnumNames.Emplace(TEXT("EOpenVRCameraFrameType::VRFrameType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EOpenVRCameraFrameType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_CRC() { return 1711544834U; }
static UEnum* EBPVRDeviceIndex_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPVRDeviceIndex"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRDeviceIndex(EBPVRDeviceIndex_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPVRDeviceIndex"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRDeviceIndex"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPVRDeviceIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::HMD"), 0);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::FirstTracking_Reference"), 1);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::SecondTracking_Reference"), 2);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::FirstController"), 3);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::SecondController"), 4);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice1"), 5);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice2"), 6);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice3"), 7);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice4"), 8);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice5"), 9);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice6"), 10);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice7"), 11);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice8"), 12);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice9"), 13);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::TrackedDevice10"), 14);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::None"), 255);
			EnumNames.Emplace(TEXT("EBPVRDeviceIndex::EBPVRDeviceIndex_MAX"), 256);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPVRDeviceIndex");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("HMD.ToolTip"), TEXT("0 TrackedDeviceClass_HMD\n       1 TrackedDeviceClass_TrackingReference\n       2 TrackedDeviceClass_TrackingReference\n       3 TrackedDeviceClass_Controller\n       4 TrackedDeviceClass_Controller\n       5 TrackedDeviceClass_GenericTracker\n       6 TrackedDeviceClass_GenericTracker\n       7 TrackedDeviceClass_GenericTracker\n\n       // Describes what kind of object is being tracked at a given ID\n       enum ETrackedDeviceClass\n{\n       TrackedDeviceClass_Invalid = 0,                         // the ID was not valid.\n       TrackedDeviceClass_HMD = 1,                                     // Head-Mounted Displays\n       TrackedDeviceClass_Controller = 2,                      // Tracked controllers\n       TrackedDeviceClass_GenericTracker = 3,          // Generic trackers, similar to controllers\n       TrackedDeviceClass_TrackingReference = 4,       // Camera and base stations that serve as tracking reference points\n};\n       // On Success"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("This makes a lot of the blueprint functions cleaner"));
			MetaData->SetValue(ReturnEnum, TEXT("TrackedDevice1.ToolTip"), TEXT("FirstController = 1,\nSecondController = 2,\nFirstTracking_Reference = 3,\nSecondTracking_Reference = 4,"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex_CRC() { return 781613002U; }
class UScriptStruct* FBPOpenVRCameraHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENVREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenVRCameraHandle(FBPOpenVRCameraHandle::StaticStruct, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("BPOpenVRCameraHandle"), false, nullptr, nullptr);
static struct FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle
{
	FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOpenVRCameraHandle")),new UScriptStruct::TCppStructOps<FBPOpenVRCameraHandle>);
	}
} ScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BPOpenVRCameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBPOpenVRCameraHandle>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC() { return 730519624U; }
	void UOpenVRExpansionFunctionLibrary::StaticRegisterNativesUOpenVRExpansionFunctionLibrary()
	{
		UClass* Class = UOpenVRExpansionFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AcquireVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execAcquireVRCamera },
			{ "ClearSkyboxOverride", (Native)&UOpenVRExpansionFunctionLibrary::execClearSkyboxOverride },
			{ "CreateCameraTexture2D", (Native)&UOpenVRExpansionFunctionLibrary::execCreateCameraTexture2D },
			{ "FadeHMDToColor", (Native)&UOpenVRExpansionFunctionLibrary::execFadeHMDToColor },
			{ "FadeVRGrid", (Native)&UOpenVRExpansionFunctionLibrary::execFadeVRGrid },
			{ "GetCurrentHMDFadeColor", (Native)&UOpenVRExpansionFunctionLibrary::execGetCurrentHMDFadeColor },
			{ "GetCurrentVRGripAlpha", (Native)&UOpenVRExpansionFunctionLibrary::execGetCurrentVRGripAlpha },
			{ "GetVRCameraFrame", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRCameraFrame },
			{ "GetVRDeviceModelAndTexture", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDeviceModelAndTexture },
			{ "GetVRDevicePropertyBool", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyBool },
			{ "GetVRDevicePropertyFloat", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyFloat },
			{ "GetVRDevicePropertyInt32", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyInt32 },
			{ "GetVRDevicePropertyMatrix34AsTransform", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyMatrix34AsTransform },
			{ "GetVRDevicePropertyString", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyString },
			{ "GetVRDevicePropertyUInt64", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyUInt64 },
			{ "HasVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execHasVRCamera },
			{ "IsOpenVRDeviceConnected", (Native)&UOpenVRExpansionFunctionLibrary::execIsOpenVRDeviceConnected },
			{ "IsValid", (Native)&UOpenVRExpansionFunctionLibrary::execIsValid },
			{ "ReleaseVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execReleaseVRCamera },
			{ "SetSkyboxOverride", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride },
			{ "SetSkyboxOverride_LatLong", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLong },
			{ "SetSkyboxOverride_LatLongStereoPair", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLongStereoPair },
			{ "SetSuspendRendering", (Native)&UOpenVRExpansionFunctionLibrary::execSetSuspendRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AcquireVRCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraHandle, OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("AcquireVRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Acquire the vr camera for access (wakes it up)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride()
	{
		struct OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearSkyboxOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Remove skybox override in steamVR"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D()
	{
		struct OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPVRResultSwitch Result;
			UTexture2D* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateCameraTexture2D"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FrameType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FrameType, OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType());
			UProperty* NewProp_FrameType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FrameType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraHandle, OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("CreateCameraTexture2D"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Create Camera Render Target"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor()
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms
		{
			float fSeconds;
			FColor Color;
			bool bBackground;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FadeHMDToColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBackground, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms);
			UProperty* NewProp_bBackground = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBackground"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBackground, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBackground, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), sizeof(bool), true);
			UProperty* NewProp_Color = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Color"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Color, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FColor());
			UProperty* NewProp_fSeconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(fSeconds, OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bBackground"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between\n0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly\nwould be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid()
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms
		{
			float fSeconds;
			bool bFadeIn;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FadeVRGrid"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFadeIn, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms);
			UProperty* NewProp_bFadeIn = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFadeIn"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFadeIn, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFadeIn, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), sizeof(bool), true);
			UProperty* NewProp_fSeconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(fSeconds, OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Fading the Grid in or out in fSeconds"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms
		{
			FColor ColorOut;
			bool bBackground;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentHMDFadeColor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBackground, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms);
			UProperty* NewProp_bBackground = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBackground"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBackground, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBackground, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), sizeof(bool), true);
			UProperty* NewProp_ColorOut = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ColorOut"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ColorOut, OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FColor());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bBackground"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get current fade color value."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms
		{
			float VRGridAlpha;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentVRGripAlpha"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms), sizeof(bool), true);
			UProperty* NewProp_VRGridAlpha = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VRGridAlpha"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRGridAlpha, OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get current alpha value of grid."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPVRResultSwitch Result;
			UTexture2D* TargetRenderTarget;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRCameraFrame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms));
			UProperty* NewProp_TargetRenderTarget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetRenderTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetRenderTarget, OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FrameType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FrameType, OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType());
			UProperty* NewProp_FrameType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FrameType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraHandle, OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRCameraFrame"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a screen cap from the HMD camera if there is one"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms
		{
			UObject* WorldContextObject;
			EBPSteamVRTrackedDeviceType DeviceType;
			TArray<UProceduralMeshComponent*> ProceduralMeshComponentsToFill;
			bool bCreateCollision;
			EAsyncBlueprintResultSwitch Result;
			EBPVRDeviceIndex OverrideDeviceID;
			UTexture2D* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDeviceModelAndTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_OverrideDeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverrideDeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OverrideDeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex());
			UProperty* NewProp_OverrideDeviceID_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OverrideDeviceID, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000180, Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCreateCollision, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms);
			UProperty* NewProp_bCreateCollision = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCreateCollision"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCreateCollision, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bCreateCollision, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), sizeof(bool), true);
			UProperty* NewProp_ProceduralMeshComponentsToFill = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ProceduralMeshComponentsToFill"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ProceduralMeshComponentsToFill, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010008000000080);
			UProperty* NewProp_ProceduralMeshComponentsToFill_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ProceduralMeshComponentsToFill, TEXT("ProceduralMeshComponentsToFill"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_UProceduralMeshComponent_NoRegister());
			UProperty* NewProp_DeviceType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(DeviceType, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType());
			UProperty* NewProp_DeviceType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DeviceType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_OverrideDeviceID"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDeviceModelAndTexture"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the model / texture of a SteamVR Device, can use to fill procedural mesh components or just get the texture of them to apply to a pre-made model."));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_ProceduralMeshComponentsToFill, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms
		{
			EVRDeviceProperty_Bool PropertyToRetrieve;
			int32 DeviceID;
			bool BoolValue;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyBool"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(BoolValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms);
			UProperty* NewProp_BoolValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoolValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(BoolValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(BoolValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), sizeof(bool), true);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyBool"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a Bool device property"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms
		{
			EVRDeviceProperty_Float PropertyToRetrieve;
			int32 DeviceID;
			float FloatValue;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_FloatValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FloatValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FloatValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), 0x0010000000000180);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyFloat"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a Float device property"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms
		{
			EVRDeviceProperty_Int32 PropertyToRetrieve;
			int32 DeviceID;
			int32 IntValue;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyInt32"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_IntValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IntValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(IntValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), 0x0010000000000180);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyInt32"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a Int32 device property"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms
		{
			EVRDeviceProperty_Matrix34 PropertyToRetrieve;
			int32 DeviceID;
			FTransform TransformValue;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyMatrix34AsTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_TransformValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TransformValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TransformValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyMatrix34AsTransform"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a Matrix34 device property as a Transform"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms
		{
			EVRDeviceProperty_String PropertyToRetrieve;
			int32 DeviceID;
			FString StringValue;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StringValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StringValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(StringValue, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), 0x0010000000000180);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyString"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a String device property"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms
		{
			EVRDeviceProperty_UInt64 PropertyToRetrieve;
			int32 DeviceID;
			FString UInt64Value;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRDevicePropertyUInt64"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_UInt64Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UInt64Value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UInt64Value, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), 0x0010000000000180);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DeviceID, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), 0x0010000000000080);
			UProperty* NewProp_PropertyToRetrieve = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PropertyToRetrieve"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(PropertyToRetrieve, OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64());
			UProperty* NewProp_PropertyToRetrieve_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_PropertyToRetrieve, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetVRDevicePropertyUInt64"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a UInt64 device property as a string (Blueprints do not support int64)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms
		{
			EOpenVRCameraFrameType FrameType;
			int32 Width;
			int32 Height;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HasVRCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), sizeof(bool), true);
			UProperty* NewProp_Height = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Height"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Height, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), 0x0010000000000180);
			UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Width, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), 0x0010000000000180);
			UProperty* NewProp_FrameType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FrameType, OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType());
			UProperty* NewProp_FrameType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FrameType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("HasVRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns if there is a VR camera and what its pixel height / width is"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected()
	{
		struct OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms
		{
			EBPVRDeviceIndex OpenVRDeviceIndex;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsOpenVRDeviceConnected"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), sizeof(bool), true);
			UProperty* NewProp_OpenVRDeviceIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OpenVRDeviceIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(OpenVRDeviceIndex, OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), 0x0010000000000080, Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex());
			UProperty* NewProp_OpenVRDeviceIndex_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_OpenVRDeviceIndex, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Closes the handles for the library"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid()
	{
		struct OpenVRExpansionFunctionLibrary_eventIsValid_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsValid"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventIsValid_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsValid_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsValid_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventIsValid_Parms), sizeof(bool), true);
			UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraHandle, OpenVRExpansionFunctionLibrary_eventIsValid_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("IsValid"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Releases the vr camera from access"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseVRCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_CameraHandle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CameraHandle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CameraHandle, OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|VRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ReleaseVRCamera"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Releases the vr camera from access - you MUST call this when done with the camera"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms
		{
			UTexture* tFront;
			UTexture2D* tBack;
			UTexture* tLeft;
			UTexture* tRight;
			UTexture* tTop;
			UTexture* tBottom;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSkyboxOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), sizeof(bool), true);
			UProperty* NewProp_tBottom = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tBottom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tBottom, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_tTop = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tTop"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tTop, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_tRight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tRight"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tRight, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_tLeft = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tLeft, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture_NoRegister());
			UProperty* NewProp_tBack = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tBack"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tBack, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_tFront = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("tFront"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(tFront, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Override the standard skybox texture in steamVR - 6 cardinal textures - need to call ClearSkyboxOverride when finished"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms
		{
			UTexture2D* LatLongSkybox;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSkyboxOverride_LatLong"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), sizeof(bool), true);
			UProperty* NewProp_LatLongSkybox = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LatLongSkybox"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LatLongSkybox, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Override the standard skybox texture in steamVR - LatLong format - need to call ClearSkyboxOverride when finished"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms
		{
			UTexture2D* LatLongSkyboxL;
			UTexture2D* LatLongSkyboxR;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSkyboxOverride_LatLongStereoPair"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), sizeof(bool), true);
			UProperty* NewProp_LatLongSkyboxR = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LatLongSkyboxR"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LatLongSkyboxR, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_LatLongSkyboxL = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LatLongSkyboxL"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LatLongSkyboxL, OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), 0x0010000000000080, Z_Construct_UClass_UTexture2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Override the standard skybox texture in steamVR - LatLong stereo pair - need to call ClearSkyboxOverride when finished"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms
		{
			bool bSuspendRendering;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSuspendRendering"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuspendRendering, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms);
			UProperty* NewProp_bSuspendRendering = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuspendRendering"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuspendRendering, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bSuspendRendering, OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR|Compositor"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets whether the compositor is allows to render or not (reverts to base compositor / grid when active)\nUseful to place players out of the app during frame drops/hitches/loading and into the vr skybox."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister()
	{
		return UOpenVRExpansionFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
			OuterClass = UOpenVRExpansionFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair());
				OuterClass->LinkChild(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera(), "AcquireVRCamera"); // 1637352488
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride(), "ClearSkyboxOverride"); // 3690931719
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D(), "CreateCameraTexture2D"); // 582921084
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor(), "FadeHMDToColor"); // 2656380087
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid(), "FadeVRGrid"); // 1627534359
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor(), "GetCurrentHMDFadeColor"); // 3522506920
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha(), "GetCurrentVRGripAlpha"); // 2320363133
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame(), "GetVRCameraFrame"); // 2828507321
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture(), "GetVRDeviceModelAndTexture"); // 1220630901
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool(), "GetVRDevicePropertyBool"); // 1329673242
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat(), "GetVRDevicePropertyFloat"); // 1661585299
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32(), "GetVRDevicePropertyInt32"); // 4150901339
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform(), "GetVRDevicePropertyMatrix34AsTransform"); // 2255876854
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString(), "GetVRDevicePropertyString"); // 1171296172
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64(), "GetVRDevicePropertyUInt64"); // 996114489
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera(), "HasVRCamera"); // 4239022203
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected(), "IsOpenVRDeviceConnected"); // 1190916174
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid(), "IsValid"); // 329962307
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera(), "ReleaseVRCamera"); // 112419870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride(), "SetSkyboxOverride"); // 3837227319
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong(), "SetSkyboxOverride_LatLong"); // 3386319852
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair(), "SetSkyboxOverride_LatLongStereoPair"); // 2496638307
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering(), "SetSuspendRendering"); // 1245467951
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenVRExpansionFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenVRExpansionFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/OpenVRExpansionFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("// Not implementing currently\n\n// Properties that are unique to TrackedDeviceClass_HMD\nProp_DisplayMCImageData_Binary                         = 2041,"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenVRExpansionFunctionLibrary, 1851049327);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenVRExpansionFunctionLibrary(Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, &UOpenVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("UOpenVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
