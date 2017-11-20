// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Misc/VRWheeledVehicle.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRWheeledVehicle() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
// End Cross Module References
	void AVRWheeledVehicle::StaticRegisterNativesAVRWheeledVehicle()
	{
		UClass* Class = AVRWheeledVehicle::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ForceSecondaryPossession", (Native)&AVRWheeledVehicle::execForceSecondaryPossession },
			{ "OnRep_Controller", (Native)&AVRWheeledVehicle::execOnRep_Controller },
			{ "SetBindToInput", (Native)&AVRWheeledVehicle::execSetBindToInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession()
	{
		struct VRWheeledVehicle_eventForceSecondaryPossession_Parms
		{
			AController* NewController;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRWheeledVehicle();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ForceSecondaryPossession"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRWheeledVehicle_eventForceSecondaryPossession_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRWheeledVehicle_eventForceSecondaryPossession_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRWheeledVehicle_eventForceSecondaryPossession_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRWheeledVehicle_eventForceSecondaryPossession_Parms), sizeof(bool), true);
			UProperty* NewProp_NewController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewController, VRWheeledVehicle_eventForceSecondaryPossession_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pawn"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRWheeledVehicle.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller()
	{
		UObject* Outer = Z_Construct_UClass_AVRWheeledVehicle();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRWheeledVehicle.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("UFUNCTION(BlueprintCallable, Category = \"Pawn\", meta = (Keywords = \"Delete\"))\n               virtual void DetachFromControllerPendingDestroy() override\n       {\n               if (Controller != NULL && Controller->GetPawn() == this)\n               {\n                       Controller->PawnPendingDestroy(this);\n                       if (Controller != NULL)\n                       {\n                               Controller->UnPossess();\n                               Controller = NULL;\n                       }\n               }\n       }"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput()
	{
		struct VRWheeledVehicle_eventSetBindToInput_Parms
		{
			AController* CController;
			bool bBindToInput;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRWheeledVehicle();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBindToInput"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(VRWheeledVehicle_eventSetBindToInput_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRWheeledVehicle_eventSetBindToInput_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRWheeledVehicle_eventSetBindToInput_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRWheeledVehicle_eventSetBindToInput_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBindToInput, VRWheeledVehicle_eventSetBindToInput_Parms);
			UProperty* NewProp_bBindToInput = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bBindToInput"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBindToInput, VRWheeledVehicle_eventSetBindToInput_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bBindToInput, VRWheeledVehicle_eventSetBindToInput_Parms), sizeof(bool), true);
			UProperty* NewProp_CController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CController, VRWheeledVehicle_eventSetBindToInput_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pawn"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRWheeledVehicle.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRWheeledVehicle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWheeledVehicle();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = AVRWheeledVehicle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession(), "ForceSecondaryPossession"); // 2726136180
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller(), "OnRep_Controller"); // 2956115061
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput(), "SetBindToInput"); // 3716758497
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRWheeledVehicle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Misc/VRWheeledVehicle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRWheeledVehicle.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This override of the base wheeled vehicle allows for dual pawn usage in engine.\nIt adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the\nplayer can control the vehicle as if they were locally possessed into it in a multiplayer enviroment (no lag)."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRWheeledVehicle, 3042603651);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRWheeledVehicle(Z_Construct_UClass_AVRWheeledVehicle, &AVRWheeledVehicle::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
