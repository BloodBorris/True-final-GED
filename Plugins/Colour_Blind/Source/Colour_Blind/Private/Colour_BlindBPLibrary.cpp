#include "Colour_BlindBPLibrary.h"
#include "Engine/World.h"
#include "Engine/PostProcessVolume.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstanceDynamic.h"

void UColour_BlindBPLibrary::ApplyMaterialToPostProcessVolumeByType(
    APostProcessVolume* SelectedPostProcessVolume,
    UMaterialInstance* ProtanopiaMaterial,
    UMaterialInstance* DeuteranopiaMaterial,
    UMaterialInstance* TritanopiaMaterial,
    const FString& ColorBlindnessType)
{
    if (!SelectedPostProcessVolume)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid PostProcessVolume reference."));
        return;
    }

    UMaterialInstance* SelectedMaterial = nullptr;

    
    if (ColorBlindnessType == "Protanopia")
    {
        SelectedMaterial = ProtanopiaMaterial;
    }
    else if (ColorBlindnessType == "Deuteranopia")
    {
        SelectedMaterial = DeuteranopiaMaterial;
    }
    else if (ColorBlindnessType == "Tritanopia")
    {
        SelectedMaterial = TritanopiaMaterial;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid ColorBlindnessType: %s"), *ColorBlindnessType);
        return;
    }

    if (!SelectedMaterial)
    {
        UE_LOG(LogTemp, Warning, TEXT("No material provided for ColorBlindnessType: %s"), *ColorBlindnessType);
        return;
    }

    
    UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(SelectedMaterial, nullptr);
    if (DynamicMaterial)
    {
       
        SelectedPostProcessVolume->Settings.WeightedBlendables.Array.Empty();
        SelectedPostProcessVolume->Settings.WeightedBlendables.Array.Add(FWeightedBlendable(1.0f, DynamicMaterial));
        UE_LOG(LogTemp, Log, TEXT("Material applied for ColorBlindnessType: %s"), *ColorBlindnessType);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to create dynamic material instance."));
    }
}

void UColour_BlindBPLibrary::DisablePostProcessMaterial(APostProcessVolume* SelectedPostProcessVolume)
{
    if (!SelectedPostProcessVolume)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid PostProcessVolume reference."));
        return;
    }

   
    SelectedPostProcessVolume->Settings.WeightedBlendables.Array.Empty();
    UE_LOG(LogTemp, Log, TEXT("PostProcessVolume material disabled."));
}





