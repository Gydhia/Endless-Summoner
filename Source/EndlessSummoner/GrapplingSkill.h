// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skill.h"
#include "GrapplingSkill.generated.h"

/**
 * 
 */
UCLASS()
class UGrapplingSkill : public USkill
{
	GENERATED_BODY()

public:
	float Force = 1000.0f;
	
	void UseSkill() override;
	void PropulseOwner();

	
protected:

private:

	
	
};
