// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/PhantomPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomPawn() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_APhantomPawn_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_APhantomPawn();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	PACMANGRID_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APhantomPawn::execSetEatenTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEatenTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetFrightenedTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrightenedTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetScatterTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScatterTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetChaseTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChaseTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execGetPlayerRelativeTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridBaseNode**)Z_Param__Result=P_THIS->GetPlayerRelativeTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execGetPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APacmanPawn**)Z_Param__Result=P_THIS->GetPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execEatenMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EatenMode();
		P_NATIVE_END;
	}
	void APhantomPawn::StaticRegisterNativesAPhantomPawn()
	{
		UClass* Class = APhantomPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EatenMode", &APhantomPawn::execEatenMode },
			{ "GetPlayer", &APhantomPawn::execGetPlayer },
			{ "GetPlayerRelativeTarget", &APhantomPawn::execGetPlayerRelativeTarget },
			{ "SetChaseTarget", &APhantomPawn::execSetChaseTarget },
			{ "SetEatenTarget", &APhantomPawn::execSetEatenTarget },
			{ "SetFrightenedTarget", &APhantomPawn::execSetFrightenedTarget },
			{ "SetScatterTarget", &APhantomPawn::execSetScatterTarget },
			{ "SetSpeed", &APhantomPawn::execSetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhantomPawn_EatenMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_EatenMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//eaten asyinchronous state\n" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "eaten asyinchronous state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_EatenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "EatenMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_EatenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_EatenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_EatenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_EatenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics
	{
		struct PhantomPawn_eventGetPlayer_Parms
		{
			APacmanPawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomPawn_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_APacmanPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "GetPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::PhantomPawn_eventGetPlayer_Parms), Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics
	{
		struct PhantomPawn_eventGetPlayerRelativeTarget_Parms
		{
			AGridBaseNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomPawn_eventGetPlayerRelativeTarget_Parms, ReturnValue), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "GetPlayerRelativeTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::PhantomPawn_eventGetPlayerRelativeTarget_Parms), Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetChaseTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetChaseTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetChaseTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetEatenTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetEatenTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetEatenTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//this does not need to be virtual becouse it is the same for all ghosts\n" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "this does not need to be virtual becouse it is the same for all ghosts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetFrightenedTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetScatterTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetScatterTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetScatterTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics
	{
		struct PhantomPawn_eventSetSpeed_Parms
		{
			float Speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomPawn_eventSetSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::PhantomPawn_eventSetSpeed_Parms), Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhantomPawn);
	UClass* Z_Construct_UClass_APhantomPawn_NoRegister()
	{
		return APhantomPawn::StaticClass();
	}
	struct Z_Construct_UClass_APhantomPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshBlue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshWhite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshWhite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLeftEye_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshLeftEye;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshRightEye_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshRightEye;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaseGhostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseGhostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrightenedGhostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrightenedGhostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HouseGhostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HouseGhostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EatenGhostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EatenGhostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhantomPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhantomPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhantomPawn_EatenMode, "EatenMode" }, // 1854551801
		{ &Z_Construct_UFunction_APhantomPawn_GetPlayer, "GetPlayer" }, // 448858372
		{ &Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget, "GetPlayerRelativeTarget" }, // 1049353664
		{ &Z_Construct_UFunction_APhantomPawn_SetChaseTarget, "SetChaseTarget" }, // 844093314
		{ &Z_Construct_UFunction_APhantomPawn_SetEatenTarget, "SetEatenTarget" }, // 351362860
		{ &Z_Construct_UFunction_APhantomPawn_SetFrightenedTarget, "SetFrightenedTarget" }, // 1714007769
		{ &Z_Construct_UFunction_APhantomPawn_SetScatterTarget, "SetScatterTarget" }, // 2369553349
		{ &Z_Construct_UFunction_APhantomPawn_SetSpeed, "SetSpeed" }, // 1205749200
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PhantomPawn.h" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshBlue_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "Comment", "//frightened meshes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "frightened meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshBlue = { "StaticMeshBlue", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, StaticMeshBlue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshWhite_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshWhite = { "StaticMeshWhite", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, StaticMeshWhite), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshWhite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshWhite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshLeftEye_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "Comment", "//eaten meshes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "eaten meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshLeftEye = { "StaticMeshLeftEye", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, StaticMeshLeftEye), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshLeftEye_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshLeftEye_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshRightEye_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshRightEye = { "StaticMeshRightEye", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, StaticMeshRightEye), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshRightEye_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshRightEye_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_ChaseGhostSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//movement speed\n" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_ChaseGhostSpeed = { "ChaseGhostSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, ChaseGhostSpeed), METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_ChaseGhostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_ChaseGhostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_FrightenedGhostSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_FrightenedGhostSpeed = { "FrightenedGhostSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, FrightenedGhostSpeed), METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_FrightenedGhostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_FrightenedGhostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_HouseGhostSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_HouseGhostSpeed = { "HouseGhostSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, HouseGhostSpeed), METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_HouseGhostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_HouseGhostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_EatenGhostSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_EatenGhostSpeed = { "EatenGhostSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, EatenGhostSpeed), METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_EatenGhostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_EatenGhostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_RespawnTarget_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "Comment", "//To Do: Add logic for elroy mode\n" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
		{ "ToolTip", "To Do: Add logic for elroy mode" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_RespawnTarget = { "RespawnTarget", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, RespawnTarget), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_RespawnTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_RespawnTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, Player), Z_Construct_UClass_APacmanPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_GridPawn_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_GridPawn = { "GridPawn", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, GridPawn), Z_Construct_UClass_AGridPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_GridPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_GridPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhantomPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshWhite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshLeftEye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_StaticMeshRightEye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_ChaseGhostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_FrightenedGhostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_HouseGhostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_EatenGhostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_RespawnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_GridPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhantomPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhantomPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhantomPawn_Statics::ClassParams = {
		&APhantomPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhantomPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhantomPawn()
	{
		if (!Z_Registration_Info_UClass_APhantomPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhantomPawn.OuterSingleton, Z_Construct_UClass_APhantomPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhantomPawn.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<APhantomPawn>()
	{
		return APhantomPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomPawn);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhantomPawn, APhantomPawn::StaticClass, TEXT("APhantomPawn"), &Z_Registration_Info_UClass_APhantomPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhantomPawn), 1113158496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_2780631538(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
