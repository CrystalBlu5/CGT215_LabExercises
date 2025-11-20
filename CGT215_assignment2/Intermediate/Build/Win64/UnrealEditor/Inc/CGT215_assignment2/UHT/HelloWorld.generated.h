// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HelloWorld.h"

#ifdef CGT215_ASSIGNMENT2_HelloWorld_generated_h
#error "HelloWorld.generated.h already included, missing '#pragma once' in HelloWorld.h"
#endif
#define CGT215_ASSIGNMENT2_HelloWorld_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHelloWorld **************************************************************
#define FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHelloWorld);


CGT215_ASSIGNMENT2_API UClass* Z_Construct_UClass_UHelloWorld_NoRegister();

#define FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHelloWorld(); \
	friend struct Z_Construct_UClass_UHelloWorld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CGT215_ASSIGNMENT2_API UClass* Z_Construct_UClass_UHelloWorld_NoRegister(); \
public: \
	DECLARE_CLASS2(UHelloWorld, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CGT215_assignment2"), Z_Construct_UClass_UHelloWorld_NoRegister) \
	DECLARE_SERIALIZER(UHelloWorld)


#define FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelloWorld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHelloWorld(UHelloWorld&&) = delete; \
	UHelloWorld(const UHelloWorld&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelloWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelloWorld); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelloWorld) \
	NO_API virtual ~UHelloWorld();


#define FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_12_PROLOG
#define FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_INCLASS_NO_PURE_DECLS \
	FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHelloWorld;

// ********** End Class UHelloWorld ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
