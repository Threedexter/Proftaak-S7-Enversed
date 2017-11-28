// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GripSteamVRTrackedDevice.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripSteamVRTrackedDevice() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UDEPRECATED_GripSteamVRTrackedDevice_NoRegister();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UDEPRECATED_GripSteamVRTrackedDevice();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex();
// End Cross Module References
	void UDEPRECATED_GripSteamVRTrackedDevice::StaticRegisterNativesUDEPRECATED_GripSteamVRTrackedDevice()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_GripSteamVRTrackedDevice_NoRegister()
	{
		return UDEPRECATED_GripSteamVRTrackedDevice::StaticClass();
	}
	UClass* Z_Construct_UClass_UDEPRECATED_GripSteamVRTrackedDevice()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGripMotionControllerComponent();
			Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
			OuterClass = UDEPRECATED_GripSteamVRTrackedDevice::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x22B00280u;


				UProperty* NewProp_TrackedDeviceIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrackedDeviceIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(TrackedDeviceIndex, UDEPRECATED_GripSteamVRTrackedDevice), 0x0010000000000005, Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex());
				UProperty* NewProp_TrackedDeviceIndex_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_TrackedDeviceIndex, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UDEPRECATED_GripSteamVRTrackedDevice> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("MotionController"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("MotionController|Types Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GripSteamVRTrackedDevice.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GripSteamVRTrackedDevice.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This class is deprecated as of 4.17, please replace it with Motion or GripMotion Controllers as it will be deleted eventually."));
				MetaData->SetValue(NewProp_TrackedDeviceIndex, TEXT("Category"), TEXT("MotionController"));
				MetaData->SetValue(NewProp_TrackedDeviceIndex, TEXT("ModuleRelativePath"), TEXT("Public/GripSteamVRTrackedDevice.h"));
				MetaData->SetValue(NewProp_TrackedDeviceIndex, TEXT("ToolTip"), TEXT("Which hand this component should automatically follow"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_GripSteamVRTrackedDevice, 3960179562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_GripSteamVRTrackedDevice(Z_Construct_UClass_UDEPRECATED_GripSteamVRTrackedDevice, &UDEPRECATED_GripSteamVRTrackedDevice::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("UDEPRECATED_GripSteamVRTrackedDevice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GripSteamVRTrackedDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
