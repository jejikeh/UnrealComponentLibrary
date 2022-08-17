// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IIteractable.h"
#include "Interactable.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UNREALCOMPONENTLIBRARYCORE_API UInteractable : public UActorComponent, public IIIteractable
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void StartInteract_Implementation() override;
	virtual void StopInteract_Implementation() override;

};
