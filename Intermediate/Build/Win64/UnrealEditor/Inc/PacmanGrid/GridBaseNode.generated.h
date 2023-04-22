// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMANGRID_GridBaseNode_generated_h
#error "GridBaseNode.generated.h already included, missing '#pragma once' in GridBaseNode.h"
#endif
#define PACMANGRID_GridBaseNode_generated_h

#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_SPARSE_DATA
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanBeEat);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanBeEat);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridBaseNode(); \
	friend struct Z_Construct_UClass_AGridBaseNode_Statics; \
public: \
	DECLARE_CLASS(AGridBaseNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridBaseNode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAGridBaseNode(); \
	friend struct Z_Construct_UClass_AGridBaseNode_Statics; \
public: \
	DECLARE_CLASS(AGridBaseNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridBaseNode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridBaseNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridBaseNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridBaseNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridBaseNode(AGridBaseNode&&); \
	NO_API AGridBaseNode(const AGridBaseNode&); \
public:


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridBaseNode(AGridBaseNode&&); \
	NO_API AGridBaseNode(const AGridBaseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridBaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridBaseNode)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_16_PROLOG
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_RPC_WRAPPERS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_INCLASS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMANGRID_API UClass* StaticClass<class AGridBaseNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PacMan_Leaked_main_Source_PacmanGrid_Public_GridBaseNode_h


#define FOREACH_ENUM_EWALKABLEID(op) \
	op(NotWalkable) \
	op(Walkable) 
#define FOREACH_ENUM_ENODE_TYPE(op) \
	op(Point) \
	op(Power) \
	op(NotEatable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
