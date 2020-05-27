// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyFirstProjGameModeBase.h"

void AMyFirstProjGameModeBase::BeginPlay() 
{
	Super::BeginPlay(); 

	FString name = "jin";
	int age = 29;
	float height = 160.f;

	TArray<FStringFormatArg> formatArgs;
	formatArgs.Add(name);
	formatArgs.Add(age);
	formatArgs.Add(height);

	FString formatted = FString::Format(
		TEXT("My name is {0}, age is {1}, height is {2}."), formatArgs);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *formatted);
}