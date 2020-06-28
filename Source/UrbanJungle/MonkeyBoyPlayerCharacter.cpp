// Fill out your copyright notice in the Description page of Project Settings.


#include "MonkeyBoyPlayerCharacter.h"

// Sets default values
AMonkeyBoyPlayerCharacter::AMonkeyBoyPlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set player0 to controll this class by default
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Setting Default Movement Force
	ConstantMovementForce = 200.0f;

}

// Called when the game starts or when spawned
void AMonkeyBoyPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	

	
}

// Called every frame
void AMonkeyBoyPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Internal_AddMovementInput(FVector(ConstantMovementForce, 0.0f, 0.0f));
}

// Called to bind functionality to input
void AMonkeyBoyPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// Setting up Action Bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMonkeyBoyPlayerCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMonkeyBoyPlayerCharacter::StopJump);
}



// Set jump flag when key pressed
void AMonkeyBoyPlayerCharacter::StartJump()
{
	bPressedJump = true;
}

// Clear jump flag when key released
void AMonkeyBoyPlayerCharacter::StopJump()
{
	bPressedJump = false;
}

