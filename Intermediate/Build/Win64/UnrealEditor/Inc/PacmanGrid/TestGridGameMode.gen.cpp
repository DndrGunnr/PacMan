// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/TestGridGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGridGameMode() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_ATestGridGameMode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ATestGridGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridGenerator_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ABlinky_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AInky_NoRegister();
// End Cross Module References
	void ATestGridGameMode::StaticRegisterNativesATestGridGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGridGameMode);
	UClass* Z_Construct_UClass_ATestGridGameMode_NoRegister()
	{
		return ATestGridGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestGridGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GridGeneratorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlinkyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InkyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkyPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlinkyPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkyPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InkyPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGridGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestGridGameMode.h" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "Comment", "// TSubclassOf is a template class that provides UClass type safety.\n" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "ToolTip", "TSubclassOf is a template class that provides UClass type safety." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass = { "GridGeneratorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, GridGeneratorClass), Z_Construct_UClass_AGridGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "Comment", "// reference to a GameField object\n" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "ToolTip", "reference to a GameField object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField = { "GField", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, GField), Z_Construct_UClass_AGridGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass = { "BlinkyClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, BlinkyClass), Z_Construct_UClass_ABlinky_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass = { "InkyClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, InkyClass), Z_Construct_UClass_AInky_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPawn_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPawn = { "BlinkyPawn", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, BlinkyPawn), Z_Construct_UClass_ABlinky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPawn_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPawn = { "InkyPawn", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, InkyPawn), Z_Construct_UClass_AInky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestGridGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGridGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGridGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGridGameMode_Statics::ClassParams = {
		&ATestGridGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestGridGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestGridGameMode()
	{
		if (!Z_Registration_Info_UClass_ATestGridGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestGridGameMode.OuterSingleton, Z_Construct_UClass_ATestGridGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestGridGameMode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<ATestGridGameMode>()
	{
		return ATestGridGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGridGameMode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestGridGameMode, ATestGridGameMode::StaticClass, TEXT("ATestGridGameMode"), &Z_Registration_Info_UClass_ATestGridGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGridGameMode), 629908477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_619993902(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
