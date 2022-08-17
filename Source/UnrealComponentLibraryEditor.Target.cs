using UnrealBuildTool;
public class UnrealComponentLibraryEditorTarget : TargetRules
{
    public UnrealComponentLibraryEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "UnrealComponentLibraryCore" });
    }
}
