// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridBaseNode.h"
#include "FruitNode.generated.h"

/**
 * 
 */
UCLASS()
class PACMANGRID_API AFruitNode : public AGridBaseNode
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* FruitMesh;
	UPROPERTY(EditAnywhere)
		UBoxComponent* FruitCollision;


	AFruitNode();
	
};
