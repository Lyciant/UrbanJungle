// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CableActor.h"

#include "SwingingCable.generated.h"

/**
 * 
 */
UCLASS()
class URBANJUNGLE_API ASwingingCable : public ACableActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	
	// Constructor to set default values for this actor
	ASwingingCable();

	// Creating Reference to a specific Actor for overlapped events
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	AActor* SpecificActor;
	

	// Creating Functions to handle overlapped events
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
