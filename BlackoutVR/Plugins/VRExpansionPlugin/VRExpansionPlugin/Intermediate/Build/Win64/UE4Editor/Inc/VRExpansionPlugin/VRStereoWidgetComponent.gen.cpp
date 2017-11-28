// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRStereoWidgetComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRStereoWidgetComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void UVRStereoWidgetComponent::StaticRegisterNativesUVRStereoWidgetComponent()
	{
		UClass* Class = UVRStereoWidgetComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetPriority", (Native)&UVRStereoWidgetComponent::execGetPriority },
			{ "SetPriority", (Native)&UVRStereoWidgetComponent::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority()
	{
		struct VRStereoWidgetComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRStereoWidgetComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(VRStereoWidgetComponent_eventGetPriority_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, VRStereoWidgetComponent_eventGetPriority_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|Stereo Layer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@return the render priority"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority()
	{
		struct VRStereoWidgetComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		UObject* Outer = Z_Construct_UClass_UVRStereoWidgetComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRStereoWidgetComponent_eventSetPriority_Parms));
			UProperty* NewProp_InPriority = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(InPriority, VRStereoWidgetComponent_eventSetPriority_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Components|Stereo Layer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Change the layer's render priority, higher priorities render on top of lower priorities\n@param        InPriority: Priority value"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UWidgetComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRStereoWidgetComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority());

				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Priority, UVRStereoWidgetComponent), 0x001000000000001d);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bQuadPreserveTextureRatio, UVRStereoWidgetComponent);
				UProperty* NewProp_bQuadPreserveTextureRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bQuadPreserveTextureRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bQuadPreserveTextureRatio, UVRStereoWidgetComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bQuadPreserveTextureRatio, UVRStereoWidgetComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNoAlphaChannel, UVRStereoWidgetComponent);
				UProperty* NewProp_bNoAlphaChannel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bNoAlphaChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNoAlphaChannel, UVRStereoWidgetComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bNoAlphaChannel, UVRStereoWidgetComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseEpicsWorldLockedStereo, UVRStereoWidgetComponent);
				UProperty* NewProp_bUseEpicsWorldLockedStereo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseEpicsWorldLockedStereo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseEpicsWorldLockedStereo, UVRStereoWidgetComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseEpicsWorldLockedStereo, UVRStereoWidgetComponent), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority(), "GetPriority"); // 1663539323
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority(), "SetPriority"); // 961649870
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRStereoWidgetComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionPlugin"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRStereoWidgetComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A widget component that displays the widget in a stereo layer instead of in worldspace.\nCurrently this class uses a custom postion instead of the engines WorldLocked for stereo layers\nThis is because world locked stereo layers don't account for player movement currently."));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("StereoLayer"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("ToolTip"), TEXT("Render priority among all stereo layers, higher priority render on top of lower priority *"));
				MetaData->SetValue(NewProp_bQuadPreserveTextureRatio, TEXT("Category"), TEXT("StereoLayer"));
				MetaData->SetValue(NewProp_bQuadPreserveTextureRatio, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
				MetaData->SetValue(NewProp_bQuadPreserveTextureRatio, TEXT("ToolTip"), TEXT("True if the quad should internally set it's Y value based on the set texture's dimensions"));
				MetaData->SetValue(NewProp_bNoAlphaChannel, TEXT("Category"), TEXT("StereoLayer"));
				MetaData->SetValue(NewProp_bNoAlphaChannel, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
				MetaData->SetValue(NewProp_bNoAlphaChannel, TEXT("ToolTip"), TEXT("True if the texture should not use its own alpha channel (1.0 will be substituted)"));
				MetaData->SetValue(NewProp_bUseEpicsWorldLockedStereo, TEXT("Category"), TEXT("StereoLayer"));
				MetaData->SetValue(NewProp_bUseEpicsWorldLockedStereo, TEXT("ModuleRelativePath"), TEXT("Public/VRStereoWidgetComponent.h"));
				MetaData->SetValue(NewProp_bUseEpicsWorldLockedStereo, TEXT("ToolTip"), TEXT("If true, use Epics world locked stereo implementation instead of my own temp solution"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRStereoWidgetComponent, 89516531);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRStereoWidgetComponent(Z_Construct_UClass_UVRStereoWidgetComponent, &UVRStereoWidgetComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRStereoWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
