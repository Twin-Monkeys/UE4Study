// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyFirstProjGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYFIRSTPROJ_API AMyFirstProjGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
};
