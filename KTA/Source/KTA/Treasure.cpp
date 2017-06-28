// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "Treasure.h"

// Sets default values for this component's properties
UTreasure::UTreasure()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UTreasure::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UTreasure::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UTreasure::isDead()
{
	return dead;
}

void UTreasure::ReceiveDamage(float Damage,
	const class UDamageType * DamageType,
	class AController * InstigatedBy,
	AActor * DamageCauser)
{

	UE_LOG(LogTemp, Warning, TEXT("Treasure getting damage from %s"), *DamageCauser->GetActorClass()->GetFName().ToString())
}

bool UTreasure::Dead()
{
	return dead;
}
