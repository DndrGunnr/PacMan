// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/LabyrinthNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabyrinthNode() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_ALabyrinthNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ALabyrinthNode();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
// End Cross Module References
	void ALabyrinthNode::StaticRegisterNativesALabyrinthNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALabyrinthNode);
	UClass* Z_Construct_UClass_ALabyrinthNode_NoRegister()
	{
		return ALabyrinthNode::StaticClass();
	}
	struct Z_Construct_UClass_ALabyrinthNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALabyrinthNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabyrinthNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LabyrinthNode.h" },
		{ "ModuleRelativePath", "Public/LabyrinthNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabyrinthNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabyrinthNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALabyrinthNode_Statics::ClassParams = {
		&ALabyrinthNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALabyrinthNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALabyrinthNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALabyrinthNode()
	{
		if (!Z_Registration_Info_UClass_ALabyrinthNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALabyrinthNode.OuterSingleton, Z_Construct_UClass_ALabyrinthNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALabyrinthNode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<ALabyrinthNode>()
	{
		return ALabyrinthNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALabyrinthNode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_LabyrinthNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_LabyrinthNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALabyrinthNode, ALabyrinthNode::StaticClass, TEXT("ALabyrinthNode"), &Z_Registration_Info_UClass_ALabyrinthNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALabyrinthNode), 472610324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_LabyrinthNode_h_1574685131(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_LabyrinthNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_LabyrinthNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
