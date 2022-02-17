// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrtharCharacter.h"
#include "Components/ActorComponent.h"
#include "Skill.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class USkill : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USkill();

	float Cooldown;
	float LifeCost;
	class AOrtharCharacter* SkillOwner;

	FTimerHandle CooldownTimer;
	void BeginCooldown();
	void OnEndCooldown();

	virtual void UseSkill();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
