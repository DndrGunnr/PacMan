// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/WallNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallNode() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_AWallNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AWallNode();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
// End Cross Module References
	void AWallNode::StaticRegisterNativesAWallNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWallNode);
	UClass* Z_Construct_UClass_AWallNode_NoRegister()
	{
		return AWallNode::StaticClass();
	}
	struct Z_Construct_UClass_AWallNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WallNode.h" },
		{ "ModuleRelativePath", "Public/WallNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWallNode_Statics::ClassParams = {
		&AWallNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWallNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallNode()
	{
		if (!Z_Registration_Info_UClass_AWallNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWallNode.OuterSingleton, Z_Construct_UClass_AWallNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWallNode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<AWallNode>()
	{
		return AWallNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallNode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_WallNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_WallNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWallNode, AWallNode::StaticClass, TEXT("AWallNode"), &Z_Registration_Info_UClass_AWallNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWallNode), 3553061151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_WallNode_h_2674748187(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_WallNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_WallNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
