// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/TeleportNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleportNode() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_ATeleportNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ATeleportNode();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATeleportNode::StaticRegisterNativesATeleportNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleportNode);
	UClass* Z_Construct_UClass_ATeleportNode_NoRegister()
	{
		return ATeleportNode::StaticClass();
	}
	struct Z_Construct_UClass_ATeleportNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Static_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Static_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Point_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleportNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TeleportNode.h" },
		{ "ModuleRelativePath", "Public/TeleportNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportNode_Statics::NewProp_Static_Mesh_MetaData[] = {
		{ "Category", "TeleportNode" },
		{ "Comment", "//teleport node properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TeleportNode.h" },
		{ "ToolTip", "teleport node properties" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleportNode_Statics::NewProp_Static_Mesh = { "Static_Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleportNode, Static_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleportNode_Statics::NewProp_Static_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportNode_Statics::NewProp_Static_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportNode_Statics::NewProp_Point_Collider_MetaData[] = {
		{ "Category", "TeleportNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TeleportNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleportNode_Statics::NewProp_Point_Collider = { "Point_Collider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleportNode, Point_Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleportNode_Statics::NewProp_Point_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportNode_Statics::NewProp_Point_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleportNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportNode_Statics::NewProp_Static_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportNode_Statics::NewProp_Point_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleportNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleportNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleportNode_Statics::ClassParams = {
		&ATeleportNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleportNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleportNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleportNode()
	{
		if (!Z_Registration_Info_UClass_ATeleportNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleportNode.OuterSingleton, Z_Construct_UClass_ATeleportNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeleportNode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<ATeleportNode>()
	{
		return ATeleportNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleportNode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TeleportNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TeleportNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeleportNode, ATeleportNode::StaticClass, TEXT("ATeleportNode"), &Z_Registration_Info_UClass_ATeleportNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleportNode), 2159833636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TeleportNode_h_187432462(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TeleportNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TeleportNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
