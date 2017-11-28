// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRRootComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRootComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UVRRootComponent::StaticRegisterNativesUVRRootComponent()
	{
		UClass* Class = UVRRootComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetCapsuleHalfHeightVR", (Native)&UVRRootComponent::execSetCapsuleHalfHeightVR },
			{ "SetCapsuleSizeVR", (Native)&UVRRootComponent::execSetCapsuleSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR()
	{
		struct VRRootComponent_eventSetCapsuleHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_UVRRootComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCapsuleHalfHeightVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRRootComponent_eventSetCapsuleHalfHeightVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), sizeof(bool), true);
			UProperty* NewProp_HalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HalfHeight, VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|Capsule"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Used to update the capsule half height and calculate the new offset value for VR"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR()
	{
		struct VRRootComponent_eventSetCapsuleSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_UVRRootComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCapsuleSizeVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRRootComponent_eventSetCapsuleSizeVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRRootComponent_eventSetCapsuleSizeVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRRootComponent_eventSetCapsuleSizeVR_Parms), sizeof(bool), true);
			UProperty* NewProp_NewHalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewHalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewHalfHeight, VRRootComponent_eventSetCapsuleSizeVR_Parms), 0x0010000000000080);
			UProperty* NewProp_NewRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewRadius, VRRootComponent_eventSetCapsuleSizeVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|Capsule"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("This is overidden for the VR Character to re-set physics location\nChange the capsule size. This is the unscaled size, before component scale is applied.\n@param        InRadius : radius of end-cap hemispheres and center cylinder.\n@param        InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param        bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRRootComponent_NoRegister()
	{
		return UVRRootComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRRootComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCapsuleComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRRootComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHadRelativeMovement, UVRRootComponent);
				UProperty* NewProp_bHadRelativeMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHadRelativeMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHadRelativeMovement, UVRRootComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bHadRelativeMovement, UVRRootComponent), sizeof(bool), true);
				UProperty* NewProp_WalkingCollisionOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WalkingCollisionOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(WalkingCollisionOverride, UVRRootComponent), 0x0010000000000005, Z_Construct_UEnum_Engine_ECollisionChannel());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseWalkingCollisionOverride, UVRRootComponent);
				UProperty* NewProp_bUseWalkingCollisionOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseWalkingCollisionOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseWalkingCollisionOverride, UVRRootComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseWalkingCollisionOverride, UVRRootComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCenterCapsuleOnHMD, UVRRootComponent);
				UProperty* NewProp_bCenterCapsuleOnHMD = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCenterCapsuleOnHMD"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCenterCapsuleOnHMD, UVRRootComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCenterCapsuleOnHMD, UVRRootComponent), sizeof(bool), true);
				UProperty* NewProp_VRCapsuleOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRCapsuleOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(VRCapsuleOffset, UVRRootComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_TargetPrimitiveComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetPrimitiveComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetPrimitiveComponent, UVRRootComponent), 0x001000000008200c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_OptionalWaistTrackingParent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OptionalWaistTrackingParent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OptionalWaistTrackingParent, UVRRootComponent), 0x0010008000000005, Z_Construct_UScriptStruct_FBPVRWaistTracking_Info());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR(), "SetCapsuleHalfHeightVR"); // 2603933711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR(), "SetCapsuleSizeVR"); // 3951784521
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRRootComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UVRTrackedParentInterface_NoRegister(), VTABLE_OFFSET(UVRRootComponent, IVRTrackedParentInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRRootComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A capsule component that repositions its physics scene and rendering location to the camera/HMD's relative position.\nGenerally not to be used by itself unless on a base Pawn and not a character, the VRCharacter has been highly customized to correctly support it."));
				MetaData->SetValue(NewProp_bHadRelativeMovement, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bHadRelativeMovement, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_bHadRelativeMovement, TEXT("ToolTip"), TEXT("While misnamed, is true if we collided with a wall/obstacle due to the HMDs movement in this frame (not movement components)"));
				MetaData->SetValue(NewProp_WalkingCollisionOverride, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_WalkingCollisionOverride, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_bUseWalkingCollisionOverride, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bUseWalkingCollisionOverride, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_bCenterCapsuleOnHMD, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_bCenterCapsuleOnHMD, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_bCenterCapsuleOnHMD, TEXT("ToolTip"), TEXT("#TODO: See if making this multiplayer compatible is viable\nOffsets capsule to be centered on HMD - currently NOT multiplayer compatible"));
				MetaData->SetValue(NewProp_VRCapsuleOffset, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_VRCapsuleOffset, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_VRCapsuleOffset, TEXT("ToolTip"), TEXT("Used to offset the collision (IE backwards from the player slightly."));
				MetaData->SetValue(NewProp_TargetPrimitiveComponent, TEXT("Category"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(NewProp_TargetPrimitiveComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TargetPrimitiveComponent, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("Category"), TEXT("VRTrackedParentInterface"));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("ModuleRelativePath"), TEXT("Public/VRRootComponent.h"));
				MetaData->SetValue(NewProp_OptionalWaistTrackingParent, TEXT("ToolTip"), TEXT("If valid will use this as the tracked parent instead of the HMD / Parent"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRRootComponent, 2941516038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRRootComponent(Z_Construct_UClass_UVRRootComponent, &UVRRootComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRRootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
