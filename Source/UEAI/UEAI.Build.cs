// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEAI : ModuleRules
{
	public UEAI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "NavigationSystem" });
	}
}
