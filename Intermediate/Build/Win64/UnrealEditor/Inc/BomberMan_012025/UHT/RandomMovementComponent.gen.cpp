// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/RandomMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomMovementComponent() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_URandomMovementComponent();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class URandomMovementComponent
void URandomMovementComponent::StaticRegisterNativesURandomMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomMovementComponent);
UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister()
{
	return URandomMovementComponent::StaticClass();
}
struct Z_Construct_UClass_URandomMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RandomMovementComponent.h" },
		{ "ModuleRelativePath", "RandomMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRadius_MetaData[] = {
		{ "ModuleRelativePath", "RandomMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius = { "MovementRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomMovementComponent, MovementRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRadius_MetaData), NewProp_MovementRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomMovementComponent_Statics::NewProp_MovementRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URandomMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomMovementComponent_Statics::ClassParams = {
	&URandomMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URandomMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URandomMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URandomMovementComponent()
{
	if (!Z_Registration_Info_UClass_URandomMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomMovementComponent.OuterSingleton, Z_Construct_UClass_URandomMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URandomMovementComponent.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<URandomMovementComponent>()
{
	return URandomMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URandomMovementComponent);
URandomMovementComponent::~URandomMovementComponent() {}
// End Class URandomMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_RandomMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URandomMovementComponent, URandomMovementComponent::StaticClass, TEXT("URandomMovementComponent"), &Z_Registration_Info_UClass_URandomMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomMovementComponent), 630923832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_RandomMovementComponent_h_3973542562(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_RandomMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_RandomMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
