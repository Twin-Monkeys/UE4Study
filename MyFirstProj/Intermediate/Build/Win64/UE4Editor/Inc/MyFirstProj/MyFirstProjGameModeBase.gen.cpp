// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstProj/MyFirstProjGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstProjGameModeBase() {}
// Cross Module References
	MYFIRSTPROJ_API UClass* Z_Construct_UClass_AMyFirstProjGameModeBase_NoRegister();
	MYFIRSTPROJ_API UClass* Z_Construct_UClass_AMyFirstProjGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstProj();
// End Cross Module References
	void AMyFirstProjGameModeBase::StaticRegisterNativesAMyFirstProjGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyFirstProjGameModeBase_NoRegister()
	{
		return AMyFirstProjGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstProjGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyFirstProjGameModeBase.h" },
		{ "ModuleRelativePath", "MyFirstProjGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstProjGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::ClassParams = {
		&AMyFirstProjGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFirstProjGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFirstProjGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFirstProjGameModeBase, 2224701348);
	template<> MYFIRSTPROJ_API UClass* StaticClass<AMyFirstProjGameModeBase>()
	{
		return AMyFirstProjGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFirstProjGameModeBase(Z_Construct_UClass_AMyFirstProjGameModeBase, &AMyFirstProjGameModeBase::StaticClass, TEXT("/Script/MyFirstProj"), TEXT("AMyFirstProjGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstProjGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
