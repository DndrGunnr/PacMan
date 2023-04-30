// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridPawn.h"
#include "PacmanPawn.h"
#include "GridGenerator.h"
#include "Math/RandomStream.h"
#include "PhantomPawn.generated.h"



/**
 * 
 */
UCLASS()
class PACMANGRID_API APhantomPawn : public AGridPawn
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	APhantomPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnNodeReached() override;

	bool bIsFrightened;

	bool bIsEaten;

	//movement speed
	UPROPERTY(EditAnywhere, Category = "Movement")
		float ChaseGhostSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float FrightenedGhostSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float HouseGhostSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float EatenGhostSpeed;
	//To Do: Add logic for elroy mode

	//each ghost state might differ from the gamemode (ex. eaten state not synchronous)
	enum EState Ghost_State;

	

	//this does not need to be virtual becouse it is the same for all ghosts
	void set_FrightenedTarget();

	void set_ChaseSpeed();

	void set_FrightenedSpeed();

	void set_EatenSpeed();

	void set_houseSpeed();



private:
	UPROPERTY(VisibleAnywhere)
		class APacmanPawn* Player;

	UPROPERTY(VisibleAnywhere)
		AGridPawn* GridPawn;

public:
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
		APacmanPawn* GetPlayer() const;
	UFUNCTION()
		void SetSpeed(float Speed);
	UFUNCTION()
		virtual AGridBaseNode* GetPlayerRelativeTarget();
	UFUNCTION()
	void SetGhostTarget();
	UFUNCTION()
	virtual	void setScatterTarget();

	void to_FrightenedMode();

	//used to flip the direction of the ghost on state changes
	void flipDirection();

	//random direction generator

};
