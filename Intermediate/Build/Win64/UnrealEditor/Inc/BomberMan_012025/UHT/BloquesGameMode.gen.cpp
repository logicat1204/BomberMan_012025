// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloquesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquesGameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloquesGameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloquesGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloquesGameMode
void ABloquesGameMode::StaticRegisterNativesABloquesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquesGameMode);
UClass* Z_Construct_UClass_ABloquesGameMode_NoRegister()
{
	return ABloquesGameMode::StaticClass();
}
struct Z_Construct_UClass_ABloquesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BloquesGameMode.h" },
		{ "ModuleRelativePath", "BloquesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CantidadDeBloques_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cantidad de bloques a spawnear\n" },
#endif
		{ "ModuleRelativePath", "BloquesGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cantidad de bloques a spawnear" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaEntreBloques_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distancia entre bloques\n" },
#endif
		{ "ModuleRelativePath", "BloquesGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distancia entre bloques" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CantidadDeBloquesMadera_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "BloquesGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaEntreBloquesMadera_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distancia entre bloques\n" },
#endif
		{ "ModuleRelativePath", "BloquesGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distancia entre bloques" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CantidadDeBloques;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaEntreBloques;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CantidadDeBloquesMadera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaEntreBloquesMadera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_CantidadDeBloques = { "CantidadDeBloques", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesGameMode, CantidadDeBloques), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CantidadDeBloques_MetaData), NewProp_CantidadDeBloques_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_DistanciaEntreBloques = { "DistanciaEntreBloques", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesGameMode, DistanciaEntreBloques), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaEntreBloques_MetaData), NewProp_DistanciaEntreBloques_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_CantidadDeBloquesMadera = { "CantidadDeBloquesMadera", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesGameMode, CantidadDeBloquesMadera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CantidadDeBloquesMadera_MetaData), NewProp_CantidadDeBloquesMadera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_DistanciaEntreBloquesMadera = { "DistanciaEntreBloquesMadera", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesGameMode, DistanciaEntreBloquesMadera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaEntreBloquesMadera_MetaData), NewProp_DistanciaEntreBloquesMadera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloquesGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_CantidadDeBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_DistanciaEntreBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_CantidadDeBloquesMadera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesGameMode_Statics::NewProp_DistanciaEntreBloquesMadera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloquesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquesGameMode_Statics::ClassParams = {
	&ABloquesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloquesGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquesGameMode()
{
	if (!Z_Registration_Info_UClass_ABloquesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquesGameMode.OuterSingleton, Z_Construct_UClass_ABloquesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquesGameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloquesGameMode>()
{
	return ABloquesGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquesGameMode);
ABloquesGameMode::~ABloquesGameMode() {}
// End Class ABloquesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloquesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquesGameMode, ABloquesGameMode::StaticClass, TEXT("ABloquesGameMode"), &Z_Registration_Info_UClass_ABloquesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquesGameMode), 3783720527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloquesGameMode_h_1795071516(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloquesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloquesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
