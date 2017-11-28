// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_NotifyOfTeleport),NULL);
	}
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
		UClass* Class = AVRCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ExtendedSimpleMoveToLocation", (Native)&AVRCharacter::execExtendedSimpleMoveToLocation },
			{ "GetTeleportLocation", (Native)&AVRCharacter::execGetTeleportLocation },
			{ "NotifyOfTeleport", (Native)&AVRCharacter::execNotifyOfTeleport },
			{ "SetCharacterHalfHeightVR", (Native)&AVRCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", (Native)&AVRCharacter::execSetCharacterSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRCharacter_eventExtendedSimpleMoveToLocation_Parms
		{
			FVector GoalLocation;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
		};
		UObject* Outer = Z_Construct_UClass_AVRCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExtendedSimpleMoveToLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20400, 65535, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowPartialPath, VRCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bAllowPartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bAllowPartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowPartialPath, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bAllowPartialPath, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_FilterClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilterClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(FilterClass, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0014000000000080, Z_Construct_UClass_UNavigationQueryFilter_NoRegister(), Z_Construct_UClass_UClass());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCanStrafe, VRCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bCanStrafe = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bCanStrafe"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCanStrafe, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bCanStrafe, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bProjectDestinationToNavigation, VRCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bProjectDestinationToNavigation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bProjectDestinationToNavigation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bProjectDestinationToNavigation, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bProjectDestinationToNavigation, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsePathfinding, VRCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bUsePathfinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUsePathfinding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsePathfinding, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUsePathfinding, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopOnOverlap, VRCharacter_eventExtendedSimpleMoveToLocation_Parms);
			UProperty* NewProp_bStopOnOverlap = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopOnOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopOnOverlap, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010040000000080, CPP_BOOL_PROPERTY_BITMASK(bStopOnOverlap, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_AcceptanceRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AcceptanceRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AcceptanceRadius, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_GoalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GoalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GoalLocation, VRCharacter_eventExtendedSimpleMoveToLocation_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AdvancedDisplay"), TEXT("bStopOnOverlap,bCanStrafe,bAllowPartialPath"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AcceptanceRadius"), TEXT("-1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bAllowPartialPath"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bCanStrafe"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bProjectDestinationToNavigation"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bStopOnOverlap"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUsePathfinding"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("An extended simple move to location with additional parameters"));
			MetaData->SetValue(NewProp_GoalLocation, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation()
	{
		struct VRCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTeleportLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820400, 65535, sizeof(VRCharacter_eventGetTeleportLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRCharacter_eventGetTeleportLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OriginalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OriginalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OriginalLocation, VRCharacter_eventGetTeleportLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport()
	{
		UObject* Outer = Z_Construct_UClass_AVRCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NotifyOfTeleport"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00024CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR()
	{
		struct VRCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_AVRCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCharacterHalfHeightVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRCharacter_eventSetCharacterHalfHeightVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRCharacter_eventSetCharacterHalfHeightVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRCharacter_eventSetCharacterHalfHeightVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRCharacter_eventSetCharacterHalfHeightVR_Parms), sizeof(bool), true);
			UProperty* NewProp_HalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HalfHeight, VRCharacter_eventSetCharacterHalfHeightVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR()
	{
		struct VRCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		UObject* Outer = Z_Construct_UClass_AVRCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCharacterSizeVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRCharacter_eventSetCharacterSizeVR_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUpdateOverlaps, VRCharacter_eventSetCharacterSizeVR_Parms);
			UProperty* NewProp_bUpdateOverlaps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUpdateOverlaps"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUpdateOverlaps, VRCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUpdateOverlaps, VRCharacter_eventSetCharacterSizeVR_Parms), sizeof(bool), true);
			UProperty* NewProp_NewHalfHeight = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewHalfHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewHalfHeight, VRCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080);
			UProperty* NewProp_NewRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewRadius, VRCharacter_eventSetCharacterSizeVR_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("BaseVRCharacter"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bUpdateOverlaps"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVRBaseCharacter();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = AVRCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRCharacter_GetTeleportLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR());

				UProperty* NewProp_VRRootReference = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRRootReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRRootReference, AVRCharacter), 0x00100000000a201d, Z_Construct_UClass_UVRRootComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation(), "ExtendedSimpleMoveToLocation"); // 3745286460
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRCharacter_GetTeleportLocation(), "GetTeleportLocation"); // 1179254911
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport(), "NotifyOfTeleport"); // 3332452016
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR(), "SetCharacterHalfHeightVR"); // 1135158390
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR(), "SetCharacterSizeVR"); // 2340717582
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_VRRootReference, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VRRootReference, TEXT("Category"), TEXT("VRCharacter"));
				MetaData->SetValue(NewProp_VRRootReference, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRRootReference, TEXT("ModuleRelativePath"), TEXT("Public/VRCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRCharacter, 826961246);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
