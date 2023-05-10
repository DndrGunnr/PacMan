// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PMPointsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PACMANGRID_API UPMPointsGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
		int32 base_points;
	UPROPERTY(VisibleAnywhere)
		int32 ghost_points;
	UPROPERTY(VisibleAnywhere)
		int32 fruit_points;
	UPROPERTY(VisibleAnywhere)
		int32 power_points;
	UPROPERTY(VisibleAnywhere)
		int32 score;
	UPROPERTY(VisibleAnywhere)
		int32 lives;

	virtual void Init() override;

public:
	
	//functions to add points to score
	void add_powerPoints();

	void add_basePoints();

	void add_ghostPoints();

	void add_fruitPoints();

	void reset_score();

	//functions to add up lives

	void add_life();
	
	void remove_life();

	void reset_lives();

	
};
