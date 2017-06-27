// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "BearComponent.h"


// Sets default values for this component's properties
UBearComponent::UBearComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBearComponent::BeginPlay()
{
	Super::BeginPlay();

	attacking = false;
	dead = false;
	maxHealth = 20;
	currentHealth = 0;
	enemyDamage = 2;
	velocity = 3;

	movementDirection = FVector(1, 0, 0);
	
}


// Called every frame
void UBearComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

