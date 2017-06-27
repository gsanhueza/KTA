// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "EnemyComponent.h"


// Sets default values for this component's properties
UEnemyComponent::UEnemyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UEnemyComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UEnemyComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
}

float UEnemyComponent::getDamage()
{
	return enemyDamage;
}

bool UEnemyComponent::isDead()
{
	return dead;
}

bool UEnemyComponent::isAttacking()
{
	return attacking;
}

void UEnemyComponent::ReceiveDamage(float Damage,
	const class UDamageType * DamageType,
	class AController * InstigatedBy,
	AActor * DamageCauser)
{

	UE_LOG(LogTemp, Warning, TEXT("Player getting damage from %s"), *DamageCauser->GetActorClass()->GetFName().ToString())
}




