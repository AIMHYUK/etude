// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingSky.h"

// Sets default values
ARotatingSky::ARotatingSky()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ARotatingSky::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingSky::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(0.0f, RotateSpeed * DeltaTime, 0.0f));

}

