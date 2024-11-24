#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/SoftObjectPtr.h"
#include "World_subSystem_Observer.generated.h"





UCLASS(Blueprintable)
class YEAR4_API UWorld_subSystem_Observer : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Observer")
	void EnsureObjectExists();

	
	UFUNCTION(BlueprintCallable, Category = "Subsystem", meta = (WorldContext = "WorldContextObject"))
	static UWorld_subSystem_Observer* GetObserverSubsystem(UObject* WorldContextObject);

	
	UFUNCTION(BlueprintCallable, Category = "Observer")
	TArray<AActor*> GetAllInstances() const;

	
	UFUNCTION(BlueprintCallable, Category = "Observer")
	void DeleteAllInstances(const TArray<AActor*>& Instances);

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observer")
	TSubclassOf<AActor> ObjectToEnsure;

private:
	
	void SpawnObject();
};

