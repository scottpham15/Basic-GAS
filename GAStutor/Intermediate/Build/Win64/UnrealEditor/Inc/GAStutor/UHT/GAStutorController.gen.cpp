// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAStutor/Public/GAStutorController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAStutorController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GASTUTOR_API UClass* Z_Construct_UClass_AGAStutorController();
GASTUTOR_API UClass* Z_Construct_UClass_AGAStutorController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAStutor();
// End Cross Module References

// Begin Class AGAStutorController
void AGAStutorController::StaticRegisterNativesAGAStutorController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAStutorController);
UClass* Z_Construct_UClass_AGAStutorController_NoRegister()
{
	return AGAStutorController::StaticClass();
}
struct Z_Construct_UClass_AGAStutorController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GAStutorController.h" },
		{ "ModuleRelativePath", "Public/GAStutorController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAStutorController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGAStutorController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GAStutor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAStutorController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAStutorController_Statics::ClassParams = {
	&AGAStutorController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAStutorController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAStutorController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAStutorController()
{
	if (!Z_Registration_Info_UClass_AGAStutorController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAStutorController.OuterSingleton, Z_Construct_UClass_AGAStutorController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAStutorController.OuterSingleton;
}
template<> GASTUTOR_API UClass* StaticClass<AGAStutorController>()
{
	return AGAStutorController::StaticClass();
}
AGAStutorController::AGAStutorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAStutorController);
AGAStutorController::~AGAStutorController() {}
// End Class AGAStutorController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_GAStutorController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAStutorController, AGAStutorController::StaticClass, TEXT("AGAStutorController"), &Z_Registration_Info_UClass_AGAStutorController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAStutorController), 3029332372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_GAStutorController_h_3561571813(TEXT("/Script/GAStutor"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_GAStutorController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_GAStutor_Source_GAStutor_Public_GAStutorController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
