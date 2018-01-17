// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WidgetWrapper.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetWrapper() {}
// Cross Module References
	ENVERSEDTOUCH_API UFunction* Z_Construct_UFunction_UWidgetWrapper_IsSameWidget();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UWidgetWrapper();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENVERSEDTOUCH_API UClass* Z_Construct_UClass_UWidgetWrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
// End Cross Module References
	void UWidgetWrapper::StaticRegisterNativesUWidgetWrapper()
	{
		UClass* Class = UWidgetWrapper::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsSameWidget", (Native)&UWidgetWrapper::execIsSameWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UWidgetWrapper_IsSameWidget()
	{
		struct WidgetWrapper_eventIsSameWidget_Parms
		{
			UWidget* component;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWidgetWrapper();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsSameWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(WidgetWrapper_eventIsSameWidget_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WidgetWrapper_eventIsSameWidget_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WidgetWrapper_eventIsSameWidget_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WidgetWrapper_eventIsSameWidget_Parms), sizeof(bool), true);
			UProperty* NewProp_component = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("component"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(component, WidgetWrapper_eventIsSameWidget_Parms), 0x0010000000080080, Z_Construct_UClass_UWidget_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WidgetWrapper.h"));
			MetaData->SetValue(NewProp_component, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetWrapper_NoRegister()
	{
		return UWidgetWrapper::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetWrapper()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_EnversedTouch();
			OuterClass = UWidgetWrapper::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UWidgetWrapper_IsSameWidget());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWidgetWrapper_IsSameWidget(), "IsSameWidget"); // 3386272033
				static TCppClassTypeInfo<TCppClassTypeTraits<UWidgetWrapper> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WidgetWrapper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WidgetWrapper.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A wrapper used for comparing SWidgets in blueprints."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetWrapper, 1601158659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetWrapper(Z_Construct_UClass_UWidgetWrapper, &UWidgetWrapper::StaticClass, TEXT("/Script/EnversedTouch"), TEXT("UWidgetWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
