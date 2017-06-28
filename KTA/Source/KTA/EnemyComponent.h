// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "EnemyComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KTA_API UEnemyComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;
	
	// Damage from enemy.
	virtual float getDamage();

	// Check if dead.
	virtual bool isDead();

	// Check if attacking.
	virtual bool isAttacking();

	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
	void ReceiveDamage(float Damage,
	     const class UDamageType * DamageType,
		 class AController * InstigatedBy,
		 AActor * DamageCauser);

	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
	bool Dead();


protected:
	int maxHealth;
	int currentHealth;
	int enemyDamage;	
	bool attacking;
	bool dead;
	float velocity;
	FVector movementDirection;
};
