// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingingCable.h"

ASwingingCable::ASwingingCable() {
	// Register Functions For Events

	OnActorBeginOverlap.AddDynamic(this, &ASwingingCable::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASwingingCable::OnOverlapEnd);

}

void ASwingingCable::BeginPlay() {
	Super::BeginPlay();
}


void ASwingingCable::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor) {

	}
}

void ASwingingCable::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
}
