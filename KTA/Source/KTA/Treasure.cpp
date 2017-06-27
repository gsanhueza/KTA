// Fill out your copyright notice in the Description page of Project Settings.

#include "KTA.h"
#include "Treasure.h"


// Sets default values
ATreasure::ATreasure()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void interactWithActor(Actor a)
{
	e.damage(this);                                            // FIXME Así no parece ser como dañar la gema
}

void receiveDamage(int dmg)
{
	HP -= dmg;
	if (HP < 0)
	{
		HP = 0;
	}
}

// Called when the game starts or when spawned
void ATreasure::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATreasure::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

