// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "TurretComponent.h"


// Sets default values for this component's properties
UTurretComponent::UTurretComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTurretComponent::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();
	
}


// Called every frame
void UTurretComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

void UTurretComponent::ReceiveDamage(float Damage,
	const class UDamageType * DamageType,
	class AController * InstigatedBy,
	AActor * DamageCauser)
{
	currentHealth -= Damage;

	if (currentHealth <= 0) {
		dead = true;
	}

}

bool UTurretComponent::Dead()
{
	return dead;
}

float UTurretComponent::getCurrentHealth()
{
	return currentHealth;
}

float UTurretComponent::getMaxHealth()
{
	return maxHealth;
}


