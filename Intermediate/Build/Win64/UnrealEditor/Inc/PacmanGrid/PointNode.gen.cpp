// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/PointNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointNode() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_APointNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APointNode();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APointNode::StaticRegisterNativesAPointNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointNode);
	UClass* Z_Construct_UClass_APointNode_NoRegister()
	{
		return APointNode::StaticClass();
	}
	struct Z_Construct_UClass_APointNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isEaten_MetaData[];
#endif
		static void NewProp_isEaten_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isEaten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Point_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Point_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PointNode.h" },
		{ "ModuleRelativePath", "Public/PointNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointNode_Statics::NewProp_isEaten_MetaData[] = {
		{ "Category", "PointNode" },
		{ "Comment", "//mi serve per capire se il punto ? gi? stato mangiato (condizione nel pacman node)\n" },
		{ "ModuleRelativePath", "Public/PointNode.h" },
		{ "ToolTip", "mi serve per capire se il punto ? gi? stato mangiato (condizione nel pacman node)" },
	};
#endif
	void Z_Construct_UClass_APointNode_Statics::NewProp_isEaten_SetBit(void* Obj)
	{
		((APointNode*)Obj)->isEaten = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APointNode_Statics::NewProp_isEaten = { "isEaten", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APointNode), &Z_Construct_UClass_APointNode_Statics::NewProp_isEaten_SetBit, METADATA_PARAMS(Z_Construct_UClass_APointNode_Statics::NewProp_isEaten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointNode_Statics::NewProp_isEaten_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointNode_Statics::NewProp_Point_Mesh_MetaData[] = {
		{ "Category", "PointNode" },
		{ "Comment", "//aggiungiamo le propriet? del point node\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointNode.h" },
		{ "ToolTip", "aggiungiamo le propriet? del point node" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointNode_Statics::NewProp_Point_Mesh = { "Point_Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointNode, Point_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointNode_Statics::NewProp_Point_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointNode_Statics::NewProp_Point_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointNode_Statics::NewProp_Point_Collider_MetaData[] = {
		{ "Category", "PointNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointNode_Statics::NewProp_Point_Collider = { "Point_Collider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointNode, Point_Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointNode_Statics::NewProp_Point_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointNode_Statics::NewProp_Point_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointNode_Statics::NewProp_isEaten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointNode_Statics::NewProp_Point_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointNode_Statics::NewProp_Point_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointNode_Statics::ClassParams = {
		&APointNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointNode()
	{
		if (!Z_Registration_Info_UClass_APointNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointNode.OuterSingleton, Z_Construct_UClass_APointNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointNode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<APointNode>()
	{
		return APointNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointNode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PointNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PointNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointNode, APointNode::StaticClass, TEXT("APointNode"), &Z_Registration_Info_UClass_APointNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointNode), 1373964665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PointNode_h_624404008(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PointNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PointNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
