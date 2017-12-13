// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class BlackoutVR : ModuleRules
{
	public BlackoutVR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AIModule" });

		PrivateDependencyModuleNames.AddRange(new string[] { "HeadMountedDisplay" , "SteamVR" });
		
        Definitions.Add("WINVER=0x0A00");  
        Definitions.Add("_WIN32_WINNT_WINBLUE=0x0A00");  
        Definitions.Add("_CRT_SECURE_NO_WARNINGS");  

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
