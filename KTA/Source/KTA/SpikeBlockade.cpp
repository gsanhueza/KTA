// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "SpikeBlockade.h"


// Sets default values for this component's properties
USpikeBlockade::USpikeBlockade()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USpikeBlockade::BeginPlay()
{
	Super::BeginPlay();
	maxHealth = 500;
	currentHealth = maxHealth;
	turretDamage = 0;
	attacking = false;
	dead = false;
	// ...
	
}


// Called every frame
void USpikeBlockade::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

