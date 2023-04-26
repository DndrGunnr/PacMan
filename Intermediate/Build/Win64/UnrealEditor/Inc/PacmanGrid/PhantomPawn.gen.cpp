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
// End Cross Module References
	DEFINE_FUNCTION(APhantomPawn::execIsEaten)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEaten();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execIsFrightened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFrightened();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetEaten)
	{
		P_GET_UBOOL(Z_Param_Eaten);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEaten(Z_Param_Eaten);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomPawn::execSetFrightened)
	{
		P_GET_UBOOL(Z_Param_Frightened);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrightened(Z_Param_Frightened);
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
	void APhantomPawn::StaticRegisterNativesAPhantomPawn()
	{
		UClass* Class = APhantomPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayer", &APhantomPawn::execGetPlayer },
			{ "GetPlayerRelativeTarget", &APhantomPawn::execGetPlayerRelativeTarget },
			{ "IsEaten", &APhantomPawn::execIsEaten },
			{ "IsFrightened", &APhantomPawn::execIsFrightened },
			{ "SetEaten", &APhantomPawn::execSetEaten },
			{ "SetFrightened", &APhantomPawn::execSetFrightened },
			{ "SetSpeed", &APhantomPawn::execSetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	struct Z_Construct_UFunction_APhantomPawn_IsEaten_Statics
	{
		struct PhantomPawn_eventIsEaten_Parms
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
	void Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhantomPawn_eventIsEaten_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomPawn_eventIsEaten_Parms), &Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "IsEaten", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::PhantomPawn_eventIsEaten_Parms), Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_IsEaten()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_IsEaten_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics
	{
		struct PhantomPawn_eventIsFrightened_Parms
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
	void Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhantomPawn_eventIsFrightened_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomPawn_eventIsFrightened_Parms), &Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "IsFrightened", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::PhantomPawn_eventIsFrightened_Parms), Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_IsFrightened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_IsFrightened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetEaten_Statics
	{
		struct PhantomPawn_eventSetEaten_Parms
		{
			bool Eaten;
		};
		static void NewProp_Eaten_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Eaten;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::NewProp_Eaten_SetBit(void* Obj)
	{
		((PhantomPawn_eventSetEaten_Parms*)Obj)->Eaten = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::NewProp_Eaten = { "Eaten", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomPawn_eventSetEaten_Parms), &Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::NewProp_Eaten_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::NewProp_Eaten,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetEaten", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::PhantomPawn_eventSetEaten_Parms), Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetEaten()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetEaten_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics
	{
		struct PhantomPawn_eventSetFrightened_Parms
		{
			bool Frightened;
		};
		static void NewProp_Frightened_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Frightened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::NewProp_Frightened_SetBit(void* Obj)
	{
		((PhantomPawn_eventSetFrightened_Parms*)Obj)->Frightened = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::NewProp_Frightened = { "Frightened", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomPawn_eventSetFrightened_Parms), &Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::NewProp_Frightened_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::NewProp_Frightened,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, nullptr, "SetFrightened", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::PhantomPawn_eventSetFrightened_Parms), Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomPawn_SetFrightened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantomPawn_SetFrightened_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhantomPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacmanGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhantomPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhantomPawn_GetPlayer, "GetPlayer" }, // 448858372
		{ &Z_Construct_UFunction_APhantomPawn_GetPlayerRelativeTarget, "GetPlayerRelativeTarget" }, // 1049353664
		{ &Z_Construct_UFunction_APhantomPawn_IsEaten, "IsEaten" }, // 1808964189
		{ &Z_Construct_UFunction_APhantomPawn_IsFrightened, "IsFrightened" }, // 3928022315
		{ &Z_Construct_UFunction_APhantomPawn_SetEaten, "SetEaten" }, // 3132519169
		{ &Z_Construct_UFunction_APhantomPawn_SetFrightened, "SetFrightened" }, // 231074268
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PhantomPawn" },
		{ "ModuleRelativePath", "Public/PhantomPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomPawn, Player), Z_Construct_UClass_APacmanPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhantomPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomPawn_Statics::NewProp_Player,
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
		{ Z_Construct_UClass_APhantomPawn, APhantomPawn::StaticClass, TEXT("APhantomPawn"), &Z_Registration_Info_UClass_APhantomPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhantomPawn), 4078403002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_1204275970(TEXT("/Script/PacmanGrid"),
		Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
