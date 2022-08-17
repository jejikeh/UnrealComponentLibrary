// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_Log.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCOMPONENTLIBRARYCORE_API UBP_Log : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "UCL|Tools")
		static void Info(AActor* selfObject, FString debugMessage, float timeDisplay = 5);

	UFUNCTION(BlueprintCallable, Category = "UCL|Tools")
		static void Warn(AActor* selfObject, FString debugMessage, float timeDisplay = 5);

	UFUNCTION(BlueprintCallable, Category = "UCL|Tools")
		static void Error(AActor* selfObject, FString debugMessage, float timeDisplay = 5);
};
