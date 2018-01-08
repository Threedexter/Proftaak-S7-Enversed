// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TouchVRBaseCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchVRBaseCharacter() {}
// Cross Module References
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter_NoRegister();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_ATouchVRBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
// End Cross Module References
	void ATouchVRBaseCharacter::StaticRegisterNativesATouchVRBaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATouchVRBaseCharacter_NoRegister()
	{
		return ATouchVRBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ATouchVRBaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_EnversedTouch();
			OuterClass = ATouchVRBaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATouchVRBaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TouchVRBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATouchVRBaseCharacter, 2667282848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATouchVRBaseCharacter(Z_Construct_UClass_ATouchVRBaseCharacter, &ATouchVRBaseCharacter::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("ATouchVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATouchVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
