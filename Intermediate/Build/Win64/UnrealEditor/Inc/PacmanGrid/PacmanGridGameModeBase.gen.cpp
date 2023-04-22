// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/PacmanGridGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanGridGameModeBase() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanGridGameModeBase_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanGridGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
// End Cross Module References
	void APacmanGridGameModeBase::StaticRegisterNativesAPacmanGridGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanGridGameModeBase);
	UClass* Z_Construct_UClass_APacmanGridGameModeBase_NoRegister()
	{
		return APacmanGridGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacmanGridGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanGridGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGridGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacmanGridGameModeBase.h" },
		{ "ModuleRelativePath", "PacmanGridGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanGridGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanGridGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanGridGameModeBase_Statics::ClassParams = {
		&APacmanGridGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APacmanGridGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGridGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanGridGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APacmanGridGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanGridGameModeBase.OuterSingleton, Z_Construct_UClass_APacmanGridGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanGridGameModeBase.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<APacmanGridGameModeBase>()
	{
		return APacmanGridGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanGridGameModeBase);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_PacmanGridGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_PacmanGridGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanGridGameModeBase, APacmanGridGameModeBase::StaticClass, TEXT("APacmanGridGameModeBase"), &Z_Registration_Info_UClass_APacmanGridGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanGridGameModeBase), 1852275127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_PacmanGridGameModeBase_h_2559113563(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_PacmanGridGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_PacmanGridGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
