#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/SoftObjectPtr.h"
#include "World_subSystem_Observer.generated.h"

/**
 * A World Subsystem to ensure a specific object exists in the scene and manage multiple instances.
 */
UCLASS(Blueprintable)
class YEAR4_API UWorld_subSystem_Observer : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	// Function to check if the object exists, handle duplicates, and spawn one if necessary
	UFUNCTION(BlueprintCallable, Category = "Observer")
	void EnsureObjectExists();

	// Static function to get the subsystem from a Blueprint context
	UFUNCTION(BlueprintCallable, Category = "Subsystem", meta = (WorldContext = "WorldContextObject"))
	static UWorld_subSystem_Observer* GetObserverSubsystem(UObject* WorldContextObject);

	// Blueprint Callable Function to get all instances of the object
	UFUNCTION(BlueprintCallable, Category = "Observer")
	TArray<AActor*> GetAllInstances() const;

	// Blueprint Callable Function to delete all instances of the object
	UFUNCTION(BlueprintCallable, Category = "Observer")
	void DeleteAllInstances(const TArray<AActor*>& Instances);

protected:
	// The class type of the object to monitor/spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observer")
	TSubclassOf<AActor> ObjectToEnsure;

private:
	// Spawns the specified object
	void SpawnObject();
};

