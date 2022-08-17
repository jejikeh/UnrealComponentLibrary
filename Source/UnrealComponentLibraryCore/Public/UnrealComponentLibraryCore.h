#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
class FUnrealComponentLibraryCore : public IModuleInterface
{
public:
	static inline FUnrealComponentLibraryCore& Get()
    {
        return FModuleManager::LoadModuleChecked<FUnrealComponentLibraryCore>("UnrealComponentLibraryCore");
    }

     static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("UnrealComponentLibraryCore");
    }

    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
