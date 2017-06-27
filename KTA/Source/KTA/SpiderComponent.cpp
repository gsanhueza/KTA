// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "SpiderComponent.h"



// Sets default values for this component's properties
USpiderComponent::USpiderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}



// Called when the game starts
void USpiderComponent::BeginPlay()
{
	Super::BeginPlay();

	attacking = false;
	dead = false;
	maxHealth = 20;
	currentHealth = 0;
	enemyDamage = 2;		
}

