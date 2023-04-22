// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/GridGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridGenerator() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_AGridGenerator_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AGridGenerator::StaticRegisterNativesAGridGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridGenerator);
	UClass* Z_Construct_UClass_AGridGenerator_NoRegister()
	{
		return AGridGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGridGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WallNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PowerNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PointNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabyrinthNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LabyrinthNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NullNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NullNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkyNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlinkyNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinkyNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PinkyNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkyNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InkyNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClydeNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClydeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostRespawnNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GhostRespawnNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeleportNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostAreaNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GhostAreaNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvisibleWallNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InvisibleWallNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostExitNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GhostExitNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridGenerator.h" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_WallNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_WallNode = { "WallNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, WallNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_WallNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_WallNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_PowerNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_PowerNode = { "PowerNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, PowerNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PowerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PowerNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_PointNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_PointNode = { "PointNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, PointNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PointNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PointNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_LabyrinthNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_LabyrinthNode = { "LabyrinthNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, LabyrinthNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_LabyrinthNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_LabyrinthNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_NullNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_NullNode = { "NullNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, NullNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_NullNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_NullNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_CharacterNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_CharacterNode = { "CharacterNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, CharacterNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_CharacterNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_CharacterNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_BlinkyNode_MetaData[] = {
		{ "Category", "Ghosts" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_BlinkyNode = { "BlinkyNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, BlinkyNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_BlinkyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_BlinkyNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_PinkyNode_MetaData[] = {
		{ "Category", "Ghosts" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_PinkyNode = { "PinkyNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, PinkyNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PinkyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_PinkyNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_InkyNode_MetaData[] = {
		{ "Category", "Ghosts" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_InkyNode = { "InkyNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, InkyNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_InkyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_InkyNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_ClydeNode_MetaData[] = {
		{ "Category", "Ghosts" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_ClydeNode = { "ClydeNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, ClydeNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_ClydeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_ClydeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostRespawnNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostRespawnNode = { "GhostRespawnNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, GhostRespawnNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostRespawnNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostRespawnNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_TeleportNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_TeleportNode = { "TeleportNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, TeleportNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_TeleportNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_TeleportNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostAreaNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostAreaNode = { "GhostAreaNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, GhostAreaNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostAreaNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostAreaNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_InvisibleWallNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_InvisibleWallNode = { "InvisibleWallNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, InvisibleWallNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_InvisibleWallNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_InvisibleWallNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostExitNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostExitNode = { "GhostExitNode", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, GhostExitNode), Z_Construct_UClass_AGridBaseNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostExitNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostExitNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "GridGenerator" },
		{ "Comment", "// tile size\n" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
		{ "ToolTip", "tile size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, TileSize), METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_TileSize_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid_MetaData[] = {
		{ "Category", "GridGenerator" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridGenerator_Statics::NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "GridGenerator" },
		{ "ModuleRelativePath", "Public/GridGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridGenerator_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridGenerator, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::NewProp_SpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::NewProp_SpawnOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_WallNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_PowerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_PointNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_LabyrinthNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_NullNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_CharacterNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_BlinkyNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_PinkyNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_InkyNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_ClydeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostRespawnNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_TeleportNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostAreaNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_InvisibleWallNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_GhostExitNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_Grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridGenerator_Statics::NewProp_SpawnOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridGenerator_Statics::ClassParams = {
		&AGridGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridGenerator()
	{
		if (!Z_Registration_Info_UClass_AGridGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridGenerator.OuterSingleton, Z_Construct_UClass_AGridGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridGenerator.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<AGridGenerator>()
	{
		return AGridGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridGenerator);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridGenerator, AGridGenerator::StaticClass, TEXT("AGridGenerator"), &Z_Registration_Info_UClass_AGridGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridGenerator), 2036437088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridGenerator_h_2206044796(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
