// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sieve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSieve() {}

// ********** Begin Cross Module References ********************************************************
ASSIGNMENT2_API UClass* Z_Construct_UClass_USieve();
ASSIGNMENT2_API UClass* Z_Construct_UClass_USieve_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Assignment2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USieve *******************************************************************
void USieve::StaticRegisterNativesUSieve()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USieve;
UClass* USieve::GetPrivateStaticClass()
{
	using TClass = USieve;
	if (!Z_Registration_Info_UClass_USieve.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Sieve"),
			Z_Registration_Info_UClass_USieve.InnerSingleton,
			StaticRegisterNativesUSieve,
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
	return Z_Registration_Info_UClass_USieve.InnerSingleton;
}
UClass* Z_Construct_UClass_USieve_NoRegister()
{
	return USieve::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USieve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Sieve.h" },
		{ "ModuleRelativePath", "Public/Sieve.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USieve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USieve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USieve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USieve_Statics::ClassParams = {
	&USieve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USieve_Statics::Class_MetaDataParams), Z_Construct_UClass_USieve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USieve()
{
	if (!Z_Registration_Info_UClass_USieve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USieve.OuterSingleton, Z_Construct_UClass_USieve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USieve.OuterSingleton;
}
USieve::USieve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USieve);
USieve::~USieve() {}
// ********** End Class USieve *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unrealtest_Assignment2_Source_Assignment2_Public_Sieve_h__Script_Assignment2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USieve, USieve::StaticClass, TEXT("USieve"), &Z_Registration_Info_UClass_USieve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USieve), 1411266370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unrealtest_Assignment2_Source_Assignment2_Public_Sieve_h__Script_Assignment2_3488927634(TEXT("/Script/Assignment2"),
	Z_CompiledInDeferFile_FID_unrealtest_Assignment2_Source_Assignment2_Public_Sieve_h__Script_Assignment2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unrealtest_Assignment2_Source_Assignment2_Public_Sieve_h__Script_Assignment2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
