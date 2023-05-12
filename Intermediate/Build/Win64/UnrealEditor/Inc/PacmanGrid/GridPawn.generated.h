// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class AGridBaseNode;
#ifdef PACMANGRID_GridPawn_generated_h
#error "GridPawn.generated.h already included, missing '#pragma once' in GridPawn.h"
#endif
#define PACMANGRID_GridPawn_generated_h

#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_SPARSE_DATA
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetCurrentGridCoords); \
	DECLARE_FUNCTION(execGetTargetNodeCoords); \
	DECLARE_FUNCTION(execGetLastNodeCoords); \
	DECLARE_FUNCTION(execGetTargetNode); \
	DECLARE_FUNCTION(execGetLastNode); \
	DECLARE_FUNCTION(execSetNextNodeByDir);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetCurrentGridCoords); \
	DECLARE_FUNCTION(execGetTargetNodeCoords); \
	DECLARE_FUNCTION(execGetLastNodeCoords); \
	DECLARE_FUNCTION(execGetTargetNode); \
	DECLARE_FUNCTION(execGetLastNode); \
	DECLARE_FUNCTION(execSetNextNodeByDir);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridPawn(); \
	friend struct Z_Construct_UClass_AGridPawn_Statics; \
public: \
	DECLARE_CLASS(AGridPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGridPawn(); \
	friend struct Z_Construct_UClass_AGridPawn_Statics; \
public: \
	DECLARE_CLASS(AGridPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridPawn(AGridPawn&&); \
	NO_API AGridPawn(const AGridPawn&); \
public:


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridPawn(AGridPawn&&); \
	NO_API AGridPawn(const AGridPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_15_PROLOG
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_RPC_WRAPPERS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_INCLASS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMANGRID_API UClass* StaticClass<class AGridPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
