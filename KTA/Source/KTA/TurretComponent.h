// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TurretComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KTA_API UTurretComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTurretComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
	void ReceiveDamage(float Damage,
	    const class UDamageType * DamageType,
		class AController * InstigatedBy,
		AActor * DamageCauser);


	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
		bool Dead();

	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
		float getCurrentHealth();

	UFUNCTION(BlueprintCallable, Exec, Category = "Enemy")
		float getMaxHealth();

protected:

	float maxHealth;
	float currentHealth;
	int turretDamage;
	bool attacking;
	bool dead;
	AActor *Owner;
		
	
};
