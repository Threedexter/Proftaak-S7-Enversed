// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacterMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void UVRCharacterMovementComponent::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVR),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVR2 = FName(TEXT("ServerMoveVR2"));
	void UVRCharacterMovementComponent::ServerMoveVR2(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVR2_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVR2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void UVRCharacterMovementComponent::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDual),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDual2 = FName(TEXT("ServerMoveVRDual2"));
	void UVRCharacterMovementComponent::ServerMoveVRDual2(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDual2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDual2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight = FName(TEXT("ServerMoveVRDualExLight"));
	void UVRCharacterMovementComponent::ServerMoveVRDualExLight(float TimeStamp0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight2 = FName(TEXT("ServerMoveVRDualExLight2"));
	void UVRCharacterMovementComponent::ServerMoveVRDualExLight2(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void UVRCharacterMovementComponent::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2 = FName(TEXT("ServerMoveVRDualHybridRootMotion2"));
	void UVRCharacterMovementComponent::ServerMoveVRDualHybridRootMotion2(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRExLight = FName(TEXT("ServerMoveVRExLight"));
	void UVRCharacterMovementComponent::ServerMoveVRExLight(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRExLight_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRExLight),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRExLight2 = FName(TEXT("ServerMoveVRExLight2"));
	void UVRCharacterMovementComponent::ServerMoveVRExLight2(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRExLight2),&Parms);
	}
	void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
	{
		UClass* Class = UVRCharacterMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ServerMoveVR", (Native)&UVRCharacterMovementComponent::execServerMoveVR },
			{ "ServerMoveVR2", (Native)&UVRCharacterMovementComponent::execServerMoveVR2 },
			{ "ServerMoveVRDual", (Native)&UVRCharacterMovementComponent::execServerMoveVRDual },
			{ "ServerMoveVRDual2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDual2 },
			{ "ServerMoveVRDualExLight", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualExLight },
			{ "ServerMoveVRDualExLight2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualExLight2 },
			{ "ServerMoveVRDualHybridRootMotion", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualHybridRootMotion },
			{ "ServerMoveVRDualHybridRootMotion2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualHybridRootMotion2 },
			{ "ServerMoveVRExLight", (Native)&UVRCharacterMovementComponent::execServerMoveVRExLight },
			{ "ServerMoveVRExLight2", (Native)&UVRCharacterMovementComponent::execServerMoveVRExLight2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVR_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_ClientYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_CompressedMoveFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedMoveFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompressedMoveFlags, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("uint8 ClientRoll, uint32 View,"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVR2"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVR2_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_CompressedMoveFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedMoveFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompressedMoveFlags, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVR2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDual"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDual_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_ClientYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientYaw0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw0, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDual_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("uint8 ClientRoll, uint32 View,"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDual2"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_View0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View0, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info for two moves."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDualExLight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_ClientYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientYaw0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw0, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("uint8 ClientRoll, uint32 View,"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDualExLight2"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_View0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View0, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info for two moves. ExLight version is used if there was no requested velocity or customVRInputVector or Accell"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDualHybridRootMotion"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_ClientYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientYaw0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("uint8 ClientRoll, uint32 View,"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRDualHybridRootMotion2"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_NewFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(NewFlags, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_InAccel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldCapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(OldCapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_OldLFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldLFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldLFDiff, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_OldConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldConditionalReps, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_OldCapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldCapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OldCapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_View0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View0"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_PendingFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PendingFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PendingFlags, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			UProperty* NewProp_InAccel0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InAccel0"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InAccel0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize10());
			UProperty* NewProp_TimeStamp0 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp0, VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion."));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRExLight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_ClientYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(ClientYaw, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_CompressedMoveFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedMoveFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompressedMoveFlags, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("uint8 ClientRoll, uint32 View,"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2()
	{
		UObject* Outer = Z_Construct_UClass_UVRCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ServerMoveVRExLight2"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x80220C40, 65535, sizeof(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms));
			UProperty* NewProp_ClientMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientMovementMode, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ClientBaseBoneName, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientMovementBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientMovementBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ClientMovementBase, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_View = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("View"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(View, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_ClientRoll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ClientRoll, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_CompressedMoveFlags = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CompressedMoveFlags"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompressedMoveFlags, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_CapsuleYaw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(CapsuleYaw, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			UProperty* NewProp_LFDiff = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LFDiff"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LFDiff, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ConditionalReps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConditionalReps"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConditionalReps, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVRConditionalMoveRep());
			UProperty* NewProp_CapsuleLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CapsuleLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CapsuleLoc, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_ClientLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClientLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClientLoc, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector_NetQuantize100());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicated function sent by client to server - contains client movement and view info. ExLight version is used if there was no requested velocity or customVRInputVector or Accell"));
			MetaData->SetValue(NewProp_ClientMovementBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UVRBaseCharacterMovementComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRCharacterMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2());

				UProperty* NewProp_WallRepulsionMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WallRepulsionMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WallRepulsionMultiplier, UVRCharacterMovementComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowMovementMerging, UVRCharacterMovementComponent);
				UProperty* NewProp_bAllowMovementMerging = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowMovementMerging"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowMovementMerging, UVRCharacterMovementComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAllowMovementMerging, UVRCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRRootCapsule = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRRootCapsule"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRRootCapsule, UVRCharacterMovementComponent), 0x001000000008201c, Z_Construct_UClass_UVRRootComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR(), "ServerMoveVR"); // 1062490494
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2(), "ServerMoveVR2"); // 688484559
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual(), "ServerMoveVRDual"); // 4050404128
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2(), "ServerMoveVRDual2"); // 3050391633
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight(), "ServerMoveVRDualExLight"); // 485563729
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2(), "ServerMoveVRDualExLight2"); // 3679255344
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion(), "ServerMoveVRDualHybridRootMotion"); // 477961682
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2(), "ServerMoveVRDualHybridRootMotion2"); // 543689755
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight(), "ServerMoveVRExLight"); // 1174453245
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2(), "ServerMoveVRExLight2"); // 132644017
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRCharacterMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("Category"), TEXT("VRCharacterMovementComponent"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("ClampMax"), TEXT("1.0"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("ClampMin"), TEXT("0.01"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("ToolTip"), TEXT("Higher values will cause more slide but better step up"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("UIMax"), TEXT("1"));
				MetaData->SetValue(NewProp_WallRepulsionMultiplier, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_bAllowMovementMerging, TEXT("Category"), TEXT("VRCharacterMovementComponent"));
				MetaData->SetValue(NewProp_bAllowMovementMerging, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_bAllowMovementMerging, TEXT("ToolTip"), TEXT("Allow merging movement replication (may cause issues when >10 players due to capsule location"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRRootCapsule, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacterMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRCharacterMovementComponent, 2054844410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRCharacterMovementComponent(Z_Construct_UClass_UVRCharacterMovementComponent, &UVRCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
