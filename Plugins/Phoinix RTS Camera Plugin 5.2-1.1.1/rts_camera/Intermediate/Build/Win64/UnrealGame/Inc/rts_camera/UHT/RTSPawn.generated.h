// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RTSPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef RTS_CAMERA_RTSPawn_generated_h
#error "RTSPawn.generated.h already included, missing '#pragma once' in RTSPawn.h"
#endif
#define RTS_CAMERA_RTSPawn_generated_h

#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execRotateCamera); \
	DECLARE_FUNCTION(execYMovement); \
	DECLARE_FUNCTION(execXMovement);


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCamera); \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execRotateCamera); \
	DECLARE_FUNCTION(execYMovement); \
	DECLARE_FUNCTION(execXMovement);


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_ACCESSORS
#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSPawn(); \
	friend struct Z_Construct_UClass_ARTSPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rts_camera"), NO_API) \
	DECLARE_SERIALIZER(ARTSPawn)


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARTSPawn(); \
	friend struct Z_Construct_UClass_ARTSPawn_Statics; \
public: \
	DECLARE_CLASS(ARTSPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/rts_camera"), NO_API) \
	DECLARE_SERIALIZER(ARTSPawn)


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPawn(ARTSPawn&&); \
	NO_API ARTSPawn(const ARTSPawn&); \
public: \
	NO_API virtual ~ARTSPawn();


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTSPawn(ARTSPawn&&); \
	NO_API ARTSPawn(const ARTSPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTSPawn) \
	NO_API virtual ~ARTSPawn();


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_14_PROLOG
#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_ACCESSORS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_INCLASS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_ACCESSORS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_CAMERA_API UClass* StaticClass<class ARTSPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_rts_camera_Source_rts_camera_Public_RTSPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
