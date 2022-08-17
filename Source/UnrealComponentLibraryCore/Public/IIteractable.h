// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IIteractable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIIteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UNREALCOMPONENTLIBRARYCORE_API IIIteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interfaces")
		void StartInteract();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interfaces")
		void StopInteract();
		
};
