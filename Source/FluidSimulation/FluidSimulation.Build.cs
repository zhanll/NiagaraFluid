// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FluidSimulation : ModuleRules
{
	public FluidSimulation(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
