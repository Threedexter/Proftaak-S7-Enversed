// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FTouchFinger.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTouchFinger() {}
// Cross Module References
	ENVERSEDTOUCH_API UScriptStruct* Z_Construct_UScriptStruct_FTouchFinger();
	UPackage* Z_Construct_UPackage__Script_EnversedTouch();
// End Cross Module References
class UScriptStruct* FTouchFinger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENVERSEDTOUCH_API uint32 Get_Z_Construct_UScriptStruct_FTouchFinger_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchFinger, Z_Construct_UPackage__Script_EnversedTouch(), TEXT("TouchFinger"), sizeof(FTouchFinger), Get_Z_Construct_UScriptStruct_FTouchFinger_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTouchFinger(FTouchFinger::StaticStruct, TEXT("/Script/EnversedTouch"), TEXT("TouchFinger"), false, nullptr, nullptr);
static struct FScriptStruct_EnversedTouch_StaticRegisterNativesFTouchFinger
{
	FScriptStruct_EnversedTouch_StaticRegisterNativesFTouchFinger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TouchFinger")),new UScriptStruct::TCppStructOps<FTouchFinger>);
	}
} ScriptStruct_EnversedTouch_StaticRegisterNativesFTouchFinger;
	UScriptStruct* Z_Construct_UScriptStruct_FTouchFinger()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_EnversedTouch();
		extern uint32 Get_Z_Construct_UScriptStruct_FTouchFinger_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TouchFinger"), sizeof(FTouchFinger), Get_Z_Construct_UScriptStruct_FTouchFinger_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TouchFinger"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FTouchFinger>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/FTouchFinger.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Structure used for remembering the lastTouchedPosition for a finger."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTouchFinger_CRC() { return 3560909264U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
