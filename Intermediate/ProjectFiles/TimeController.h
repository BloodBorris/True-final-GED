#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimeController.generated.h"

UCLASS()
class TIMESPEEDUPPLUGIN_API UTimeController : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // Expose time dilation to Blueprints
    UFUNCTION(BlueprintCallable, Category = "Time Control")
    static void SetTimeDilation(float DilationFactor);
};