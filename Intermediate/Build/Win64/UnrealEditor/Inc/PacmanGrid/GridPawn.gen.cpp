// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacmanGrid/Public/GridPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPawn() {}
// Cross Module References
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PacmanGrid();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridBaseNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PACMANGRID_API UClass* Z_Construct_UClass_ATestGridGameMode_NoRegister();
	PACMANGRID_API UClass* Z_Construct_UClass_AGridGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGridPawn::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridPawn::execGetTargetNodeCoords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetTargetNodeCoords();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridPawn::execGetLastNodeCoords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastNodeCoords();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridPawn::execGetTargetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridBaseNode**)Z_Param__Result=P_THIS->GetTargetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridPawn::execGetLastNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGridBaseNode**)Z_Param__Result=P_THIS->GetLastNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridPawn::execSetNextNodeByDir)
	{
		P_GET_STRUCT(FVector,Z_Param_InputDir);
		P_GET_UBOOL(Z_Param_ForceLast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextNodeByDir(Z_Param_InputDir,Z_Param_ForceLast);
		P_NATIVE_END;
	}
	void AGridPawn::StaticRegisterNativesAGridPawn()
	{
		UClass* Class = AGridPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastNode", &AGridPawn::execGetLastNode },
			{ "GetLastNodeCoords", &AGridPawn::execGetLastNodeCoords },
			{ "GetTargetNode", &AGridPawn::execGetTargetNode },
			{ "GetTargetNodeCoords", &AGridPawn::execGetTargetNodeCoords },
			{ "OnOverlapBegin", &AGridPawn::execOnOverlapBegin },
			{ "SetNextNodeByDir", &AGridPawn::execSetNextNodeByDir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridPawn_GetLastNode_Statics
	{
		struct GridPawn_eventGetLastNode_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventGetLastNode_Parms, ReturnValue), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "GetLastNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::GridPawn_eventGetLastNode_Parms), Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_GetLastNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_GetLastNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics
	{
		struct GridPawn_eventGetLastNodeCoords_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventGetLastNodeCoords_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "GetLastNodeCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::GridPawn_eventGetLastNodeCoords_Parms), Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_GetLastNodeCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_GetLastNodeCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics
	{
		struct GridPawn_eventGetTargetNode_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventGetTargetNode_Parms, ReturnValue), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "GetTargetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::GridPawn_eventGetTargetNode_Parms), Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_GetTargetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_GetTargetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics
	{
		struct GridPawn_eventGetTargetNodeCoords_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventGetTargetNodeCoords_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "GetTargetNodeCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::GridPawn_eventGetTargetNodeCoords_Parms), Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics
	{
		struct GridPawn_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GridPawn_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridPawn_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::GridPawn_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics
	{
		struct GridPawn_eventSetNextNodeByDir_Parms
		{
			FVector InputDir;
			bool ForceLast;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDir;
		static void NewProp_ForceLast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceLast;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_InputDir = { "InputDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridPawn_eventSetNextNodeByDir_Parms, InputDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_ForceLast_SetBit(void* Obj)
	{
		((GridPawn_eventSetNextNodeByDir_Parms*)Obj)->ForceLast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_ForceLast = { "ForceLast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridPawn_eventSetNextNodeByDir_Parms), &Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_ForceLast_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_InputDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::NewProp_ForceLast,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ForceLast", "false" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridPawn, nullptr, "SetNextNodeByDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::GridPawn_eventSetNextNodeByDir_Parms), Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridPawn_SetNextNodeByDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridPawn_SetNextNodeByDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridPawn);
	UClass* Z_Construct_UClass_AGridPawn_NoRegister()
	{
		return AGridPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGridPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValidInputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastValidInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptedDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheGridGen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheGridGen;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridGenTMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGenTMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGenTMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GridGenTMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanMove_MetaData[];
#endif
		static void NewProp_CanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridPawn_GetLastNode, "GetLastNode" }, // 4027354517
		{ &Z_Construct_UFunction_AGridPawn_GetLastNodeCoords, "GetLastNodeCoords" }, // 2865100288
		{ &Z_Construct_UFunction_AGridPawn_GetTargetNode, "GetTargetNode" }, // 3065117669
		{ &Z_Construct_UFunction_AGridPawn_GetTargetNodeCoords, "GetTargetNodeCoords" }, // 864479247
		{ &Z_Construct_UFunction_AGridPawn_OnOverlapBegin, "OnOverlapBegin" }, // 3286657051
		{ &Z_Construct_UFunction_AGridPawn_SetNextNodeByDir, "SetNextNodeByDir" }, // 2915750296
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GridPawn.h" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_LastInputDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_LastInputDirection = { "LastInputDirection", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, LastInputDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastInputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastInputDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_LastValidInputDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_LastValidInputDirection = { "LastValidInputDirection", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, LastValidInputDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastValidInputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastValidInputDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentMovementSpeed = { "CurrentMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, CurrentMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_NormalMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_NormalMovementSpeed = { "NormalMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, NormalMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_NormalMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_NormalMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_PowerMovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_PowerMovementSpeed = { "PowerMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, PowerMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_PowerMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_PowerMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_AcceptedDistance_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_AcceptedDistance = { "AcceptedDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, AcceptedDistance), METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_AcceptedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_AcceptedDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentGridCoords_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentGridCoords = { "CurrentGridCoords", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, CurrentGridCoords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentGridCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentGridCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, GameMode), Z_Construct_UClass_ATestGridGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_TheGridGen_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_TheGridGen = { "TheGridGen", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, TheGridGen), Z_Construct_UClass_AGridGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_TheGridGen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_TheGridGen_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_ValueProp = { "GridGenTMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_Key_KeyProp = { "GridGenTMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap = { "GridGenTMap", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, GridGenTMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_NextNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_NextNode = { "NextNode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, NextNode), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_NextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_NextNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_TargetNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_TargetNode = { "TargetNode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, TargetNode), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_TargetNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_TargetNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_LastNode_MetaData[] = {
		{ "Category", "Nodes" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_LastNode = { "LastNode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, LastNode), Z_Construct_UClass_AGridBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_LastNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridPawn, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "GridPawn" },
		{ "ModuleRelativePath", "Public/GridPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((AGridPawn*)Obj)->CanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridPawn), &Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_LastInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_LastValidInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_NormalMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_PowerMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_AcceptedDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_CurrentGridCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_GameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_TheGridGen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_GridGenTMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_NextNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_TargetNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_LastNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_Collider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridPawn_Statics::NewProp_CanMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPawn_Statics::ClassParams = {
		&AGridPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridPawn()
	{
		if (!Z_Registration_Info_UClass_AGridPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPawn.OuterSingleton, Z_Construct_UClass_AGridPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridPawn.OuterSingleton;
	}
	template<> PACMANGRID_API UClass* StaticClass<AGridPawn>()
	{
		return AGridPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPawn);
	struct Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridPawn, AGridPawn::StaticClass, TEXT("AGridPawn"), &Z_Registration_Info_UClass_AGridPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPawn), 1029272312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_952979022(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
