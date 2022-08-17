using UnrealBuildTool;
public class UnrealComponentLibraryTarget : TargetRules
{
    public UnrealComponentLibraryTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "UnrealComponentLibraryCore" });
    }
}
