// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/MyGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameStateBase() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMyGameStateBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMyGameStateBase Function GetScore
struct Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics
{
	struct MyGameStateBase_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameStateBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameStateBase, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::MyGameStateBase_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::MyGameStateBase_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameStateBase_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameStateBase_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameStateBase::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AMyGameStateBase Function GetScore

// Begin Class AMyGameStateBase Function SetScore
struct Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics
{
	struct MyGameStateBase_eventSetScore_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameStateBase_eventSetScore_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameStateBase, nullptr, "SetScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::MyGameStateBase_eventSetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::MyGameStateBase_eventSetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameStateBase_SetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameStateBase_SetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameStateBase::execSetScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScore(Z_Param_NewScore);
	P_NATIVE_END;
}
// End Class AMyGameStateBase Function SetScore

// Begin Class AMyGameStateBase
void AMyGameStateBase::StaticRegisterNativesAMyGameStateBase()
{
	UClass* Class = AMyGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AMyGameStateBase::execGetScore },
		{ "SetScore", &AMyGameStateBase::execSetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameStateBase);
UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister()
{
	return AMyGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AMyGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameStateBase.h" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "MyGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameStateBase_GetScore, "GetScore" }, // 4090508903
		{ &Z_Construct_UFunction_AMyGameStateBase_SetScore, "SetScore" }, // 778706112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameStateBase, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_CurrentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams = {
	&AMyGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameStateBase()
{
	if (!Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton, Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMyGameStateBase>()
{
	return AMyGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameStateBase);
AMyGameStateBase::~AMyGameStateBase() {}
// End Class AMyGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MyGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameStateBase, AMyGameStateBase::StaticClass, TEXT("AMyGameStateBase"), &Z_Registration_Info_UClass_AMyGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameStateBase), 2475963481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MyGameStateBase_h_2284866079(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MyGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MyGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
