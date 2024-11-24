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

	
	TArray<AActor*> Instances = GetAllInstances();

	
	if (Instances.Num() > 1)
	{
		DeleteAllInstances(Instances);
	}

	
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

	
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = nullptr; 
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	
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







