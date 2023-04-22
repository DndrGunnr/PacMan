// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridBaseNode;
class APacmanPawn;
#ifdef PACMANGRID_PhantomPawn_generated_h
#error "PhantomPawn.generated.h already included, missing '#pragma once' in PhantomPawn.h"
#endif
#define PACMANGRID_PhantomPawn_generated_h

#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_SPARSE_DATA
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerRelativeTarget); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execGetPlayer);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerRelativeTarget); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execGetPlayer);


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantomPawn(); \
	friend struct Z_Construct_UClass_APhantomPawn_Statics; \
public: \
	DECLARE_CLASS(APhantomPawn, AGridPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(APhantomPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPhantomPawn(); \
	friend struct Z_Construct_UClass_APhantomPawn_Statics; \
public: \
	DECLARE_CLASS(APhantomPawn, AGridPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacmanGrid"), NO_API) \
	DECLARE_SERIALIZER(APhantomPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantomPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPawn(APhantomPawn&&); \
	NO_API APhantomPawn(const APhantomPawn&); \
public:


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPawn(APhantomPawn&&); \
	NO_API APhantomPawn(const APhantomPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantomPawn)


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_12_PROLOG
#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_RPC_WRAPPERS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_INCLASS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_SPARSE_DATA \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMANGRID_API UClass* StaticClass<class APhantomPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PacMan_Leaked_main_Source_PacmanGrid_Public_PhantomPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
