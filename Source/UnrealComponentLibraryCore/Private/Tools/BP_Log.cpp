// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools/BP_Log.h"

void UBP_Log::Info(AActor* selfObject, FString debugMessage, float timeToDisplay)
{
	#if WITH_EDITOR
		if (GEngine != nullptr && GWorld != nullptr)
			GEngine->AddOnScreenDebugMessage(-1, timeToDisplay, FColor::White, FString::Printf(TEXT("Object %s : %s"), *selfObject->GetName(), *debugMessage));
	#endif
}

void UBP_Log::Warn(AActor* selfObject, FString debugMessage, float timeToDisplay)
{
	#if WITH_EDITOR
		if (GEngine != nullptr && GWorld != nullptr)
			GEngine->AddOnScreenDebugMessage(-1, timeToDisplay, FColor::Orange, FString::Printf(TEXT("Object %s : %s"), *selfObject->GetName(), *debugMessage));
	#endif
}

void UBP_Log::Error(AActor* selfObject, FString debugMessage, float timeToDisplay)
{
	#if WITH_EDITOR
		if (GEngine != nullptr && GWorld != nullptr)
			GEngine->AddOnScreenDebugMessage(-1, timeToDisplay, FColor::Red, FString::Printf(TEXT("Object %s : %s"), *selfObject->GetName(), *debugMessage));
	#endif
}