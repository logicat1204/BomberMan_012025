// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ActorSpawnerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerComponent() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UActorSpawnerComponent();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UActorSpawnerComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UActorSpawnerComponent Function Spawn
struct Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cookbook" },
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawnerComponent, nullptr, "Spawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UActorSpawnerComponent_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorSpawnerComponent::execSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Spawn();
	P_NATIVE_END;
}
// End Class UActorSpawnerComponent Function Spawn

// Begin Class UActorSpawnerComponent
void UActorSpawnerComponent::StaticRegisterNativesUActorSpawnerComponent()
{
	UClass* Class = UActorSpawnerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Spawn", &UActorSpawnerComponent::execSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSpawnerComponent);
UClass* Z_Construct_UClass_UActorSpawnerComponent_NoRegister()
{
	return UActorSpawnerComponent::StaticClass();
}
struct Z_Construct_UClass_UActorSpawnerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorSpawnerComponent.h" },
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "ActorSpawnerComponent" },
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSpawnerComponent_Spawn, "Spawn" }, // 2543255743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawnerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorSpawnerComponent, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorSpawnerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawnerComponent_Statics::ClassParams = {
	&UActorSpawnerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorSpawnerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorSpawnerComponent()
{
	if (!Z_Registration_Info_UClass_UActorSpawnerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSpawnerComponent.OuterSingleton, Z_Construct_UClass_UActorSpawnerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorSpawnerComponent.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UActorSpawnerComponent>()
{
	return UActorSpawnerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawnerComponent);
UActorSpawnerComponent::~UActorSpawnerComponent() {}
// End Class UActorSpawnerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ActorSpawnerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorSpawnerComponent, UActorSpawnerComponent::StaticClass, TEXT("UActorSpawnerComponent"), &Z_Registration_Info_UClass_UActorSpawnerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSpawnerComponent), 2204588201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ActorSpawnerComponent_h_3268653649(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ActorSpawnerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ActorSpawnerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
