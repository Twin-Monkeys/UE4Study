// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class MYFIRSTPROJ_API UUserProfile : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float maxHP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	FString name;
};
