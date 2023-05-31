// Fill out your copyright notice in the Description page of Project Settings.


#include "FruitNode.h"


AFruitNode::AFruitNode()
{
	FruitCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FruitCollision"));
	RootComponent = FruitCollision;

	FruitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FruitMesh"));
	FruitMesh->SetupAttachment(RootComponent);

	FruitMesh->SetVisibility(false);
}

