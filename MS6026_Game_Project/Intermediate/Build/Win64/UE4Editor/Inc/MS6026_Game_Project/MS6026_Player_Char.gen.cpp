// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MS6026_Game_Project/MS6026_Player_Char.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMS6026_Player_Char() {}
// Cross Module References
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Player_Char_NoRegister();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Player_Char();
	MS6026_GAME_PROJECT_API UClass* Z_Construct_UClass_AMS6026_Character_Master();
	UPackage* Z_Construct_UPackage__Script_MS6026_Game_Project();
// End Cross Module References
	void AMS6026_Player_Char::StaticRegisterNativesAMS6026_Player_Char()
	{
	}
	UClass* Z_Construct_UClass_AMS6026_Player_Char_NoRegister()
	{
		return AMS6026_Player_Char::StaticClass();
	}
	struct Z_Construct_UClass_AMS6026_Player_Char_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMS6026_Player_Char_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMS6026_Character_Master,
		(UObject* (*)())Z_Construct_UPackage__Script_MS6026_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMS6026_Player_Char_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MS6026_Player_Char.h" },
		{ "ModuleRelativePath", "MS6026_Player_Char.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMS6026_Player_Char_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMS6026_Player_Char>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMS6026_Player_Char_Statics::ClassParams = {
		&AMS6026_Player_Char::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMS6026_Player_Char_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMS6026_Player_Char_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMS6026_Player_Char()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMS6026_Player_Char_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMS6026_Player_Char, 2022755503);
	template<> MS6026_GAME_PROJECT_API UClass* StaticClass<AMS6026_Player_Char>()
	{
		return AMS6026_Player_Char::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMS6026_Player_Char(Z_Construct_UClass_AMS6026_Player_Char, &AMS6026_Player_Char::StaticClass, TEXT("/Script/MS6026_Game_Project"), TEXT("AMS6026_Player_Char"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMS6026_Player_Char);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
