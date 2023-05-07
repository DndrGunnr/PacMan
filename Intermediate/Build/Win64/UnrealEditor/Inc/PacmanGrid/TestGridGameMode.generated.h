// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMANGRID_TestGridGameMode_generated_h
#error "TestGridGameMode.generated.h already included, missing '#pragma once' in TestGridGameMode.h"
#endif
#define PACMANGRID_TestGridGameMode_generated_h

#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_SPARSE_DATA
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_RPC_WRAPPERS
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGridGameMode(); \
	friend struct Z_Construct_UClass_ATestGridGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestGridGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(ATestGridGameMode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesATestGridGameMode(); \
	friend struct Z_Construct_UClass_ATestGridGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestGridGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(ATestGridGameMode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGridGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGridGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGridGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGridGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGridGameMode(ATestGridGameMode&&); \
	NO_API ATestGridGameMode(const ATestGridGameMode&); \
public:


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGridGameMode(ATestGridGameMode&&); \
	NO_API ATestGridGameMode(const ATestGridGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGridGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGridGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestGridGameMode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_25_PROLOG
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_RPC_WRAPPERS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_INCLASS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMANGRID_API UClass* StaticClass<class ATestGridGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PacMan_Leaked_main_Source_PacmanGrid_Public_TestGridGameMode_h


#define FOREACH_ENUM_ESTATE(op) \
	op(Scatter) \
	op(Chase) \
	op(Frightened) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
