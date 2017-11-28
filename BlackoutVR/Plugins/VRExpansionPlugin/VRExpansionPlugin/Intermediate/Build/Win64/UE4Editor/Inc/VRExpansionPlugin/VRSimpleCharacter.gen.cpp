// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SimpleChar/VRSimpleCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVRSimpleCharacter::StaticRegisterNativesAVRSimpleCharacter()
	{
		UClass* Class = AVRSimpleCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetTeleportLocation", (Native)&AVRSimpleCharacter::execGetTeleportLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation()
	{
		struct VRSimpleCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVRSimpleCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTeleportLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14820400, 65535, sizeof(VRSimpleCharacter_eventGetTeleportLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRSimpleCharacter_eventGetTeleportLocation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OriginalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OriginalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OriginalLocation, VRSimpleCharacter_eventGetTeleportLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRGrip"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVRBaseCharacter();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = AVRSimpleCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation());

				UProperty* NewProp_VRSceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VRSceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VRSceneComponent, AVRSimpleCharacter), 0x00100000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRSimpleCharacter_GetTeleportLocation(), "GetTeleportLocation"); // 1977497021
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRSimpleCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SimpleChar/VRSimpleCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_VRSceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VRSceneComponent, TEXT("Category"), TEXT("VRSimpleCharacter"));
				MetaData->SetValue(NewProp_VRSceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VRSceneComponent, TEXT("ModuleRelativePath"), TEXT("Public/SimpleChar/VRSimpleCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRSimpleCharacter, 250082647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRSimpleCharacter(Z_Construct_UClass_AVRSimpleCharacter, &AVRSimpleCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRSimpleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRSimpleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
