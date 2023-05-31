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
	PACMANGRID_API UEnum* Z_Construct_UEnum_PacmanGrid_EState();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	PACMANGRID_API UClass* Z_Construct_UClass_ATestGridGameMode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ATestGridGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridGenerator_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_ABlinky_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AInky_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APinky_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AClyde_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AFruitNode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EState;
	static UEnum* EState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PacmanGrid_EState, Z_Construct_UPackage__Script_PacmanGrid(), TEXT("EState"));
		}
		return Z_Registration_Info_UEnum_EState.OuterSingleton;
	}
	template<> PACMANGRID_API UEnum* StaticEnum<EState>()
	{
		return EState_StaticEnum();
	}
	struct Z_Construct_UEnum_PacmanGrid_EState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PacmanGrid_EState_Statics::Enumerators[] = {
		{ "Scatter", (int64)Scatter },
		{ "Chase", (int64)Chase },
		{ "Frightened", (int64)Frightened },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PacmanGrid_EState_Statics::Enum_MetaDataParams[] = {
		{ "Chase.Name", "Chase" },
		{ "Frightened.Name", "Frightened" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "Scatter.Name", "Scatter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PacmanGrid_EState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PacmanGrid,
		nullptr,
		"EState",
		"EState",
		Z_Construct_UEnum_PacmanGrid_EState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_EState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PacmanGrid_EState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PacmanGrid_EState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PacmanGrid_EState()
	{
		if (!Z_Registration_Info_UEnum_EState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EState.InnerSingleton, Z_Construct_UEnum_PacmanGrid_EState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EState.InnerSingleton;
	}
	DEFINE_FUNCTION(ATestGridGameMode::execFruitDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FruitDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestGridGameMode::execFruitSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FruitSpawn();
		P_NATIVE_END;
	}
	void ATestGridGameMode::StaticRegisterNativesATestGridGameMode()
	{
		UClass* Class = ATestGridGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FruitDestroy", &ATestGridGameMode::execFruitDestroy },
			{ "FruitSpawn", &ATestGridGameMode::execFruitSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestGridGameMode, nullptr, "FruitDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestGridGameMode_FruitDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestGridGameMode_FruitDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestGridGameMode, nullptr, "FruitSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestGridGameMode_FruitSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestGridGameMode_FruitSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGridGameMode);
	UClass* Z_Construct_UClass_ATestGridGameMode_NoRegister()
	{
		return ATestGridGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestGridGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinkyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PinkyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClydeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClydeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacmanClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PacmanClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FruitClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FruitClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkyPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlinkyPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkyPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InkyPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinkyPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PinkyPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClydePtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClydePtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FruitPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FruitPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacmanPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PacmanPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGridGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestGridGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestGridGameMode_FruitDestroy, "FruitDestroy" }, // 2919387814
		{ &Z_Construct_UFunction_ATestGridGameMode_FruitSpawn, "FruitSpawn" }, // 3956241498
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyClass = { "PinkyClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, PinkyClass), Z_Construct_UClass_APinky_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydeClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydeClass = { "ClydeClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, ClydeClass), Z_Construct_UClass_AClyde_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanClass = { "PacmanClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, PacmanClass), Z_Construct_UClass_APacmanPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitClass_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitClass = { "FruitClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, FruitClass), Z_Construct_UClass_AFruitNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "Comment", "//refererence to the ghosts\n" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "ToolTip", "refererence to the ghosts" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPtr = { "BlinkyPtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, BlinkyPtr), Z_Construct_UClass_ABlinky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPtr = { "InkyPtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, InkyPtr), Z_Construct_UClass_AInky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyPtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyPtr = { "PinkyPtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, PinkyPtr), Z_Construct_UClass_APinky_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydePtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydePtr = { "ClydePtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, ClydePtr), Z_Construct_UClass_AClyde_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydePtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitPtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitPtr = { "FruitPtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, FruitPtr), Z_Construct_UClass_AFruitNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanPtr_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "Comment", "//reference to the pacman\n" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
		{ "ToolTip", "reference to the pacman" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanPtr = { "PacmanPtr", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, PacmanPtr), Z_Construct_UClass_AGridPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "TestGridGameMode" },
		{ "ModuleRelativePath", "Public/TestGridGameMode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestGridGameMode, CurrentState), Z_Construct_UEnum_PacmanGrid_EState, METADATA_PARAMS(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_CurrentState_MetaData)) }; // 3665404223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestGridGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GridGeneratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_GField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_BlinkyPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_InkyPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PinkyPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_ClydePtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_FruitPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_PacmanPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestGridGameMode_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGridGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGridGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGridGameMode_Statics::ClassParams = {
		&ATestGridGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestGridGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::EnumInfo[] = {
		{ EState_StaticEnum, TEXT("EState"), &Z_Registration_Info_UEnum_EState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3665404223U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestGridGameMode, ATestGridGameMode::StaticClass, TEXT("ATestGridGameMode"), &Z_Registration_Info_UClass_ATestGridGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGridGameMode), 1493478207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_3490839483(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
