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
   








    UFUNCTION(BlueprintCallable, Category = "ColorBlindness")
    static void ApplyMaterialToPostProcessVolumeByType(
        APostProcessVolume* SelectedPostProcessVolume,
        UMaterialInstance* ProtanopiaMaterial,
        UMaterialInstance* DeuteranopiaMaterial,
        UMaterialInstance* TritanopiaMaterial,
        const FString& ColorBlindnessType);

   



    UFUNCTION(BlueprintCallable, Category = "ColorBlindness")
    static void DisablePostProcessMaterial(APostProcessVolume* SelectedPostProcessVolume);
};


