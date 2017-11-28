// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRExpansionFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRExpansionFunctionLibrary() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* EBPHMDWornState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDWornState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPHMDWornState(EBPHMDWornState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPHMDWornState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPHMDWornState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPHMDWornState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPHMDWornState::Unknown"), 0);
			EnumNames.Emplace(TEXT("EBPHMDWornState::Worn"), 1);
			EnumNames.Emplace(TEXT("EBPHMDWornState::NotWorn"), 2);
			EnumNames.Emplace(TEXT("EBPHMDWornState::EBPHMDWornState_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPHMDWornState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotWorn.DisplayName"), TEXT("Not Worn"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Redefining this for blueprint as it wasn't declared as BlueprintType\nStores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown."));
			MetaData->SetValue(ReturnEnum, TEXT("Unknown.DisplayName"), TEXT("Unknown"));
			MetaData->SetValue(ReturnEnum, TEXT("Worn.DisplayName"), TEXT("Worn"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_CRC() { return 1021387089U; }
	void UVRExpansionFunctionLibrary::StaticRegisterNativesUVRExpansionFunctionLibrary()
	{
		UClass* Class = UVRExpansionFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddSceneComponentByClass", (Native)&UVRExpansionFunctionLibrary::execAddSceneComponentByClass },
			{ "BreakTransform_NetQuantize", (Native)&UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize },
			{ "Conv_TransformToTransformNetQuantize", (Native)&UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize },
			{ "EqualEqual_FBPActorGripInformation", (Native)&UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation },
			{ "GetGripSlotInRangeByTypeName", (Native)&UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName },
			{ "GetGripSlotInRangeByTypeName_Component", (Native)&UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component },
			{ "GetHMDPureYaw", (Native)&UVRExpansionFunctionLibrary::execGetHMDPureYaw },
			{ "GetHMDType", (Native)&UVRExpansionFunctionLibrary::execGetHMDType },
			{ "GetIsActorMovable", (Native)&UVRExpansionFunctionLibrary::execGetIsActorMovable },
			{ "GetIsHMDConnected", (Native)&UVRExpansionFunctionLibrary::execGetIsHMDConnected },
			{ "GetIsHMDWorn", (Native)&UVRExpansionFunctionLibrary::execGetIsHMDWorn },
			{ "IsInVREditorPreview", (Native)&UVRExpansionFunctionLibrary::execIsInVREditorPreview },
			{ "IsInVREditorPreviewOrGame", (Native)&UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame },
			{ "LowPassFilter_Exponential", (Native)&UVRExpansionFunctionLibrary::execLowPassFilter_Exponential },
			{ "LowPassFilter_RollingAverage", (Native)&UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage },
			{ "MakeTransform_NetQuantize", (Native)&UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize },
			{ "NonAuthorityMinimumAreaRectangle", (Native)&UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle },
			{ "ResetEuroSmoothingFilter", (Native)&UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter },
			{ "RotateAroundPivot", (Native)&UVRExpansionFunctionLibrary::execRotateAroundPivot },
			{ "RunEuroSmoothingFilter", (Native)&UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter },
			{ "SmoothUpdateLaserSpline", (Native)&UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass()
	{
		struct VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms
		{
			UObject* Outer;
			TSubclassOf<USceneComponent>  Class;
			FTransform ComponentRelativeTransform;
			USceneComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddSceneComponentByClass"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), 0x0010000000080588, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_ComponentRelativeTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ComponentRelativeTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ComponentRelativeTransform, VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			UProperty* NewProp_Class = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Class"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Class, VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), 0x0014000000000080, Z_Construct_UClass_USceneComponent_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_Outer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Outer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Outer, VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Scene Component By Class"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_ComponentRelativeTransform, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms
		{
			FTransform_NetQuantize InTransform;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BreakTransform_NetQuantize"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms));
			UProperty* NewProp_Scale = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Scale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Scale, VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InTransform, VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform_NetQuantize());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionLibrary|TransformNetQuantize"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("NativeBreakFunc"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Breaks apart a transform net quantize into location, rotation and scale"));
			MetaData->SetValue(NewProp_InTransform, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms
		{
			FTransform InTransform;
			FTransform_NetQuantize ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Conv_TransformToTransformNetQuantize"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FTransform_NetQuantize());
			UProperty* NewProp_InTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InTransform, VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FTransform());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintAutocast"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionLibrary|TransformNetQuantize"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ToTransform_NetQuantize (Transform)"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts a FTransform into a FTransform_NetQuantize"));
			MetaData->SetValue(NewProp_InTransform, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation()
	{
		struct VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms
		{
			FBPActorGripInformation A;
			FBPActorGripInformation B;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EqualEqual_FBPActorGripInformation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), sizeof(bool), true);
			UProperty* NewProp_B = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("B"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(B, VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(A, VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FBPActorGripInformation());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("=="));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Equal VR Grip"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("== equal"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the values are equal (A == B)"));
			MetaData->SetValue(NewProp_B, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_A, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName()
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms
		{
			FName SlotType;
			AActor* Actor;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGripSlotInRangeByTypeName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms));
			UProperty* NewProp_SlotWorldTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotWorldTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlotWorldTransform, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FTransform());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms);
			UProperty* NewProp_bHadSlotInRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHadSlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), sizeof(bool), true);
			UProperty* NewProp_MaxRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorldLocation, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_SlotType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotType"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SlotType, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetGripSlotInRangeByTypeName"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets if an actors root component contains a grip slot within range"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component()
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms
		{
			FName SlotType;
			UPrimitiveComponent* Component;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGripSlotInRangeByTypeName_Component"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms));
			UProperty* NewProp_SlotWorldTransform = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotWorldTransform"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlotWorldTransform, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FTransform());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms);
			UProperty* NewProp_bHadSlotInRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHadSlotInRange"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bHadSlotInRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), sizeof(bool), true);
			UProperty* NewProp_MaxRange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRange, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorldLocation, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Component = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Component"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Component, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_SlotType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SlotType"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SlotType, VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetGripSlotInRangeByTypeName_Component"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets if an actors root component contains a grip slot within range"));
			MetaData->SetValue(NewProp_Component, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw()
	{
		struct VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms
		{
			FRotator HMDRotation;
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHMDPureYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_HMDRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HMDRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HMDRotation, VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetHMDPureYaw"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the unwound yaw of the HMD"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType()
	{
		struct VRExpansionFunctionLibrary_eventGetHMDType_Parms
		{
			EBPHMDDeviceType ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHMDType"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetHMDType_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventGetHMDType_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetHMDType"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether an HMD device is connected"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable()
	{
		struct VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms
		{
			AActor* ActorToCheck;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsActorMovable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), sizeof(bool), true);
			UProperty* NewProp_ActorToCheck = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorToCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorToCheck, VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetIsActorMovable"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether an HMD device is connected"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected()
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsHMDConnected"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetIsHMDConnected"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether an HMD device is connected"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn()
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms
		{
			EBPHMDWornState ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsHMDWorn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms), 0x0010000000000580, Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetIsHMDWorn"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether an HMD device is connected"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview()
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsInVREditorPreview"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("IsInVREditorPreview"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether the game is running in VRPreview"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame()
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsInVREditorPreviewOrGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("IsInVREditorPreviewOrGame"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets whether the game is running in VRPreview or is a non editor build game (returns true for either)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential()
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			float sampleFactor;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LowPassFilter_Exponential"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms));
			UProperty* NewProp_sampleFactor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("sampleFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(sampleFactor, VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), 0x0010000000000080);
			UProperty* NewProp_newAverage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newAverage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newAverage, VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_newSample = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newSample"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newSample, VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_lastAverage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lastAverage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lastAverage, VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_sampleFactor"), TEXT("0.250000"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("LowPassFilter_Exponential"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A exponential low pass filter"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage()
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			int32 numSamples;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LowPassFilter_RollingAverage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms));
			UProperty* NewProp_numSamples = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numSamples"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(numSamples, VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), 0x0010000000000080);
			UProperty* NewProp_newAverage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newAverage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newAverage, VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_newSample = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newSample"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(newSample, VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_lastAverage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lastAverage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lastAverage, VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_numSamples"), TEXT("10"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("LowPassFilter_RollingAverage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A Rolling average low pass filter"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms
		{
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			FTransform_NetQuantize ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MakeTransform_NetQuantize"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FTransform_NetQuantize());
			UProperty* NewProp_Scale = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Scale"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Scale, VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionLibrary|TransformNetQuantize"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("construct build"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("NativeMakeFunc"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Scale"), TEXT("1,1,1"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Make a transform net quantize from location, rotation and scale"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle()
	{
		struct VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> InVerts;
			FVector SampleSurfaceNormal;
			FVector OutRectCenter;
			FRotator OutRectRotation;
			float OutSideLengthX;
			float OutSideLengthY;
			bool bDebugDraw;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NonAuthorityMinimumAreaRectangle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDebugDraw, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms);
			UProperty* NewProp_bDebugDraw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bDebugDraw"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDebugDraw, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bDebugDraw, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), sizeof(bool), true);
			UProperty* NewProp_OutSideLengthY = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutSideLengthY"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OutSideLengthY, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000180);
			UProperty* NewProp_OutSideLengthX = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutSideLengthX"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OutSideLengthX, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000180);
			UProperty* NewProp_OutRectRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutRectRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OutRectRotation, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_OutRectCenter = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutRectCenter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OutRectCenter, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SampleSurfaceNormal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SampleSurfaceNormal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SampleSurfaceNormal, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InVerts = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InVerts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InVerts, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000008000182);
			UProperty* NewProp_InVerts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InVerts, TEXT("InVerts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CallableWithoutWorldContext"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bDebugDraw"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Finds the minimum area rectangle that encloses all of the points in InVerts\nEngine default version is server only for some reason\nUses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\n@param                InVerts - Points to enclose in the rectangle\n@outparam     OutRectCenter - Center of the enclosing rectangle\n@outparam     OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n@outparam     OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
			MetaData->SetValue(NewProp_SampleSurfaceNormal, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_InVerts, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter()
	{
		struct VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetEuroSmoothingFilter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms));
			UProperty* NewProp_TargetEuroFilter = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetEuroFilter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetEuroFilter, VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPEuroLowPassFilter());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EuroLowPassFilter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resets a Euro Low Pass Filter so that the first time it is used again it is clean"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot()
	{
		struct VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms
		{
			FRotator RotationDelta;
			FVector OriginalLocation;
			FRotator OriginalRotation;
			FVector PivotPoint;
			FVector NewLocation;
			FRotator NewRotation;
			bool bUseOriginalYawOnly;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RotateAroundPivot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseOriginalYawOnly, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms);
			UProperty* NewProp_bUseOriginalYawOnly = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseOriginalYawOnly"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseOriginalYawOnly, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseOriginalYawOnly, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), sizeof(bool), true);
			UProperty* NewProp_NewRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewRotation, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_NewLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewLocation, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_PivotPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PivotPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PivotPoint, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OriginalRotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OriginalRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OriginalRotation, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_OriginalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OriginalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OriginalLocation, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_RotationDelta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RotationDelta"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RotationDelta, VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUseOriginalYawOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("RotateAroundPivot"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter()
	{
		struct VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
			FVector InRawValue;
			float DeltaTime;
			FVector SmoothedValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RunEuroSmoothingFilter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms));
			UProperty* NewProp_SmoothedValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SmoothedValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SmoothedValue, VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_DeltaTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DeltaTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DeltaTime, VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), 0x0010000000000082);
			UProperty* NewProp_InRawValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InRawValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InRawValue, VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TargetEuroFilter = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetEuroFilter"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetEuroFilter, VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), 0x0010000008000180, Z_Construct_UScriptStruct_FBPEuroLowPassFilter());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("EuroLowPassFilter"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Runs the smoothing function of a Euro Low Pass Filter"));
			MetaData->SetValue(NewProp_DeltaTime, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline()
	{
		struct VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms
		{
			USplineComponent* LaserSplineComponent;
			TArray<USplineMeshComponent*> LaserSplineMeshComponents;
			FVector InStartLocation;
			FVector InEndLocation;
			FVector InForward;
			float LaserRadius;
		};
		UObject* Outer = Z_Construct_UClass_UVRExpansionFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SmoothUpdateLaserSpline"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms));
			UProperty* NewProp_LaserRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LaserRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaserRadius, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010000000000080);
			UProperty* NewProp_InForward = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InForward"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InForward, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InEndLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InEndLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InEndLocation, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_InStartLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InStartLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InStartLocation, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LaserSplineMeshComponents = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LaserSplineMeshComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LaserSplineMeshComponents, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010008000000080);
			UProperty* NewProp_LaserSplineMeshComponents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LaserSplineMeshComponents, TEXT("LaserSplineMeshComponents"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080000, Z_Construct_UClass_USplineMeshComponent_NoRegister());
			UProperty* NewProp_LaserSplineComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LaserSplineComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LaserSplineComponent, VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), 0x0010000000080080, Z_Construct_UClass_USplineComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Smooth Update Laser Spline"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Applies the same laser smoothing that the vr editor uses to an array of points"));
			MetaData->SetValue(NewProp_LaserSplineMeshComponents, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_LaserSplineComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister()
	{
		return UVRExpansionFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRExpansionFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass(), "AddSceneComponentByClass"); // 4008407084
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize(), "BreakTransform_NetQuantize"); // 954819676
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize(), "Conv_TransformToTransformNetQuantize"); // 1166700657
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation(), "EqualEqual_FBPActorGripInformation"); // 3899934147
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName(), "GetGripSlotInRangeByTypeName"); // 3864181677
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component(), "GetGripSlotInRangeByTypeName_Component"); // 2040035485
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw(), "GetHMDPureYaw"); // 1727494887
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType(), "GetHMDType"); // 2744869206
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable(), "GetIsActorMovable"); // 404954870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected(), "GetIsHMDConnected"); // 4103849040
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn(), "GetIsHMDWorn"); // 2204887843
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview(), "IsInVREditorPreview"); // 337378595
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame(), "IsInVREditorPreviewOrGame"); // 2812125551
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential(), "LowPassFilter_Exponential"); // 723183948
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage(), "LowPassFilter_RollingAverage"); // 895699007
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize(), "MakeTransform_NetQuantize"); // 503693976
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle(), "NonAuthorityMinimumAreaRectangle"); // 3246890034
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter(), "ResetEuroSmoothingFilter"); // 3557089299
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot(), "RotateAroundPivot"); // 2936010093
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter(), "RunEuroSmoothingFilter"); // 3408692070
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline(), "SmoothUpdateLaserSpline"); // 488813973
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRExpansionFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRExpansionFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRExpansionFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRExpansionFunctionLibrary, 2674161657);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRExpansionFunctionLibrary(Z_Construct_UClass_UVRExpansionFunctionLibrary, &UVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
