// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/UE4CookbookGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CookbookGameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGradas_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AUE4CookbookGameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AUE4CookbookGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AUE4CookbookGameMode Function DestroyActorFunction
struct Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CookbookGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CookbookGameMode, nullptr, "DestroyActorFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUE4CookbookGameMode::execDestroyActorFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyActorFunction();
	P_NATIVE_END;
}
// End Class AUE4CookbookGameMode Function DestroyActorFunction

// Begin Class AUE4CookbookGameMode
void AUE4CookbookGameMode::StaticRegisterNativesAUE4CookbookGameMode()
{
	UClass* Class = AUE4CookbookGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyActorFunction", &AUE4CookbookGameMode::execDestroyActorFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE4CookbookGameMode);
UClass* Z_Construct_UClass_AUE4CookbookGameMode_NoRegister()
{
	return AUE4CookbookGameMode::StaticClass();
}
struct Z_Construct_UClass_AUE4CookbookGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE4CookbookGameMode.h" },
		{ "ModuleRelativePath", "UE4CookbookGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "UE4CookbookGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4CookbookGameMode_DestroyActorFunction, "DestroyActorFunction" }, // 2264201169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CookbookGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CookbookGameMode_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE4CookbookGameMode, SpawnedActor), Z_Construct_UClass_AGradas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4CookbookGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CookbookGameMode_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUE4CookbookGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE4CookbookGameMode_Statics::ClassParams = {
	&AUE4CookbookGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUE4CookbookGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE4CookbookGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE4CookbookGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE4CookbookGameMode()
{
	if (!Z_Registration_Info_UClass_AUE4CookbookGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE4CookbookGameMode.OuterSingleton, Z_Construct_UClass_AUE4CookbookGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE4CookbookGameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AUE4CookbookGameMode>()
{
	return AUE4CookbookGameMode::StaticClass();
}
AUE4CookbookGameMode::AUE4CookbookGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CookbookGameMode);
AUE4CookbookGameMode::~AUE4CookbookGameMode() {}
// End Class AUE4CookbookGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_UE4CookbookGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE4CookbookGameMode, AUE4CookbookGameMode::StaticClass, TEXT("AUE4CookbookGameMode"), &Z_Registration_Info_UClass_AUE4CookbookGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE4CookbookGameMode), 1203887326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_UE4CookbookGameMode_h_3711601108(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_UE4CookbookGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_UE4CookbookGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
