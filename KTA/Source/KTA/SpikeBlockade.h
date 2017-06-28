// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TurretComponent.h"
#include "SpikeBlockade.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KTA_API USpikeBlockade : public UTurretComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpikeBlockade();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
