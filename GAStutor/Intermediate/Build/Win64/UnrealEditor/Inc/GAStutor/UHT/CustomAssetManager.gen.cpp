// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAStutor/Public/CustomAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAssetManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
GASTUTOR_API UClass* Z_Construct_UClass_UCustomAssetManager();
GASTUTOR_API UClass* Z_Construct_UClass_UCustomAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAStutor();
// End Cross Module References

// Begin Class UCustomAssetManager
void UCustomAssetManager::StaticRegisterNativesUCustomAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomAssetManager);
UClass* Z_Construct_UClass_UCustomAssetManager_NoRegister()
{
	return UCustomAssetManager::StaticClass();
}
struct Z_Construct_UClass_UCustomAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomAssetManager.h" },
		{ "ModuleRelativePath", "Public/CustomAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GAStutor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomAssetManager_Statics::ClassParams = {
	&UCustomAssetManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomAssetManager()
{
	if (!Z_Registration_Info_UClass_UCustomAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomAssetManager.OuterSingleton, Z_Construct_UClass_UCustomAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomAssetManager.OuterSingleton;
}
template<> GASTUTOR_API UClass* StaticClass<UCustomAssetManager>()
{
	return UCustomAssetManager::StaticClass();
}
UCustomAssetManager::UCustomAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomAssetManager);
UCustomAssetManager::~UCustomAssetManager() {}
// End Class UCustomAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_CustomAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomAssetManager, UCustomAssetManager::StaticClass, TEXT("UCustomAssetManager"), &Z_Registration_Info_UClass_UCustomAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomAssetManager), 1879379105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_CustomAssetManager_h_97211681(TEXT("/Script/GAStutor"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_CustomAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_CustomAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
