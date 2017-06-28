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
	Owner = GetOwner();
	shouldTurn = false;
}


// Called every frame
void UEnemyComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );


	if (shouldTurn && !attacking) {
		accumulator += DeltaTime;
		FVector MyLoc = Owner->GetActorLocation();
		FVector TargetLoc = movementDirection.GetLocation();
		FVector Dir = (TargetLoc - MyLoc);
		Dir.Normalize();
		if (accumulator > 2) {
			shouldTurn = false;
			UE_LOG(LogTemp, Warning, TEXT("Finished rotating"))
			accumulator = 0;
		}
		//UE_LOG(LogTemp, Warning, TEXT( "%s velocity"), *Owner->GetVelocity().ToString())
		UCapsuleComponent *movementComponent;
		movementComponent = ((ACharacter *)Owner)->GetCapsuleComponent();

		movementComponent->SetPhysicsLinearVelocity(Dir * 100);
		movementComponent->SetRelativeRotation(FMath::Lerp(Owner->GetActorRotation(), Dir.Rotation(), 0.01f));

	}

	

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
	currentHealth -= Damage;

	if (currentHealth <= 0) {
		dead = true;
	}

}

bool UEnemyComponent::Dead()
{
	return dead;
}

float UEnemyComponent::getCurrentHealth()
{
	return currentHealth;
}

float UEnemyComponent::getMaxHealth()
{
	return maxHealth;
}

void UEnemyComponent::setAttacking(bool attack)
{
	this->attacking = attack;
}

void UEnemyComponent::setNextDirection(AActor * NextDirection)
{
	movementDirection = NextDirection->GetTransform();
	shouldTurn = true;

}





