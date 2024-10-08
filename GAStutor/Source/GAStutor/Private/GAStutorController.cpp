// Fill out your copyright notice in the Description page of Project Settings.


#include "GAStutor/Public/GAStutorController.h"

#include "GAStutor/GAStutorCharacter.h"

void AGAStutorController::AcknowledgePossession(class APawn* P)
{
	Super::AcknowledgePossession(P);

	if (AGAStutorCharacter* CharacterBase = Cast<AGAStutorCharacter>(P))
	{
		CharacterBase->GetAbilitySystemComponent()->InitAbilityActorInfo(CharacterBase, CharacterBase);
	}
}
