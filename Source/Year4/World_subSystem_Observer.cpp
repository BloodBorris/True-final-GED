#include "World_subSystem_Observer.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

void UWorld_subSystem_Observer::EnsureObjectExists()
{
	if (!ObjectToEnsure)
	{
		UE_LOG(LogTemp, Warning, TEXT("ObjectToEnsure is not set in the subsystem."));
		return;
	}

	// Get all instances of the object
	TArray<AActor*> Instances = GetAllInstances();

	// Handle duplicates: Delete all if there are more than one
	if (Instances.Num() > 1)
	{
		DeleteAllInstances(Instances);
	}

	// If there are no instances left, spawn a new one
	if (Instances.Num() == 0 || Instances.Num() > 1)
	{
		SpawnObject();
	}
}

TArray<AActor*> UWorld_subSystem_Observer::GetAllInstances() const
{
	TArray<AActor*> Instances;

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null! Cannot iterate over actors."));
		return Instances;
	}

	// Iterate through all actors of the specified type
	for (TActorIterator<AActor> It(World, ObjectToEnsure.Get()); It; ++It)
	{
		if (IsValid(*It))
		{
			Instances.Add(*It);
		}
	}

	return Instances;
}

void UWorld_subSystem_Observer::DeleteAllInstances(const TArray<AActor*>& Instances)
{
	for (AActor* Instance : Instances)
	{
		if (IsValid(Instance))
		{
			Instance->Destroy();
			UE_LOG(LogTemp, Log, TEXT("Deleted object: %s"), *Instance->GetName());
		}
	}
}

void UWorld_subSystem_Observer::SpawnObject()
{
	UWorld* World = GetWorld();
	if (!World) return;

	// Spawn parameters for the actor
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = nullptr; // No specific owner
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// Spawn the object at the world's origin or a predefined location
	FVector SpawnLocation = FVector::ZeroVector;
	FRotator SpawnRotation = FRotator::ZeroRotator;

	AActor* SpawnedActor = World->SpawnActor<AActor>(ObjectToEnsure, SpawnLocation, SpawnRotation, SpawnParams);
	if (SpawnedActor)
	{
		UE_LOG(LogTemp, Log, TEXT("Successfully spawned object: %s"), *SpawnedActor->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn the object."));
	}
}

UWorld_subSystem_Observer* UWorld_subSystem_Observer::GetObserverSubsystem(UObject* WorldContextObject)
{
	if (!WorldContextObject) return nullptr;

	UWorld* World = WorldContextObject->GetWorld();
	if (!World) return nullptr;

	return World->GetSubsystem<UWorld_subSystem_Observer>();
}







