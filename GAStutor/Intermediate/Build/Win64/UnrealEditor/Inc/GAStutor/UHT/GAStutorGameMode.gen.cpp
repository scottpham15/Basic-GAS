// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAStutor/GAStutorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAStutorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GASTUTOR_API UClass* Z_Construct_UClass_AGAStutorGameMode();
GASTUTOR_API UClass* Z_Construct_UClass_AGAStutorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAStutor();
// End Cross Module References

// Begin Class AGAStutorGameMode
void AGAStutorGameMode::StaticRegisterNativesAGAStutorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAStutorGameMode);
UClass* Z_Construct_UClass_AGAStutorGameMode_NoRegister()
{
	return AGAStutorGameMode::StaticClass();
}
struct Z_Construct_UClass_AGAStutorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GAStutorGameMode.h" },
		{ "ModuleRelativePath", "GAStutorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAStutorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGAStutorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GAStutor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAStutorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAStutorGameMode_Statics::ClassParams = {
	&AGAStutorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAStutorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAStutorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAStutorGameMode()
{
	if (!Z_Registration_Info_UClass_AGAStutorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAStutorGameMode.OuterSingleton, Z_Construct_UClass_AGAStutorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAStutorGameMode.OuterSingleton;
}
template<> GASTUTOR_API UClass* StaticClass<AGAStutorGameMode>()
{
	return AGAStutorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAStutorGameMode);
AGAStutorGameMode::~AGAStutorGameMode() {}
// End Class AGAStutorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_GAStutorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAStutorGameMode, AGAStutorGameMode::StaticClass, TEXT("AGAStutorGameMode"), &Z_Registration_Info_UClass_AGAStutorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAStutorGameMode), 2448358606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_GAStutorGameMode_h_2544637692(TEXT("/Script/GAStutor"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_GAStutorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_GAStutorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
