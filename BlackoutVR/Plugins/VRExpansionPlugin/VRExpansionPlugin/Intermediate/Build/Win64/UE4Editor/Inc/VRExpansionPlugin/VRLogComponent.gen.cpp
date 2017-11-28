// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Misc/VRLogComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRLogComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRLogComponent_SetConsoleText();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
static UEnum* EBPVRConsoleDrawType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRConsoleDrawType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRConsoleDrawType(EBPVRConsoleDrawType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPVRConsoleDrawType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		extern uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRConsoleDrawType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBPVRConsoleDrawType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly"), 0);
			EnumNames.Emplace(TEXT("EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly"), 1);
			EnumNames.Emplace(TEXT("EBPVRConsoleDrawType::VRConsole_Draw_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBPVRConsoleDrawType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_CRC() { return 2551792205U; }
	void UVRLogComponent::StaticRegisterNativesUVRLogComponent()
	{
		UClass* Class = UVRLogComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AppendTextToConsole", (Native)&UVRLogComponent::execAppendTextToConsole },
			{ "DrawConsoleToRenderTarget2D", (Native)&UVRLogComponent::execDrawConsoleToRenderTarget2D },
			{ "SendKeyEventToConsole", (Native)&UVRLogComponent::execSendKeyEventToConsole },
			{ "SetConsoleText", (Native)&UVRLogComponent::execSetConsoleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole()
	{
		struct VRLogComponent_eventAppendTextToConsole_Parms
		{
			FString Text;
			bool bReturnAtEnd;
		};
		UObject* Outer = Z_Construct_UClass_UVRLogComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AppendTextToConsole"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRLogComponent_eventAppendTextToConsole_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReturnAtEnd, VRLogComponent_eventAppendTextToConsole_Parms);
			UProperty* NewProp_bReturnAtEnd = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bReturnAtEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReturnAtEnd, VRLogComponent_eventAppendTextToConsole_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bReturnAtEnd, VRLogComponent_eventAppendTextToConsole_Parms), sizeof(bool), true);
			UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Text, VRLogComponent_eventAppendTextToConsole_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRLogComponent|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bReturnAtEnd"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sends text to the console - Optionally returns at the end to \"enter\" the text, end flashes the cursor"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D()
	{
		struct VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms
		{
			EBPVRConsoleDrawType DrawType;
			UTextureRenderTarget2D* Texture;
			float ScrollOffset;
			bool bForceDraw;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRLogComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DrawConsoleToRenderTarget2D"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bForceDraw, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms);
			UProperty* NewProp_bForceDraw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bForceDraw"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bForceDraw, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bForceDraw, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), sizeof(bool), true);
			UProperty* NewProp_ScrollOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScrollOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScrollOffset, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), 0x0010000000000080);
			UProperty* NewProp_Texture = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Texture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Texture, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), 0x0010000000000080, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister());
			UProperty* NewProp_DrawType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DrawType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(DrawType, VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), 0x0010000000000080, Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType());
			UProperty* NewProp_DrawType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DrawType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRLogComponent|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("DrawConsoleToCanvasRenderTarget2D"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Draw the console to a render target 2D"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole()
	{
		struct VRLogComponent_eventSendKeyEventToConsole_Parms
		{
			FKey Key;
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		UObject* Outer = Z_Construct_UClass_UVRLogComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendKeyEventToConsole"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRLogComponent_eventSendKeyEventToConsole_Parms));
			UProperty* NewProp_KeyEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("KeyEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(KeyEvent, VRLogComponent_eventSendKeyEventToConsole_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EInputEvent());
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, VRLogComponent_eventSendKeyEventToConsole_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRLogComponent|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sends a key to the console - Console considers Released as final, flashes the cursor"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRLogComponent_SetConsoleText()
	{
		struct VRLogComponent_eventSetConsoleText_Parms
		{
			FString Text;
		};
		UObject* Outer = Z_Construct_UClass_UVRLogComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetConsoleText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VRLogComponent_eventSetConsoleText_Parms));
			UProperty* NewProp_Text = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Text"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Text, VRLogComponent_eventSetConsoleText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("bIgnoreSelf"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRLogComponent|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the console input text, can be used to clear the console or enter full or partial commands"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRLogComponent_NoRegister()
	{
		return UVRLogComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRLogComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_VRExpansionPlugin();
			OuterClass = UVRLogComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole());
				OuterClass->LinkChild(Z_Construct_UFunction_UVRLogComponent_SetConsoleText());

				UProperty* NewProp_MaxStoredMessages = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxStoredMessages"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxStoredMessages, UVRLogComponent), 0x0010000000000005);
				UProperty* NewProp_MaxLineLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxLineLength"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxLineLength, UVRLogComponent), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole(), "AppendTextToConsole"); // 825187754
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D(), "DrawConsoleToRenderTarget2D"); // 2879206303
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole(), "SendKeyEventToConsole"); // 1617065347
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRLogComponent_SetConsoleText(), "SetConsoleText"); // 1112510931
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRLogComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRExpansionPlugin"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Misc/VRLogComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("This class taps into the output log and console and renders them to textures so they can be viewed in levels.\nGenerally used for debugging and testing in VR, also allows sending input to the console."));
				MetaData->SetValue(NewProp_MaxStoredMessages, TEXT("Category"), TEXT("VRLogComponent|Console"));
				MetaData->SetValue(NewProp_MaxStoredMessages, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
				MetaData->SetValue(NewProp_MaxLineLength, TEXT("Category"), TEXT("VRLogComponent|Console"));
				MetaData->SetValue(NewProp_MaxLineLength, TEXT("ModuleRelativePath"), TEXT("Public/Misc/VRLogComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRLogComponent, 4131851559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRLogComponent(Z_Construct_UClass_UVRLogComponent, &UVRLogComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRLogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
