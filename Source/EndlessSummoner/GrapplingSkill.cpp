// Fill out your copyright notice in the Description page of Project Settings.


#include "GrapplingSkill.h"

#include "GameFramework/CharacterMovementComponent.h"


void UGrapplingSkill::UseSkill()
{
	Super::UseSkill();
	UE_LOG(LogTemp, Warning, TEXT("Activated grapple skill"));
	this->PropulseOwner();
}

void UGrapplingSkill::PropulseOwner()
{
	//USkeletalMeshComponent* OwnerMesh = SkillOwner->GetMesh();
	
	if(ACharacter* OwnerChar = Cast<ACharacter>(GetOwner())) {
		USkeletalMeshComponent* OwnerMesh = OwnerChar->GetMesh();
		UCharacterMovementComponent* OwnerCharMov = OwnerChar->GetCharacterMovement();
		OwnerCharMov->AddForce(OwnerMesh->GetUpVector() * Force * OwnerMesh->GetUpVector());
	}
	//OwnerMesh->AddForce(OwnerMesh->GetUpVector());
}
