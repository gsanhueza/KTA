// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "CrystalCartComponent.h"


// Sets default values for this component's properties
UCrystalCartComponent::UCrystalCartComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCrystalCartComponent::BeginPlay()
{
	Super::BeginPlay();
	maxHealth = 250;
	currentHealth = maxHealth;
	turretDamage = 0;
	attacking = false;
	dead = false;
	// ...
	
}


// Called every frame
void UCrystalCartComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

