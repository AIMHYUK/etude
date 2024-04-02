// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASword::ASword()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	Mesh->SetupAttachment(Root);
}

bool ASword::IsSwordTaken()
{	
	return !bTakeSword;	
}

// Called when the game starts or when spawned



