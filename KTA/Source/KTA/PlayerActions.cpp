// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "PlayerActions.h"


// Sets default values for this component's properties
UPlayerActions::UPlayerActions()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPlayerActions::BeginPlay()
{
	Super::BeginPlay();
	maxHealth = 1000;
	currentHealth = maxHealth;	
}


// Called every frame
void UPlayerActions::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
}

void UPlayerActions::ReceiveDamage(float Damage,
	const class UDamageType * DamageType,
	class AController * InstigatedBy,
	AActor * DamageCauser)
{
	
	UE_LOG(LogTemp, Warning, TEXT("Player getting damage from %s"), *DamageCauser->GetActorClass()->GetFName().ToString())
}


