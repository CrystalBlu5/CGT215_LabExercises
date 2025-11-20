// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGT215_assignment2/HelloWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHelloWorld() {}

// ********** Begin Cross Module References ********************************************************
CGT215_ASSIGNMENT2_API UClass* Z_Construct_UClass_UHelloWorld();
CGT215_ASSIGNMENT2_API UClass* Z_Construct_UClass_UHelloWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CGT215_assignment2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHelloWorld Function HelloWorld ******************************************
struct Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics
{
	struct HelloWorld_eventHelloWorld_Parms
	{
		FString name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HelloWorld" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static UE::String HelloWorld();\n" },
#endif
		{ "ModuleRelativePath", "HelloWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static UE::String HelloWorld();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelloWorld_eventHelloWorld_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HelloWorld_eventHelloWorld_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHelloWorld, nullptr, "HelloWorld", Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::HelloWorld_eventHelloWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::HelloWorld_eventHelloWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHelloWorld_HelloWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHelloWorld_HelloWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHelloWorld::execHelloWorld)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHelloWorld::HelloWorld(Z_Param_name);
	P_NATIVE_END;
}
// ********** End Class UHelloWorld Function HelloWorld ********************************************

// ********** Begin Class UHelloWorld **************************************************************
void UHelloWorld::StaticRegisterNativesUHelloWorld()
{
	UClass* Class = UHelloWorld::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HelloWorld", &UHelloWorld::execHelloWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHelloWorld;
UClass* UHelloWorld::GetPrivateStaticClass()
{
	using TClass = UHelloWorld;
	if (!Z_Registration_Info_UClass_UHelloWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HelloWorld"),
			Z_Registration_Info_UClass_UHelloWorld.InnerSingleton,
			StaticRegisterNativesUHelloWorld,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHelloWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_UHelloWorld_NoRegister()
{
	return UHelloWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHelloWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HelloWorld.h" },
		{ "ModuleRelativePath", "HelloWorld.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHelloWorld_HelloWorld, "HelloWorld" }, // 1849589874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelloWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHelloWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CGT215_assignment2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHelloWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHelloWorld_Statics::ClassParams = {
	&UHelloWorld::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHelloWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_UHelloWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHelloWorld()
{
	if (!Z_Registration_Info_UClass_UHelloWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHelloWorld.OuterSingleton, Z_Construct_UClass_UHelloWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHelloWorld.OuterSingleton;
}
UHelloWorld::UHelloWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHelloWorld);
UHelloWorld::~UHelloWorld() {}
// ********** End Class UHelloWorld ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h__Script_CGT215_assignment2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHelloWorld, UHelloWorld::StaticClass, TEXT("UHelloWorld"), &Z_Registration_Info_UClass_UHelloWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHelloWorld), 491092317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h__Script_CGT215_assignment2_3499557197(TEXT("/Script/CGT215_assignment2"),
	Z_CompiledInDeferFile_FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h__Script_CGT215_assignment2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealtest_CGT215_assignment2_Source_CGT215_assignment2_HelloWorld_h__Script_CGT215_assignment2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
