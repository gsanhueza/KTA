// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PlayerActions.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KTA_API UPlayerActions : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerActions();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION(BlueprintCallable, Exec, Category = "Player")
	void ReceiveDamage(float Damage,
		const class UDamageType * DamageType,
		class AController * InstigatedBy,
		AActor * DamageCauser);


private:

	
	int currentHealth;
	int maxHealth;
		
	
};
