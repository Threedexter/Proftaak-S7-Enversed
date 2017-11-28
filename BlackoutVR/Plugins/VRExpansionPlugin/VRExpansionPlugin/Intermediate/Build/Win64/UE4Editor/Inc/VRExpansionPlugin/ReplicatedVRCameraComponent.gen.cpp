// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ReplicatedVRCameraComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVRCameraComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	static FName NAME_UReplicatedVRCameraComponent_Server_SendTransform = FName(TEXT("Server_SendTransform"));
	void UReplicatedVRCameraComponent::Server_SendTransform(FBPVRComponentPosRep NewTransform)
	{
		ReplicatedVRCameraComponent_eventServer_SendTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedVRCameraComponent_Server_SendTransform),&Parms);
	}
	void UReplicatedVRCameraComponent::StaticRegisterNativesUReplicatedVRCameraComponent()
	{
		UClass* Class = UReplicatedVRCameraComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCameraView", (Native)&UReplicatedVRCameraComponent::execGetCameraView },
			{ "OnRep_ReplicatedTransform", (Native)&UReplicatedVRCameraComponent::execOnRep_ReplicatedTransform },
			{ "Server_SendTransform", (Native)&UReplicatedVRCameraComponent::execServer_SendTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView()
	{
		struct ReplicatedVRCameraComponent_eventGetCameraView_Parms
		{
			float DeltaTime;
			FMinimalViewInfo DesiredView;
		};
		UObject* Outer = Z_Construct_UClass_UReplicatedVRCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCameraView"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420400, 65535, sizeof(ReplicatedVRCameraComponent_eventGetCameraView_Parms));
			UProperty* NewProp_DesiredView = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredView"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DesiredView, ReplicatedVRCameraComponent_eventGetCameraView_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FMinimalViewInfo());
			UProperty* NewProp_DeltaTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeltaTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DeltaTime, ReplicatedVRCameraComponent_eventGetCameraView_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Camera"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedTransform()
	{
		UObject* Outer = Z_Construct_UClass_UReplicatedVRCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_ReplicatedTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendTransform()
	{
		UObject* Outer = Z_Construct_UClass_UReplicatedVRCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Server_SendTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(ReplicatedVRCameraComponent_eventServer_SendTransform_Parms));
			UProperty* NewProp_NewTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewTransform, ReplicatedVRCameraComponent_eventServer_SendTransform_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBPVRComponentPosRep());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("I'm sending it unreliable because it is being resent pretty often"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCameraComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UReplicatedVRCameraComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView());
				OuterClass->LinkChild(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedTransform());
				OuterClass->LinkChild(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendTransform());

				UProperty* NewProp_NetUpdateRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NetUpdateRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NetUpdateRate, UReplicatedVRCameraComponent), 0x0010000000000025);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSmoothReplicatedMotion, UReplicatedVRCameraComponent);
				UProperty* NewProp_bSmoothReplicatedMotion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSmoothReplicatedMotion"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSmoothReplicatedMotion, UReplicatedVRCameraComponent), 0x0010000000000025, CPP_BOOL_PROPERTY_BITMASK(bSmoothReplicatedMotion, UReplicatedVRCameraComponent), sizeof(bool), true);
				UProperty* NewProp_ReplicatedTransform = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReplicatedTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReplicatedTransform, UReplicatedVRCameraComponent), 0x0010000100010021, Z_Construct_UScriptStruct_FBPVRComponentPosRep());
				NewProp_ReplicatedTransform->RepNotifyFunc = FName(TEXT("OnRep_ReplicatedTransform"));
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoSetLockToHmd, UReplicatedVRCameraComponent);
				UProperty* NewProp_bAutoSetLockToHmd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoSetLockToHmd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoSetLockToHmd, UReplicatedVRCameraComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAutoSetLockToHmd, UReplicatedVRCameraComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOffsetByHMD, UReplicatedVRCameraComponent);
				UProperty* NewProp_bOffsetByHMD = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOffsetByHMD"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOffsetByHMD, UReplicatedVRCameraComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOffsetByHMD, UReplicatedVRCameraComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSetPositionDuringTick, UReplicatedVRCameraComponent);
				UProperty* NewProp_bSetPositionDuringTick = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSetPositionDuringTick"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSetPositionDuringTick, UReplicatedVRCameraComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bSetPositionDuringTick, UReplicatedVRCameraComponent), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView(), "GetCameraView"); // 2585780548
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedTransform(), "OnRep_ReplicatedTransform"); // 894556632
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendTransform(), "Server_SendTransform"); // 678850810
				static TCppClassTypeInfo<TCppClassTypeTraits<UReplicatedVRCameraComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionLibrary"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Rendering LOD Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An overridden camera component that replicates its location in multiplayer"));
				MetaData->SetValue(NewProp_NetUpdateRate, TEXT("Category"), TEXT("ReplicatedCamera|Networking"));
				MetaData->SetValue(NewProp_NetUpdateRate, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_NetUpdateRate, TEXT("ToolTip"), TEXT("Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick)."));
				MetaData->SetValue(NewProp_bSmoothReplicatedMotion, TEXT("Category"), TEXT("ReplicatedCamera|Networking"));
				MetaData->SetValue(NewProp_bSmoothReplicatedMotion, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_bSmoothReplicatedMotion, TEXT("ToolTip"), TEXT("Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!"));
				MetaData->SetValue(NewProp_ReplicatedTransform, TEXT("Category"), TEXT("ReplicatedCamera|Networking"));
				MetaData->SetValue(NewProp_ReplicatedTransform, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_bAutoSetLockToHmd, TEXT("Category"), TEXT("ReplicatedCamera"));
				MetaData->SetValue(NewProp_bAutoSetLockToHmd, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_bAutoSetLockToHmd, TEXT("ToolTip"), TEXT("Sets lock to hmd automatically based on if the camera is currently locally controlled or not"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("Category"), TEXT("ReplicatedCamera"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_bOffsetByHMD, TEXT("ToolTip"), TEXT("If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)."));
				MetaData->SetValue(NewProp_bSetPositionDuringTick, TEXT("Category"), TEXT("ReplicatedCamera"));
				MetaData->SetValue(NewProp_bSetPositionDuringTick, TEXT("ModuleRelativePath"), TEXT("Public/ReplicatedVRCameraComponent.h"));
				MetaData->SetValue(NewProp_bSetPositionDuringTick, TEXT("ToolTip"), TEXT("For non view target positional updates"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicatedVRCameraComponent, 455943588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicatedVRCameraComponent(Z_Construct_UClass_UReplicatedVRCameraComponent, &UReplicatedVRCameraComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UReplicatedVRCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedVRCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
