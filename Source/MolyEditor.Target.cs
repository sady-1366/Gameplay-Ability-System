// SADY.CO

using UnrealBuildTool;
using System.Collections.Generic;

public class MolyEditorTarget : TargetRules
{
	public MolyEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Moly" } );
	}
}
