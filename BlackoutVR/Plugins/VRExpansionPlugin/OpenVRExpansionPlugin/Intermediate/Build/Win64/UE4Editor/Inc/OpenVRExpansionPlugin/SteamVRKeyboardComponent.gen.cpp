// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SteamVRKeyboardComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRKeyboardComponent() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VRKeyboardNullCallbackSignature__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature()
	{
		struct _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms
		{
			FString Text;
		};
		UObject* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VRKeyboardStringCallbackSignature__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms));
			UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Text, _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void USteamVRKeyboardComponent::StaticRegisterNativesUSteamVRKeyboardComponent()
	{
		UClass* Class = USteamVRKeyboardComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CloseVRKeyboard", (Native)&USteamVRKeyboardComponent::execCloseVRKeyboard },
			{ "GetVRKeyboardText", (Native)&USteamVRKeyboardComponent::execGetVRKeyboardText },
			{ "OpenVRKeyboard", (Native)&USteamVRKeyboardComponent::execOpenVRKeyboard },
			{ "ReOpenVRKeyboardForUser", (Native)&USteamVRKeyboardComponent::execReOpenVRKeyboardForUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard()
	{
		struct SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms
		{
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_USteamVRKeyboardComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CloseVRKeyboard"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Closes the vrkeyboard, can fail if not already open"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText()
	{
		struct SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms
		{
			FString Text;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_USteamVRKeyboardComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVRKeyboardText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Text, SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Closes the vrkeyboard, can fail if not already open"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard()
	{
		struct SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_USteamVRKeyboardComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenVRKeyboard"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StartingString = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartingString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(StartingString, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080);
			UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Description, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080);
			UProperty* NewProp_MaxCharacters = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxCharacters"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxCharacters, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsRightHand, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms);
			UProperty* NewProp_bIsRightHand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsRightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsRightHand, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsRightHand, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseMinimalMode, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms);
			UProperty* NewProp_bUseMinimalMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseMinimalMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseMinimalMode, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseMinimalMode, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsMultiline, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms);
			UProperty* NewProp_bIsMultiline = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsMultiline"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsMultiline, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsMultiline, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsForPassword, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms);
			UProperty* NewProp_bIsForPassword = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsForPassword"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsForPassword, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsForPassword, SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Opens the vrkeyboard, can fail if already open or in use"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser()
	{
		struct SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPVRResultSwitch Result;
		};
		UObject* Outer = Z_Construct_UClass_USteamVRKeyboardComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReOpenVRKeyboardForUser"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Result, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000180, Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch());
			UProperty* NewProp_Result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StartingString = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartingString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(StartingString, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080);
			UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Description, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080);
			UProperty* NewProp_MaxCharacters = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxCharacters"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxCharacters, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsRightHand, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms);
			UProperty* NewProp_bIsRightHand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsRightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsRightHand, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsRightHand, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseMinimalMode, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms);
			UProperty* NewProp_bUseMinimalMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseMinimalMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseMinimalMode, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseMinimalMode, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsMultiline, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms);
			UProperty* NewProp_bIsMultiline = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsMultiline"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsMultiline, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsMultiline, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsForPassword, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms);
			UProperty* NewProp_bIsForPassword = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsForPassword"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsForPassword, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsForPassword, SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("Result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Re-Opens the vr keyboard that is currently active, can be used for switching interacting hands and the like."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister()
	{
		return USteamVRKeyboardComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
			OuterClass = USteamVRKeyboardComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard());
				OuterClass->LinkChild(Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText());
				OuterClass->LinkChild(Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard());
				OuterClass->LinkChild(Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser());

				UProperty* NewProp_OnKeyboardCharInput = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnKeyboardCharInput"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnKeyboardCharInput, USteamVRKeyboardComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature());
				UProperty* NewProp_OnKeyboardClosed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnKeyboardClosed"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnKeyboardClosed, USteamVRKeyboardComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature());
				UProperty* NewProp_OnKeyboardDone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnKeyboardDone"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnKeyboardDone, USteamVRKeyboardComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard(), "CloseVRKeyboard"); // 1302982909
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText(), "GetVRKeyboardText"); // 3906047125
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard(), "OpenVRKeyboard"); // 394468066
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser(), "ReOpenVRKeyboardForUser"); // 985782400
				static TCppClassTypeInfo<TCppClassTypeTraits<USteamVRKeyboardComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SteamVRKeyboardComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Allows displaying / hiding and sending input to and from the SteamVR keyboard. Has events for keyboard inputs\nGenerally outdated with the data table based keyboards I added, but still useful."));
				MetaData->SetValue(NewProp_OnKeyboardCharInput, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
				MetaData->SetValue(NewProp_OnKeyboardCharInput, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
				MetaData->SetValue(NewProp_OnKeyboardClosed, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
				MetaData->SetValue(NewProp_OnKeyboardClosed, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
				MetaData->SetValue(NewProp_OnKeyboardDone, TEXT("Category"), TEXT("VRExpansionFunctions|SteamVR"));
				MetaData->SetValue(NewProp_OnKeyboardDone, TEXT("ModuleRelativePath"), TEXT("Public/SteamVRKeyboardComponent.h"));
				MetaData->SetValue(NewProp_OnKeyboardDone, TEXT("ToolTip"), TEXT("Keyboard Functions"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRKeyboardComponent, 4114759147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRKeyboardComponent(Z_Construct_UClass_USteamVRKeyboardComponent, &USteamVRKeyboardComponent::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("USteamVRKeyboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRKeyboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
