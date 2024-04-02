// Fill out your copyright notice in the Description page of Project Settings.


#include "GreatSwordAIController.h"

#include "Kismet/GamePlayStatics.h"

void AGreatSwordAIController::BeginPlay()
{
    Super::BeginPlay();

    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    SetFocus(Player);
}
