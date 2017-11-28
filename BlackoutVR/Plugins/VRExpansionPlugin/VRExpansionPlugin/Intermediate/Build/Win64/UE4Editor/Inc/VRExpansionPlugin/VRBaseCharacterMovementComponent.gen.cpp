// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBaseCharacterMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
// End Cross Module References
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep(FVRConditionalMoveRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep;
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VRConditionalMoveRep"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>, EStructFlags(0x00000201));
			UProperty* NewProp_RequestedVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RequestedVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RequestedVelocity, FVRConditionalMoveRep), 0x0010000000002000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_CustomVRInputVector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CustomVRInputVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CustomVRInputVector, FVRConditionalMoveRep), 0x0010000000002000, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(NewProp_RequestedVelocity, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(NewProp_CustomVRInputVector, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC() { return 1020334702U; }
	static FName NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition = FName(TEXT("ClientAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition),&Parms);
	}
	static FName NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition = FName(TEXT("ClientVeryShortAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition),&Parms);
	}
	void UVRBaseCharacterMovementComponent::StaticRegisterNativesUVRBaseCharacterMovementComponent()
	{
		UClass* Class = UVRBaseCharacterMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddCustomReplicatedMovement", (Native)&UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement },
			{ "ClientAdjustPosition", (Native)&UVRBaseCharacterMovementComponent::execClientAdjustPosition },
			{ "ClientVeryShortAdjustPosition", (Native)&UVRBaseCharacterMovementComponent::execClientVeryShortAdjustPosition },
			{ "SetClimbingMode", (Native)&UVRBaseCharacterMovementComponent::execSetClimbingMode },
			{ "SetCrouchedHalfHeight", (Native)&UVRBaseCharacterMovementComponent::execSetCrouchedHalfHeight },
			{ "SetReplicatedMovementMode", (Native)&UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement()
	{
		struct VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms
		{
			FVector Movement;
		};
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddCustomReplicatedMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms));
			UProperty* NewProp_Movement = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Movement"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Movement, VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacterMovementComponent|VRLocations"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition()
	{
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClientAdjustPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x01820C40, 65535, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms));
			UProperty* NewProp_ServerMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ServerMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ServerMovementMode, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms);
			UProperty* NewProp_bBaseRelativePosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBaseRelativePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasBase, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms);
			UProperty* NewProp_bHasBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHasBase"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasBase, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bHasBase, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), sizeof(bool), true);
			UProperty* NewProp_NewBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(NewBaseBoneName, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080);
			UProperty* NewProp_NewBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewBase, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_NewVel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewVel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewVel, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_NewLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewLoc, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment."));
			MetaData->SetValue(NewProp_NewBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition()
	{
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClientVeryShortAdjustPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x01820C40, 65535, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms));
			UProperty* NewProp_ServerMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ServerMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ServerMovementMode, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms);
			UProperty* NewProp_bBaseRelativePosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBaseRelativePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBaseRelativePosition, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasBase, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms);
			UProperty* NewProp_bHasBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bHasBase"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasBase, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bHasBase, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), sizeof(bool), true);
			UProperty* NewProp_NewBaseBoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBaseBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(NewBaseBoneName, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080);
			UProperty* NewProp_NewBase = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBase"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewBase, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_NewLoc = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewLoc"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewLoc, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TimeStamp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeStamp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeStamp, VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Bandwidth saving version, when velocity is zeroed"));
			MetaData->SetValue(NewProp_NewBase, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode()
	{
		struct VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms
		{
			bool bIsClimbing;
		};
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetClimbingMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsClimbing, VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms);
			UProperty* NewProp_bIsClimbing = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsClimbing"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsClimbing, VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsClimbing, VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRMovement|Climbing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight()
	{
		struct VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms
		{
			float NewCrouchedHalfHeight;
		};
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCrouchedHalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms));
			UProperty* NewProp_NewCrouchedHalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewCrouchedHalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewCrouchedHalfHeight, VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRMovement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the crouching half height since it isn't exposed during runtime to blueprints"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode()
	{
		struct VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes NewMovementMode;
		};
		UObject* Outer = Z_Construct_UClass_UVRBaseCharacterMovementComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetReplicatedMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms));
			UProperty* NewProp_NewMovementMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewMovementMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NewMovementMode, VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms), 0x0010000000000080, Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes());
			UProperty* NewProp_NewMovementMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NewMovementMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRMovement"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister()
	{
		return UVRBaseCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCharacterMovementComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRBaseCharacterMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(VRLowGravIgnoresDefaultFluidFriction, UVRBaseCharacterMovementComponent);
				UProperty* NewProp_VRLowGravIgnoresDefaultFluidFriction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRLowGravIgnoresDefaultFluidFriction"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(VRLowGravIgnoresDefaultFluidFriction, UVRBaseCharacterMovementComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(VRLowGravIgnoresDefaultFluidFriction, UVRBaseCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRLowGravWallFrictionScaler = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRLowGravWallFrictionScaler"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRLowGravWallFrictionScaler, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				UProperty* NewProp_DefaultPostClimbMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultPostClimbMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(DefaultPostClimbMovement, UVRBaseCharacterMovementComponent), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes());
				UProperty* NewProp_DefaultPostClimbMovement_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DefaultPostClimbMovement, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(VRReplicateCapsuleHeight, UVRBaseCharacterMovementComponent);
				UProperty* NewProp_VRReplicateCapsuleHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRReplicateCapsuleHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(VRReplicateCapsuleHeight, UVRBaseCharacterMovementComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(VRReplicateCapsuleHeight, UVRBaseCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRClimbingMaxReleaseVelocitySize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRClimbingMaxReleaseVelocitySize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRClimbingMaxReleaseVelocitySize, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(SetDefaultPostClimbMovementOnStepUp, UVRBaseCharacterMovementComponent);
				UProperty* NewProp_SetDefaultPostClimbMovementOnStepUp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SetDefaultPostClimbMovementOnStepUp"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(SetDefaultPostClimbMovementOnStepUp, UVRBaseCharacterMovementComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(SetDefaultPostClimbMovementOnStepUp, UVRBaseCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRClimbingStepUpMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRClimbingStepUpMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRClimbingStepUpMultiplier, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				UProperty* NewProp_VRClimbingEdgeRejectDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRClimbingEdgeRejectDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRClimbingEdgeRejectDistance, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				UProperty* NewProp_VRClimbingStepHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRClimbingStepHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRClimbingStepHeight, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreSimulatingComponentsInFloorCheck, UVRBaseCharacterMovementComponent);
				UProperty* NewProp_bIgnoreSimulatingComponentsInFloorCheck = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreSimulatingComponentsInFloorCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreSimulatingComponentsInFloorCheck, UVRBaseCharacterMovementComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIgnoreSimulatingComponentsInFloorCheck, UVRBaseCharacterMovementComponent), sizeof(bool), true);
				UProperty* NewProp_VRWallSlideScaler = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRWallSlideScaler"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VRWallSlideScaler, UVRBaseCharacterMovementComponent), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement(), "AddCustomReplicatedMovement"); // 902431935
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition(), "ClientAdjustPosition"); // 3007310181
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition(), "ClientVeryShortAdjustPosition"); // 55598497
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode(), "SetClimbingMode"); // 1436413307
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight(), "SetCrouchedHalfHeight"); // 4258951503
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode(), "SetReplicatedMovementMode"); // 172976610
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRBaseCharacterMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);"));
				MetaData->SetValue(NewProp_VRLowGravIgnoresDefaultFluidFriction, TEXT("Category"), TEXT("VRMovement|LowGrav"));
				MetaData->SetValue(NewProp_VRLowGravIgnoresDefaultFluidFriction, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRLowGravIgnoresDefaultFluidFriction, TEXT("ToolTip"), TEXT("If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("Category"), TEXT("VRMovement|LowGrav"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("ClampMax"), TEXT("5.0"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("ToolTip"), TEXT("Setting this below 1.0 will change how fast you de-accelerate when touching a wall"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("UIMax"), TEXT("5"));
				MetaData->SetValue(NewProp_VRLowGravWallFrictionScaler, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_DefaultPostClimbMovement, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_DefaultPostClimbMovement, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_DefaultPostClimbMovement, TEXT("ToolTip"), TEXT("Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true"));
				MetaData->SetValue(NewProp_VRReplicateCapsuleHeight, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_VRReplicateCapsuleHeight, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRReplicateCapsuleHeight, TEXT("ToolTip"), TEXT("If true will replicate the capsule height on to clients, allows for dynamic capsule height changes in multiplayer"));
				MetaData->SetValue(NewProp_VRClimbingMaxReleaseVelocitySize, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_VRClimbingMaxReleaseVelocitySize, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRClimbingMaxReleaseVelocitySize, TEXT("ToolTip"), TEXT("Max velocity on releasing a climbing grip"));
				MetaData->SetValue(NewProp_SetDefaultPostClimbMovementOnStepUp, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_SetDefaultPostClimbMovementOnStepUp, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_SetDefaultPostClimbMovementOnStepUp, TEXT("ToolTip"), TEXT("If true will automatically set falling when a stepup occurs during climbing"));
				MetaData->SetValue(NewProp_VRClimbingStepUpMultiplier, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_VRClimbingStepUpMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRClimbingStepUpMultiplier, TEXT("ToolTip"), TEXT("Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*"));
				MetaData->SetValue(NewProp_VRClimbingEdgeRejectDistance, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_VRClimbingEdgeRejectDistance, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRClimbingEdgeRejectDistance, TEXT("ToolTip"), TEXT("Custom distance that is required before accepting a climbing stepup\n      *  This is to help with cases where head wobble causes falling backwards\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well"));
				MetaData->SetValue(NewProp_VRClimbingStepHeight, TEXT("Category"), TEXT("VRMovement|Climbing"));
				MetaData->SetValue(NewProp_VRClimbingStepHeight, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRClimbingStepHeight, TEXT("ToolTip"), TEXT("Height to auto step up"));
				MetaData->SetValue(NewProp_bIgnoreSimulatingComponentsInFloorCheck, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_bIgnoreSimulatingComponentsInFloorCheck, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_bIgnoreSimulatingComponentsInFloorCheck, TEXT("ToolTip"), TEXT("If true will never count a simulating component as the floor, to prevent jitter / physics problems."));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("Category"), TEXT("VRMovement"));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("ClampMax"), TEXT("5.0"));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("ClampMin"), TEXT("0.0"));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("ModuleRelativePath"), TEXT("Public/VRBaseCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("ToolTip"), TEXT("Setting this higher will divide the wall slide effect by this value, to reduce collision sliding."));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("UIMax"), TEXT("5"));
				MetaData->SetValue(NewProp_VRWallSlideScaler, TEXT("UIMin"), TEXT("0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRBaseCharacterMovementComponent, 913995467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRBaseCharacterMovementComponent(Z_Construct_UClass_UVRBaseCharacterMovementComponent, &UVRBaseCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRBaseCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRBaseCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
