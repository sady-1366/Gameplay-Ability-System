// SADY.CO

using UnrealBuildTool;
using System.Collections.Generic;

public class MolyTarget : TargetRules
{
	public MolyTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Moly" } );
	}
}
