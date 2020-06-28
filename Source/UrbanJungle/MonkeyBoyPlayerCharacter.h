// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MonkeyBoyPlayerCharacter.generated.h"

UCLASS()
class URBANJUNGLE_API AMonkeyBoyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonkeyBoyPlayerCharacter();

	UPROPERTY(EditAnywhere)
	float ConstantMovementForce;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Set jumping flag on key pressed
	UFUNCTION()
	void StartJump();

	// Clear jumping flag on key release
	UFUNCTION()
	void StopJump();
};
