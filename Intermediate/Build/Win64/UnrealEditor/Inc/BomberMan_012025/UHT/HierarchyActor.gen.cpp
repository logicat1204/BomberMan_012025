// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/HierarchyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchyActor() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AHierarchyActor();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AHierarchyActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AHierarchyActor
void AHierarchyActor::StaticRegisterNativesAHierarchyActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHierarchyActor);
UClass* Z_Construct_UClass_AHierarchyActor_NoRegister()
{
	return AHierarchyActor::StaticClass();
}
struct Z_Construct_UClass_AHierarchyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HierarchyActor.h" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxOne_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTwo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HierarchyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTwo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHierarchyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHierarchyActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent = { "ChildSceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHierarchyActor, ChildSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSceneComponent_MetaData), NewProp_ChildSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne = { "BoxOne", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHierarchyActor, BoxOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxOne_MetaData), NewProp_BoxOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo = { "BoxTwo", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHierarchyActor, BoxTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTwo_MetaData), NewProp_BoxTwo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHierarchyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_ChildSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchyActor_Statics::NewProp_BoxTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHierarchyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHierarchyActor_Statics::ClassParams = {
	&AHierarchyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHierarchyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHierarchyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHierarchyActor()
{
	if (!Z_Registration_Info_UClass_AHierarchyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHierarchyActor.OuterSingleton, Z_Construct_UClass_AHierarchyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHierarchyActor.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AHierarchyActor>()
{
	return AHierarchyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHierarchyActor);
AHierarchyActor::~AHierarchyActor() {}
// End Class AHierarchyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_HierarchyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHierarchyActor, AHierarchyActor::StaticClass, TEXT("AHierarchyActor"), &Z_Registration_Info_UClass_AHierarchyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHierarchyActor), 3146042032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_HierarchyActor_h_3836807913(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_HierarchyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_HierarchyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
