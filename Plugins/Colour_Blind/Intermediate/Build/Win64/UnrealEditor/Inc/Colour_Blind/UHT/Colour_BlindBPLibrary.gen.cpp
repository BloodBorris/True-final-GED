// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Colour_Blind/Public/Colour_BlindBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColour_BlindBPLibrary() {}

// Begin Cross Module References
COLOUR_BLIND_API UClass* Z_Construct_UClass_UColour_BlindBPLibrary();
COLOUR_BLIND_API UClass* Z_Construct_UClass_UColour_BlindBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Colour_Blind();
// End Cross Module References

// Begin Class UColour_BlindBPLibrary Function ApplyMaterialToPostProcessVolumeByType
struct Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics
{
	struct Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms
	{
		APostProcessVolume* SelectedPostProcessVolume;
		UMaterialInstance* ProtanopiaMaterial;
		UMaterialInstance* DeuteranopiaMaterial;
		UMaterialInstance* TritanopiaMaterial;
		FString ColorBlindnessType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ColorBlindness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Applies one of the provided materials to a selected PostProcessVolume based on the input string.\n     * @param SelectedPostProcessVolume - The PostProcessVolume to which the material will be applied.\n     * @param ProtanopiaMaterial - Material for Protanopia.\n     * @param DeuteranopiaMaterial - Material for Deuteranopia.\n     * @param TritanopiaMaterial - Material for Tritanopia.\n     * @param ColorBlindnessType - Type of color blindness (Protanopia, Deuteranopia, Tritanopia).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Colour_BlindBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies one of the provided materials to a selected PostProcessVolume based on the input string.\n@param SelectedPostProcessVolume - The PostProcessVolume to which the material will be applied.\n@param ProtanopiaMaterial - Material for Protanopia.\n@param DeuteranopiaMaterial - Material for Deuteranopia.\n@param TritanopiaMaterial - Material for Tritanopia.\n@param ColorBlindnessType - Type of color blindness (Protanopia, Deuteranopia, Tritanopia)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlindnessType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPostProcessVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProtanopiaMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeuteranopiaMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TritanopiaMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorBlindnessType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_SelectedPostProcessVolume = { "SelectedPostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms, SelectedPostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_ProtanopiaMaterial = { "ProtanopiaMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms, ProtanopiaMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_DeuteranopiaMaterial = { "DeuteranopiaMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms, DeuteranopiaMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_TritanopiaMaterial = { "TritanopiaMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms, TritanopiaMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_ColorBlindnessType = { "ColorBlindnessType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms, ColorBlindnessType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlindnessType_MetaData), NewProp_ColorBlindnessType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_SelectedPostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_ProtanopiaMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_DeuteranopiaMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_TritanopiaMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::NewProp_ColorBlindnessType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColour_BlindBPLibrary, nullptr, "ApplyMaterialToPostProcessVolumeByType", nullptr, nullptr, Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::Colour_BlindBPLibrary_eventApplyMaterialToPostProcessVolumeByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColour_BlindBPLibrary::execApplyMaterialToPostProcessVolumeByType)
{
	P_GET_OBJECT(APostProcessVolume,Z_Param_SelectedPostProcessVolume);
	P_GET_OBJECT(UMaterialInstance,Z_Param_ProtanopiaMaterial);
	P_GET_OBJECT(UMaterialInstance,Z_Param_DeuteranopiaMaterial);
	P_GET_OBJECT(UMaterialInstance,Z_Param_TritanopiaMaterial);
	P_GET_PROPERTY(FStrProperty,Z_Param_ColorBlindnessType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UColour_BlindBPLibrary::ApplyMaterialToPostProcessVolumeByType(Z_Param_SelectedPostProcessVolume,Z_Param_ProtanopiaMaterial,Z_Param_DeuteranopiaMaterial,Z_Param_TritanopiaMaterial,Z_Param_ColorBlindnessType);
	P_NATIVE_END;
}
// End Class UColour_BlindBPLibrary Function ApplyMaterialToPostProcessVolumeByType

// Begin Class UColour_BlindBPLibrary Function DisablePostProcessMaterial
struct Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics
{
	struct Colour_BlindBPLibrary_eventDisablePostProcessMaterial_Parms
	{
		APostProcessVolume* SelectedPostProcessVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ColorBlindness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Disables any applied post-process material by clearing the WeightedBlendables array.\n     * @param SelectedPostProcessVolume - The PostProcessVolume to clear.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Colour_BlindBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disables any applied post-process material by clearing the WeightedBlendables array.\n@param SelectedPostProcessVolume - The PostProcessVolume to clear." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPostProcessVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::NewProp_SelectedPostProcessVolume = { "SelectedPostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Colour_BlindBPLibrary_eventDisablePostProcessMaterial_Parms, SelectedPostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::NewProp_SelectedPostProcessVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColour_BlindBPLibrary, nullptr, "DisablePostProcessMaterial", nullptr, nullptr, Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::Colour_BlindBPLibrary_eventDisablePostProcessMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::Colour_BlindBPLibrary_eventDisablePostProcessMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColour_BlindBPLibrary::execDisablePostProcessMaterial)
{
	P_GET_OBJECT(APostProcessVolume,Z_Param_SelectedPostProcessVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UColour_BlindBPLibrary::DisablePostProcessMaterial(Z_Param_SelectedPostProcessVolume);
	P_NATIVE_END;
}
// End Class UColour_BlindBPLibrary Function DisablePostProcessMaterial

// Begin Class UColour_BlindBPLibrary
void UColour_BlindBPLibrary::StaticRegisterNativesUColour_BlindBPLibrary()
{
	UClass* Class = UColour_BlindBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMaterialToPostProcessVolumeByType", &UColour_BlindBPLibrary::execApplyMaterialToPostProcessVolumeByType },
		{ "DisablePostProcessMaterial", &UColour_BlindBPLibrary::execDisablePostProcessMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColour_BlindBPLibrary);
UClass* Z_Construct_UClass_UColour_BlindBPLibrary_NoRegister()
{
	return UColour_BlindBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UColour_BlindBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Colour_BlindBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Colour_BlindBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UColour_BlindBPLibrary_ApplyMaterialToPostProcessVolumeByType, "ApplyMaterialToPostProcessVolumeByType" }, // 3409566812
		{ &Z_Construct_UFunction_UColour_BlindBPLibrary_DisablePostProcessMaterial, "DisablePostProcessMaterial" }, // 3209986813
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColour_BlindBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UColour_BlindBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Colour_Blind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColour_BlindBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColour_BlindBPLibrary_Statics::ClassParams = {
	&UColour_BlindBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColour_BlindBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UColour_BlindBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UColour_BlindBPLibrary()
{
	if (!Z_Registration_Info_UClass_UColour_BlindBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColour_BlindBPLibrary.OuterSingleton, Z_Construct_UClass_UColour_BlindBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColour_BlindBPLibrary.OuterSingleton;
}
template<> COLOUR_BLIND_API UClass* StaticClass<UColour_BlindBPLibrary>()
{
	return UColour_BlindBPLibrary::StaticClass();
}
UColour_BlindBPLibrary::UColour_BlindBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UColour_BlindBPLibrary);
UColour_BlindBPLibrary::~UColour_BlindBPLibrary() {}
// End Class UColour_BlindBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Plugins_Colour_Blind_Source_Colour_Blind_Public_Colour_BlindBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UColour_BlindBPLibrary, UColour_BlindBPLibrary::StaticClass, TEXT("UColour_BlindBPLibrary"), &Z_Registration_Info_UClass_UColour_BlindBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColour_BlindBPLibrary), 526512063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Plugins_Colour_Blind_Source_Colour_Blind_Public_Colour_BlindBPLibrary_h_1719178861(TEXT("/Script/Colour_Blind"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Plugins_Colour_Blind_Source_Colour_Blind_Public_Colour_BlindBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_GitHub_Game_Engine_assignment_Plugins_Colour_Blind_Source_Colour_Blind_Public_Colour_BlindBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
