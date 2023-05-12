// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/Inky.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInky() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_AInky_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AInky();
	PACMANGRID_API UClass* Z_Construct_UClass_APhantomPawn();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode_NoRegister();
// End Cross Module References
	void AInky::StaticRegisterNativesAInky()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInky);
	UClass* Z_Construct_UClass_AInky_NoRegister()
	{
		return AInky::StaticClass();
	}
	struct Z_Construct_UClass_AInky_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatterTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScatterTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInky_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhantomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInky_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Inky.h" },
		{ "ModuleRelativePath", "Public/Inky.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInky_Statics::NewProp_ScatterTarget_MetaData[] = {
		{ "Category", "Inky" },
		{ "ModuleRelativePath", "Public/Inky.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInky_Statics::NewProp_ScatterTarget = { "ScatterTarget", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInky, ScatterTarget), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInky_Statics::NewProp_ScatterTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInky_Statics::NewProp_ScatterTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInky_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInky_Statics::NewProp_ScatterTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInky_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInky>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInky_Statics::ClassParams = {
		&AInky::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInky_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInky_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInky_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInky_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInky()
	{
		if (!Z_Registration_Info_UClass_AInky.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInky.OuterSingleton, Z_Construct_UClass_AInky_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInky.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<AInky>()
	{
		return AInky::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInky);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_Inky_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_Inky_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInky, AInky::StaticClass, TEXT("AInky"), &Z_Registration_Info_UClass_AInky, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInky), 3823355459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_Inky_h_348217296(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_Inky_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_Inky_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
