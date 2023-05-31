// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/PacmanPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanPawn() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanPawn();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_UPacmanWidget_NoRegister();
// End Cross Module References
	void APacmanPawn::StaticRegisterNativesAPacmanPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanPawn);
	UClass* Z_Construct_UClass_APacmanPawn_NoRegister()
	{
		return APacmanPawn::StaticClass();
	}
	struct Z_Construct_UClass_APacmanPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacmanNormalSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PacmanNormalSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacmanPowerSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PacmanPowerSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DotsCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DotsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerDotsCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PowerDotsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FruitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FruitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacmanPawn.h" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIClass_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "//User Interface\n" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
		{ "ToolTip", "User Interface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIClass = { "UIClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, UIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIWidget_MetaData[] = {
		{ "Category", "User Interface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIWidget = { "UIWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, UIWidget), Z_Construct_UClass_UPacmanWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanNormalSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanNormalSpeed = { "PacmanNormalSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, PacmanNormalSpeed), METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanNormalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanNormalSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanPowerSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanPowerSpeed = { "PacmanPowerSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, PacmanPowerSpeed), METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanPowerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanPowerSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_DotsCount_MetaData[] = {
		{ "Category", "PacmanPawn" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_DotsCount = { "DotsCount", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, DotsCount), METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_DotsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_DotsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_PowerDotsCount_MetaData[] = {
		{ "Category", "PacmanPawn" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_PowerDotsCount = { "PowerDotsCount", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, PowerDotsCount), METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PowerDotsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_PowerDotsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_FruitCount_MetaData[] = {
		{ "Category", "PacmanPawn" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_FruitCount = { "FruitCount", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanPawn, FruitCount), METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_FruitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_FruitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_UIWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanNormalSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_PacmanPowerSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_DotsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_PowerDotsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_FruitCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanPawn_Statics::ClassParams = {
		&APacmanPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacmanPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanPawn()
	{
		if (!Z_Registration_Info_UClass_APacmanPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanPawn.OuterSingleton, Z_Construct_UClass_APacmanPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanPawn.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<APacmanPawn>()
	{
		return APacmanPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanPawn);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PacmanPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PacmanPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanPawn, APacmanPawn::StaticClass, TEXT("APacmanPawn"), &Z_Registration_Info_UClass_APacmanPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanPawn), 2263014261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PacmanPawn_h_2154659208(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PacmanPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PacmanPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
