// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GAStutorController.generated.h"

/**
 * 
 */
UCLASS()
class GASTUTOR_API AGAStutorController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void AcknowledgePossession(class APawn* P) override;
};
