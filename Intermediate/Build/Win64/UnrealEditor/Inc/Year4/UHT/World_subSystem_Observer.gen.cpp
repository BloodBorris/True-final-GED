// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Year4/World_subSystem_Observer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorld_subSystem_Observer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Year4();
YEAR4_API UClass* Z_Construct_UClass_UWorld_subSystem_Observer();
YEAR4_API UClass* Z_Construct_UClass_UWorld_subSystem_Observer_NoRegister();
// End Cross Module References

// Begin Class UWorld_subSystem_Observer Function DeleteAllInstances
struct Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics
{
	struct World_subSystem_Observer_eventDeleteAllInstances_Parms
	{
		TArray<AActor*> Instances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Observer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Callable Function to delete all instances of the object\n" },
#endif
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Callable Function to delete all instances of the object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(World_subSystem_Observer_eventDeleteAllInstances_Parms, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::NewProp_Instances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld_subSystem_Observer, nullptr, "DeleteAllInstances", nullptr, nullptr, Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::World_subSystem_Observer_eventDeleteAllInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::World_subSystem_Observer_eventDeleteAllInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorld_subSystem_Observer::execDeleteAllInstances)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Instances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAllInstances(Z_Param_Out_Instances);
	P_NATIVE_END;
}
// End Class UWorld_subSystem_Observer Function DeleteAllInstances

// Begin Class UWorld_subSystem_Observer Function EnsureObjectExists
struct Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Observer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to check if the object exists, handle duplicates, and spawn one if necessary\n" },
#endif
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to check if the object exists, handle duplicates, and spawn one if necessary" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld_subSystem_Observer, nullptr, "EnsureObjectExists", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorld_subSystem_Observer::execEnsureObjectExists)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnsureObjectExists();
	P_NATIVE_END;
}
// End Class UWorld_subSystem_Observer Function EnsureObjectExists

// Begin Class UWorld_subSystem_Observer Function GetAllInstances
struct Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics
{
	struct World_subSystem_Observer_eventGetAllInstances_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Observer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Callable Function to get all instances of the object\n" },
#endif
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Callable Function to get all instances of the object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(World_subSystem_Observer_eventGetAllInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld_subSystem_Observer, nullptr, "GetAllInstances", nullptr, nullptr, Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::World_subSystem_Observer_eventGetAllInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::World_subSystem_Observer_eventGetAllInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorld_subSystem_Observer::execGetAllInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllInstances();
	P_NATIVE_END;
}
// End Class UWorld_subSystem_Observer Function GetAllInstances

// Begin Class UWorld_subSystem_Observer Function GetObserverSubsystem
struct Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics
{
	struct World_subSystem_Observer_eventGetObserverSubsystem_Parms
	{
		UObject* WorldContextObject;
		UWorld_subSystem_Observer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static function to get the subsystem from a Blueprint context\n" },
#endif
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static function to get the subsystem from a Blueprint context" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(World_subSystem_Observer_eventGetObserverSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(World_subSystem_Observer_eventGetObserverSubsystem_Parms, ReturnValue), Z_Construct_UClass_UWorld_subSystem_Observer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld_subSystem_Observer, nullptr, "GetObserverSubsystem", nullptr, nullptr, Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::World_subSystem_Observer_eventGetObserverSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::World_subSystem_Observer_eventGetObserverSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorld_subSystem_Observer::execGetObserverSubsystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld_subSystem_Observer**)Z_Param__Result=UWorld_subSystem_Observer::GetObserverSubsystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UWorld_subSystem_Observer Function GetObserverSubsystem

// Begin Class UWorld_subSystem_Observer
void UWorld_subSystem_Observer::StaticRegisterNativesUWorld_subSystem_Observer()
{
	UClass* Class = UWorld_subSystem_Observer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteAllInstances", &UWorld_subSystem_Observer::execDeleteAllInstances },
		{ "EnsureObjectExists", &UWorld_subSystem_Observer::execEnsureObjectExists },
		{ "GetAllInstances", &UWorld_subSystem_Observer::execGetAllInstances },
		{ "GetObserverSubsystem", &UWorld_subSystem_Observer::execGetObserverSubsystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorld_subSystem_Observer);
UClass* Z_Construct_UClass_UWorld_subSystem_Observer_NoRegister()
{
	return UWorld_subSystem_Observer::StaticClass();
}
struct Z_Construct_UClass_UWorld_subSystem_Observer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A World Subsystem to ensure a specific object exists in the scene and manage multiple instances.\n */" },
#endif
		{ "IncludePath", "World_subSystem_Observer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A World Subsystem to ensure a specific object exists in the scene and manage multiple instances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToEnsure_MetaData[] = {
		{ "Category", "Observer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The class type of the object to monitor/spawn\n" },
#endif
		{ "ModuleRelativePath", "World_subSystem_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the object to monitor/spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectToEnsure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorld_subSystem_Observer_DeleteAllInstances, "DeleteAllInstances" }, // 1906420504
		{ &Z_Construct_UFunction_UWorld_subSystem_Observer_EnsureObjectExists, "EnsureObjectExists" }, // 2200980636
		{ &Z_Construct_UFunction_UWorld_subSystem_Observer_GetAllInstances, "GetAllInstances" }, // 3941516094
		{ &Z_Construct_UFunction_UWorld_subSystem_Observer_GetObserverSubsystem, "GetObserverSubsystem" }, // 1095083277
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorld_subSystem_Observer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorld_subSystem_Observer_Statics::NewProp_ObjectToEnsure = { "ObjectToEnsure", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorld_subSystem_Observer, ObjectToEnsure), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectToEnsure_MetaData), NewProp_ObjectToEnsure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorld_subSystem_Observer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_subSystem_Observer_Statics::NewProp_ObjectToEnsure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_subSystem_Observer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorld_subSystem_Observer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Year4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_subSystem_Observer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorld_subSystem_Observer_Statics::ClassParams = {
	&UWorld_subSystem_Observer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorld_subSystem_Observer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_subSystem_Observer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_subSystem_Observer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorld_subSystem_Observer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorld_subSystem_Observer()
{
	if (!Z_Registration_Info_UClass_UWorld_subSystem_Observer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorld_subSystem_Observer.OuterSingleton, Z_Construct_UClass_UWorld_subSystem_Observer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorld_subSystem_Observer.OuterSingleton;
}
template<> YEAR4_API UClass* StaticClass<UWorld_subSystem_Observer>()
{
	return UWorld_subSystem_Observer::StaticClass();
}
UWorld_subSystem_Observer::UWorld_subSystem_Observer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorld_subSystem_Observer);
UWorld_subSystem_Observer::~UWorld_subSystem_Observer() {}
// End Class UWorld_subSystem_Observer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorld_subSystem_Observer, UWorld_subSystem_Observer::StaticClass, TEXT("UWorld_subSystem_Observer"), &Z_Registration_Info_UClass_UWorld_subSystem_Observer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorld_subSystem_Observer), 125735702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_2237572012(TEXT("/Script/Year4"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
