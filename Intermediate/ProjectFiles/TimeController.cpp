#include "TimeController.h"
#include "TimeSpeedUpPlugin.h"
#include "Modules/ModuleManager.h"

void UTimeController::SetTimeDilation(float DilationFactor)
{
    if (FTimeSpeedUpPluginModule* Module = FModuleManager::GetModulePtr<FTimeSpeedUpPluginModule>("TimeSpeedUpPlugin"))
    {
        Module->SetTimeDilation(DilationFactor);
    }
}
