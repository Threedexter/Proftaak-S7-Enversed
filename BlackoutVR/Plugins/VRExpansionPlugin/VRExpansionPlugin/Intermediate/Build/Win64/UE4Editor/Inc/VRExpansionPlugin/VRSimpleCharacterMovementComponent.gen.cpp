// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SimpleChar/VRSimpleCharacterMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVR),&Parms);
	}
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDual),&Parms);
	}
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	void UVRSimpleCharacterMovementComponent::StaticRegisterNativesUVRSimpleCharacterMovementComponent()
	{
		UClass* Class = UVRSimpleCharacterMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ServerMoveVR", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVR },
			{ "ServerMoveVRDual", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVRDual },
			{ "ServerMoveVRDualHybridRootMotion", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVRDualHybridRootMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR()
	{
		UObject* Outer = Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_CompressedMoveFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedMoveFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompressedMoveFlags, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual()
	{
		UObject* Outer = Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDual"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_View0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View0, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info for two moves."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion()
	{
		UObject* Outer = Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDualHybridRootMotion"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_View0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View0, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVRBaseCharacterMovementComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRSimpleCharacterMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSkipHMDChecks, UVRSimpleCharacterMovementComponent);
				UProperty* NewProp_bSkipHMDChecks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSkipHMDChecks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSkipHMDChecks, UVRSimpleCharacterMovementComponent), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(bSkipHMDChecks, UVRSimpleCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRCameraComponent, UVRSimpleCharacterMovementComponent), 0x001000000008201c, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VRRootCapsule = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRRootCapsule"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRRootCapsule, UVRSimpleCharacterMovementComponent), 0x001000000008201c, Z_Construct_UClass_UCapsuleComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR(), "ServerMoveVR"); // 3434454770
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual(), "ServerMoveVRDual"); // 1592790222
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion(), "ServerMoveVRDualHybridRootMotion"); // 2435186325
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRSimpleCharacterMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SimpleChar/VRSimpleCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);"));
				MetaData->SetValue(NewProp_bSkipHMDChecks, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_bSkipHMDChecks, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_bSkipHMDChecks, TEXT("ToolTip"), TEXT("Skips checking for the HMD location on tick, for 2D pawns when a headset is connected"));
				MetaData->SetValue(NewProp_VRCameraComponent, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_VRCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRCameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacterMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRSimpleCharacterMovementComponent, 1986388995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRSimpleCharacterMovementComponent(Z_Construct_UClass_UVRSimpleCharacterMovementComponent, &UVRSimpleCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRSimpleCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSimpleCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
