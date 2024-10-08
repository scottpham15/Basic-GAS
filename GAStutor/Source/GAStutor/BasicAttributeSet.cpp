// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UBasicAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, Health, OldHealth);
}

void UBasicAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, MaxHealth, OldMaxHealth);
}

void UBasicAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, Mana, OldMana);
}

void UBasicAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, MaxMana, OldMaxMana);
}

void UBasicAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UBasicAttributeSet, Health);
	DOREPLIFETIME(UBasicAttributeSet, MaxHealth);
	DOREPLIFETIME(UBasicAttributeSet, Mana);
	DOREPLIFETIME(UBasicAttributeSet, MaxMana);
}
