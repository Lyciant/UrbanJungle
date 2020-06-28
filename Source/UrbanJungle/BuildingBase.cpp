// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingBase.h"


// Sets default values
ABuildingBase::ABuildingBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a dummy root component we can attach things to.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	BuildingMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMeshComponent"));
	BuildingMeshComponent->SetupAttachment(RootComponent);
	
	BuildingTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BuildingBoxTrigger"));
	BuildingTriggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABuildingBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


