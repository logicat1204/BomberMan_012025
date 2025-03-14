// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Bloque_madera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_madera() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_madera();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_madera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_madera
void ABloque_madera::StaticRegisterNativesABloque_madera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_madera);
UClass* Z_Construct_UClass_ABloque_madera_NoRegister()
{
	return ABloque_madera::StaticClass();
}
struct Z_Construct_UClass_ABloque_madera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_madera.h" },
		{ "ModuleRelativePath", "Bloque_madera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Bloque_madera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente de malla est\xef\xbf\xbdtica\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque_madera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente de malla est\xef\xbf\xbdtica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocidadRotacion_MetaData[] = {
		{ "Category", "Rotacion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Velocidad de rotaci\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "Bloque_madera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocidad de rotaci\xef\xbf\xbdn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocidadRotacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_madera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_madera_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_madera, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_madera_Statics::NewProp_VelocidadRotacion = { "VelocidadRotacion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque_madera, VelocidadRotacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocidadRotacion_MetaData), NewProp_VelocidadRotacion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_madera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_madera_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_madera_Statics::NewProp_VelocidadRotacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_madera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_madera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_madera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_madera_Statics::ClassParams = {
	&ABloque_madera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_madera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_madera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_madera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_madera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_madera()
{
	if (!Z_Registration_Info_UClass_ABloque_madera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_madera.OuterSingleton, Z_Construct_UClass_ABloque_madera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_madera.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_madera>()
{
	return ABloque_madera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_madera);
ABloque_madera::~ABloque_madera() {}
// End Class ABloque_madera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_madera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_madera, ABloque_madera::StaticClass, TEXT("ABloque_madera"), &Z_Registration_Info_UClass_ABloque_madera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_madera), 3482195299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_madera_h_1130799471(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_madera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Bloque_madera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
