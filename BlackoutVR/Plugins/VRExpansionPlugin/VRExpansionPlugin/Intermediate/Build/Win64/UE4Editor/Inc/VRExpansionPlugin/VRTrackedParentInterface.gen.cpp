// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRTrackedParentInterface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTrackedParentInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void UVRTrackedParentInterface::StaticRegisterNativesUVRTrackedParentInterface()
	{
		UClass* Class = UVRTrackedParentInterface::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetTrackedParent", (Native)&IVRTrackedParentInterface::execSetTrackedParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent()
	{
		struct VRTrackedParentInterface_eventSetTrackedParent_Parms
		{
			UPrimitiveComponent* NewParentComponent;
			float WaistRadius;
			EBPVRWaistTrackingMode WaistTrackingMode;
		};
		UObject* Outer = Z_Construct_UClass_UVRTrackedParentInterface();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetTrackedParent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRTrackedParentInterface_eventSetTrackedParent_Parms));
			UProperty* NewProp_WaistTrackingMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaistTrackingMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WaistTrackingMode, VRTrackedParentInterface_eventSetTrackedParent_Parms), 0x0010000000000080, Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode());
			UProperty* NewProp_WaistTrackingMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WaistTrackingMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WaistRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WaistRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WaistRadius, VRTrackedParentInterface_eventSetTrackedParent_Parms), 0x0010000000000080);
			UProperty* NewProp_NewParentComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewParentComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewParentComponent, VRTrackedParentInterface_eventSetTrackedParent_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRTrackedParentInterface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRTrackedParentInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set a tracked parent"));
			MetaData->SetValue(NewProp_NewParentComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRTrackedParentInterface()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterface();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRTrackedParentInterface::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20104081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent(), "SetTrackedParent"); // 4020147253
				static TCppClassTypeInfo<TCppClassTypeTraits<IVRTrackedParentInterface> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("CannotImplementInterfaceInBlueprint"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRTrackedParentInterface.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRTrackedParentInterface, 162159211);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRTrackedParentInterface(Z_Construct_UClass_UVRTrackedParentInterface, &UVRTrackedParentInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRTrackedParentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRTrackedParentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
