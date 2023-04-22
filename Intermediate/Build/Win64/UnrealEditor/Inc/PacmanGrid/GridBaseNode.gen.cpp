// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/GridBaseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridBaseNode() {}
// Cross Module References
	PACMANGRID_API UEnum* Z_Construct_UEnum_PacmanGrid_EWalkableId();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	PACMANGRID_API UEnum* Z_Construct_UEnum_PacmanGrid_ENode_type();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWalkableId;
	static UEnum* EWalkableId_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWalkableId.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWalkableId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PacmanGrid_EWalkableId, Z_Construct_UPackage__Script_PacmanGrid(), TEXT("EWalkableId"));
		}
		return Z_Registration_Info_UEnum_EWalkableId.OuterSingleton;
	}
	template<> PACMANGRID_API UEnum* StaticEnum<EWalkableId>()
	{
		return EWalkableId_StaticEnum();
	}
	struct Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enumerators[] = {
		{ "NotWalkable", (int64)NotWalkable },
		{ "Walkable", (int64)Walkable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
		{ "NotWalkable.Name", "NotWalkable" },
		{ "Walkable.Name", "Walkable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PacmanGrid,
		nullptr,
		"EWalkableId",
		"EWalkableId",
		Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PacmanGrid_EWalkableId()
	{
		if (!Z_Registration_Info_UEnum_EWalkableId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWalkableId.InnerSingleton, Z_Construct_UEnum_PacmanGrid_EWalkableId_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWalkableId.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENode_type;
	static UEnum* ENode_type_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENode_type.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENode_type.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PacmanGrid_ENode_type, Z_Construct_UPackage__Script_PacmanGrid(), TEXT("ENode_type"));
		}
		return Z_Registration_Info_UEnum_ENode_type.OuterSingleton;
	}
	template<> PACMANGRID_API UEnum* StaticEnum<ENode_type>()
	{
		return ENode_type_StaticEnum();
	}
	struct Z_Construct_UEnum_PacmanGrid_ENode_type_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enumerators[] = {
		{ "Point", (int64)Point },
		{ "Power", (int64)Power },
		{ "NotEatable", (int64)NotEatable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
		{ "NotEatable.Name", "NotEatable" },
		{ "Point.Name", "Point" },
		{ "Power.Name", "Power" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PacmanGrid,
		nullptr,
		"ENode_type",
		"ENode_type",
		Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PacmanGrid_ENode_type()
	{
		if (!Z_Registration_Info_UEnum_ENode_type.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENode_type.InnerSingleton, Z_Construct_UEnum_PacmanGrid_ENode_type_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENode_type.InnerSingleton;
	}
	DEFINE_FUNCTION(AGridBaseNode::execCanBeEat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeEat();
		P_NATIVE_END;
	}
	void AGridBaseNode::StaticRegisterNativesAGridBaseNode()
	{
		UClass* Class = AGridBaseNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeEat", &AGridBaseNode::execCanBeEat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics
	{
		struct GridBaseNode_eventCanBeEat_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridBaseNode_eventCanBeEat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridBaseNode_eventCanBeEat_Parms), &Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridBaseNode, nullptr, "CanBeEat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::GridBaseNode_eventCanBeEat_Parms), Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridBaseNode_CanBeEat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridBaseNode_CanBeEat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridBaseNode);
	UClass* Z_Construct_UClass_AGridBaseNode_NoRegister()
	{
		return AGridBaseNode::StaticClass();
	}
	struct Z_Construct_UClass_AGridBaseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EEatable_id_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EEatable_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EWalkableId_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EWalkableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileGridPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileGridPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordinatesPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordinatesPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEatable_MetaData[];
#endif
		static void NewProp_IsEatable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridBaseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridBaseNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridBaseNode_CanBeEat, "CanBeEat" }, // 2740723291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridBaseNode.h" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EEatable_id_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "Comment", "//added to differentiate eatable from not eatable actors\n//by default set to not eatable\n" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
		{ "ToolTip", "added to differentiate eatable from not eatable actors\nby default set to not eatable" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EEatable_id = { "EEatable_id", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, EEatable_id), Z_Construct_UEnum_PacmanGrid_ENode_type, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EEatable_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EEatable_id_MetaData)) }; // 1133069732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EWalkableId_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EWalkableId = { "EWalkableId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, EWalkableId), Z_Construct_UEnum_PacmanGrid_EWalkableId, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EWalkableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EWalkableId_MetaData)) }; // 757967720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileGridPosition_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "Comment", "// (x, y) position of the tile\n" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
		{ "ToolTip", "(x, y) position of the tile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileGridPosition = { "TileGridPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, TileGridPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileGridPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileGridPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileCoordinatesPosition_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "Comment", "// FVector position of the tile\n" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
		{ "ToolTip", "FVector position of the tile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileCoordinatesPosition = { "TileCoordinatesPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, TileCoordinatesPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileCoordinatesPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileCoordinatesPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
	void Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable_SetBit(void* Obj)
	{
		((AGridBaseNode*)Obj)->IsEatable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable = { "IsEatable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridBaseNode), &Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridBaseNode_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "GridBaseNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridBaseNode_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridBaseNode, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::NewProp_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridBaseNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EEatable_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_EWalkableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileGridPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_TileCoordinatesPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_IsEatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridBaseNode_Statics::NewProp_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridBaseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridBaseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridBaseNode_Statics::ClassParams = {
		&AGridBaseNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridBaseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridBaseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridBaseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridBaseNode()
	{
		if (!Z_Registration_Info_UClass_AGridBaseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridBaseNode.OuterSingleton, Z_Construct_UClass_AGridBaseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridBaseNode.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<AGridBaseNode>()
	{
		return AGridBaseNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridBaseNode);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::EnumInfo[] = {
		{ EWalkableId_StaticEnum, TEXT("EWalkableId"), &Z_Registration_Info_UEnum_EWalkableId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 757967720U) },
		{ ENode_type_StaticEnum, TEXT("ENode_type"), &Z_Registration_Info_UEnum_ENode_type, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1133069732U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridBaseNode, AGridBaseNode::StaticClass, TEXT("AGridBaseNode"), &Z_Registration_Info_UClass_AGridBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridBaseNode), 1941782221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_65947966(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
