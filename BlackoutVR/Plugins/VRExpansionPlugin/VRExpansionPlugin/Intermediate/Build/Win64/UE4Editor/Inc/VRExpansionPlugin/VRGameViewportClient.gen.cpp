// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Misc/VRGameViewportClient.h"
#include "Classes/Engine/Engine.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameViewportClient() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
// End Cross Module References
static UEnum* EVRGameInputMethod_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGameInputMethod"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGameInputMethod(EVRGameInputMethod_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGameInputMethod"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGameInputMethod"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EVRGameInputMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EVRGameInputMethod::GameInput_Default"), 0);
			EnumNames.Emplace(TEXT("EVRGameInputMethod::GameInput_SharedKeyboardAndMouse"), 1);
			EnumNames.Emplace(TEXT("EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2"), 2);
			EnumNames.Emplace(TEXT("EVRGameInputMethod::GameInput_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EVRGameInputMethod");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRGameViewportClient.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_CRC() { return 628590619U; }
	void UVRGameViewportClient::StaticRegisterNativesUVRGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister()
	{
		return UVRGameViewportClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRGameViewportClient()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameViewportClient();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRGameViewportClient::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100088u;


				UProperty* NewProp_GameInputMethod = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameInputMethod"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(GameInputMethod, UVRGameViewportClient), 0x0010000000000005, Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod());
				UProperty* NewProp_GameInputMethod_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_GameInputMethod, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRGameViewportClient> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Misc/VRGameViewportClient.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRGameViewportClient.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\nGenerally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR"));
				MetaData->SetValue(NewProp_GameInputMethod, TEXT("Category"), TEXT("VRExpansionPlugin"));
				MetaData->SetValue(NewProp_GameInputMethod, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRGameViewportClient.h"));
				MetaData->SetValue(NewProp_GameInputMethod, TEXT("ToolTip"), TEXT("Input Method for the viewport"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGameViewportClient, 3841050203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGameViewportClient(Z_Construct_UClass_UVRGameViewportClient, &UVRGameViewportClient::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
