// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World_subSystem_Observer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UWorld_subSystem_Observer;
#ifdef YEAR4_World_subSystem_Observer_generated_h
#error "World_subSystem_Observer.generated.h already included, missing '#pragma once' in World_subSystem_Observer.h"
#endif
#define YEAR4_World_subSystem_Observer_generated_h

#define FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteAllInstances); \
	DECLARE_FUNCTION(execGetAllInstances); \
	DECLARE_FUNCTION(execGetObserverSubsystem); \
	DECLARE_FUNCTION(execEnsureObjectExists);


#define FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorld_subSystem_Observer(); \
	friend struct Z_Construct_UClass_UWorld_subSystem_Observer_Statics; \
public: \
	DECLARE_CLASS(UWorld_subSystem_Observer, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Year4"), NO_API) \
	DECLARE_SERIALIZER(UWorld_subSystem_Observer)


#define FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorld_subSystem_Observer(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorld_subSystem_Observer(UWorld_subSystem_Observer&&); \
	UWorld_subSystem_Observer(const UWorld_subSystem_Observer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorld_subSystem_Observer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorld_subSystem_Observer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorld_subSystem_Observer) \
	NO_API virtual ~UWorld_subSystem_Observer();


#define FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_11_PROLOG
#define FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEAR4_API UClass* StaticClass<class UWorld_subSystem_Observer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Source_Year4_World_subSystem_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
