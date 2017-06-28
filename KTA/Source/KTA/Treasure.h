// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "Treasure.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KTA_API UTreasure : public UActorComponent

{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UTreasure();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Check if dead.
	virtual bool isDead();	

	UFUNCTION(BlueprintCallable, Exec, Category = "Treasure")
	void ReceiveDamage(float Damage,
			const class UDamageType * DamageType,
			class AController * InstigatedBy,
			AActor * DamageCauser);

	UFUNCTION(BlueprintCallable, Exec, Category = "Treasure")
	bool Dead();

	
protected:
	int maxHealth;
	int currentHealth;
	bool dead;
};
