// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Bloque_ladrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_ladrillo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_ladrillo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_ladrillo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_ladrillo
void ABloque_ladrillo::StaticRegisterNativesABloque_ladrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_ladrillo);
UClass* Z_Construct_UClass_ABloque_ladrillo_NoRegister()
{
	return ABloque_ladrillo::StaticClass();
}
struct Z_Construct_UClass_ABloque_ladrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_ladrillo.h" },
		{ "ModuleRelativePath", "Bloque_ladrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_MetaData[] = {
		{ "Category", "Bloque_ladrillo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque_ladrillo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_ladrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_ladrillo_Statics::NewProp_MallaBloque = { "MallaBloque", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_ladrillo, MallaBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloque_MetaData), NewProp_MallaBloque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_ladrillo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_ladrillo_Statics::NewProp_MallaBloque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_ladrillo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_ladrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_ladrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_ladrillo_Statics::ClassParams = {
	&ABloque_ladrillo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_ladrillo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_ladrillo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_ladrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_ladrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_ladrillo()
{
	if (!Z_Registration_Info_UClass_ABloque_ladrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_ladrillo.OuterSingleton, Z_Construct_UClass_ABloque_ladrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_ladrillo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_ladrillo>()
{
	return ABloque_ladrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_ladrillo);
ABloque_ladrillo::~ABloque_ladrillo() {}
// End Class ABloque_ladrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_ladrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_ladrillo, ABloque_ladrillo::StaticClass, TEXT("ABloque_ladrillo"), &Z_Registration_Info_UClass_ABloque_ladrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_ladrillo), 3613517180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_ladrillo_h_3139202037(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_ladrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_ladrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
