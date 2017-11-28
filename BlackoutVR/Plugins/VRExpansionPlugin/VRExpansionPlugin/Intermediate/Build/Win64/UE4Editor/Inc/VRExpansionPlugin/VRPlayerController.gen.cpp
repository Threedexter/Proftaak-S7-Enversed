// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlayerController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerController() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void AVRPlayerController::StaticRegisterNativesAVRPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AVRPlayerController_NoRegister()
	{
		return AVRPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = AVRPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisableServerUpdateCamera, AVRPlayerController);
				UProperty* NewProp_bDisableServerUpdateCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDisableServerUpdateCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisableServerUpdateCamera, AVRPlayerController), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bDisableServerUpdateCamera, AVRPlayerController), sizeof(bool), true);
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_bDisableServerUpdateCamera, TEXT("Category"), TEXT("VRPlayerController"));
				MetaData->SetValue(NewProp_bDisableServerUpdateCamera, TEXT("ModuleRelativePath"), TEXT("Public/VRPlayerController.h"));
				MetaData->SetValue(NewProp_bDisableServerUpdateCamera, TEXT("ToolTip"), TEXT("Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\nWe are manually replicating the camera position and rotation ourselves anyway\nGenerally that function will just be additional replication overhead"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerController, 514138017);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerController(Z_Construct_UClass_AVRPlayerController, &AVRPlayerController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
