// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GreatSwordAIController.generated.h"

/**
 * 
 */
UCLASS()
class SOULLIKE_API AGreatSwordAIController : public AAIController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame


};
