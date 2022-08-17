#include "UnrealComponentLibraryCore.h"
#include "Modules/ModuleManager.h"
#include "Log.h"
void FUnrealComponentLibraryCore::StartupModule()
{
    UE_LOG(LogUnrealComponentLibraryCore, Log, TEXT(" UnrealComponentLibraryCore module starting up"));
}

void FUnrealComponentLibraryCore::ShutdownModule()
{
    UE_LOG(LogUnrealComponentLibraryCore, Log, TEXT(" UnrealComponentLibraryCore module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FUnrealComponentLibraryCore, UnrealComponentLibraryCore, "UnrealComponentLibraryCore"); 
