// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ParentRelativeAttachmentComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentRelativeAttachmentComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UParentRelativeAttachmentComponent::StaticRegisterNativesUParentRelativeAttachmentComponent()
	{
	}
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UParentRelativeAttachmentComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_OptionalWaistTrackingParent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OptionalWaistTrackingParent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OptionalWaistTrackingParent, UParentRelativeAttachmentComponent), 0x0010008000000005, Z_Construct_UScriptStruct_FBPVRWaistTracking_Info());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOffsetByHMD, UParentRelativeAttachmentComponent);
				UProperty* NewProp_bOffsetByHMD = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOffsetByHMD"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOffsetByHMD, UParentRelativeAttachmentComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOffsetByHMD, UParentRelativeAttachmentComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseFeetLocation, UParentRelativeAttachmentComponent);
				UProperty* NewProp_bUseFeetLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseFeetLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseFeetLocation, UParentRelativeAttachmentComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseFeetLocation, UParentRelativeAttachmentComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLerpTransition, UParentRelativeAttachmentComponent);
				UProperty* NewProp_bLerpTransition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLerpTransition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLerpTransition, UParentRelativeAttachmentComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bLerpTransition, UParentRelativeAttachmentComponent), sizeof(bool), true);
				UProperty* NewProp_LerpSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LerpSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LerpSpeed, UParentRelativeAttachmentComponent), 0x0010000000000005);
				UProperty* NewProp_YawTolerance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("YawTolerance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(YawTolerance, UParentRelativeAttachmentComponent), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UParentRelativeAttachmentComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UVRTrackedParentInterface_NoRegister(), VTABLE_OFFSET(UParentRelativeAttachmentComponent, IVRTrackedParentInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\nThis is intended to be parented to the root component of a pawn, it will then either find and track the camera\nor use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\nhave its position replicated."));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("Category"), TEXT("VRTrackedParentInterface"));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("ToolTip"), TEXT("If valid will use this as the tracked parent instead of the HMD / Parent"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("ToolTip"), TEXT("If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)."));
				MetaData->SetValue(NewProp_bUseFeetLocation, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bUseFeetLocation, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_bUseFeetLocation, TEXT("ToolTip"), TEXT("If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position"));
				MetaData->SetValue(NewProp_bLerpTransition, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bLerpTransition, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_LerpSpeed, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_LerpSpeed, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_LerpSpeed, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_LerpSpeed, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_YawTolerance, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_YawTolerance, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_YawTolerance, TEXT("ModuleRelativePath"), TEXT("Public/ParentRelativeAttachmentComponent.h"));
				MetaData->SetValue(NewProp_YawTolerance, TEXT("UIMin"), TEXT("0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentRelativeAttachmentComponent, 846160545);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentRelativeAttachmentComponent(Z_Construct_UClass_UParentRelativeAttachmentComponent, &UParentRelativeAttachmentComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UParentRelativeAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentRelativeAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
