#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Colour_BlindBPLibrary.generated.h"

class APostProcessVolume;
class UMaterialInstance;

UCLASS()
class UColour_BlindBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Applies one of the provided materials to a selected PostProcessVolume based on the input string.
     * @param SelectedPostProcessVolume - The PostProcessVolume to which the material will be applied.
     * @param ProtanopiaMaterial - Material for Protanopia.
     * @param DeuteranopiaMaterial - Material for Deuteranopia.
     * @param TritanopiaMaterial - Material for Tritanopia.
     * @param ColorBlindnessType - Type of color blindness (Protanopia, Deuteranopia, Tritanopia).
     */
    UFUNCTION(BlueprintCallable, Category = "ColorBlindness")
    static void ApplyMaterialToPostProcessVolumeByType(
        APostProcessVolume* SelectedPostProcessVolume,
        UMaterialInstance* ProtanopiaMaterial,
        UMaterialInstance* DeuteranopiaMaterial,
        UMaterialInstance* TritanopiaMaterial,
        const FString& ColorBlindnessType);

    /**
     * Disables any applied post-process material by clearing the WeightedBlendables array.
     * @param SelectedPostProcessVolume - The PostProcessVolume to clear.
     */
    UFUNCTION(BlueprintCallable, Category = "ColorBlindness")
    static void DisablePostProcessMaterial(APostProcessVolume* SelectedPostProcessVolume);
};


