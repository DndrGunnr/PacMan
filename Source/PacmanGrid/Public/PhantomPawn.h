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



	//frightened meshes

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMeshBlue;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMeshWhite;

	//eaten meshes

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMeshLeftEye;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMeshRightEye;
	//eaten asyinchronous state
	UFUNCTION()
		void EatenMode();

	UFUNCTION()
		void resetEatenGhostCounter();

	UFUNCTION()
		int8 getEatenGhostCounter();

	UFUNCTION()
		virtual void resetGhost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void OnNodeReached() override;

	bool bIsFrightened;


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
	UPROPERTY(VisibleAnywhere)
		AGridBaseNode* RespawnTarget;
	//eatenGhostCounter is reset to 0 when exiting frightened state
	UPROPERTY(VisibleAnywhere)
		int8 EatenGhostCounter;


private:
	UPROPERTY(VisibleAnywhere)
		class APacmanPawn* Player;

	UPROPERTY(VisibleAnywhere)
		AGridPawn* GridPawn;

	FTimerHandle FlashTimer;
	FTimerHandle HouseTimer;

	float Flash_time;
	


public:
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
		APacmanPawn* GetPlayer() const;
	UFUNCTION()
		void SetSpeed(float Speed);
	UFUNCTION()
		virtual AGridBaseNode* GetPlayerRelativeTarget();
	UFUNCTION()
	virtual void SetChaseTarget();
	UFUNCTION()
	virtual	void SetScatterTarget();
	//this does not need to be virtual becouse it is the same for all ghosts
	UFUNCTION()
	void SetFrightenedTarget();
	UFUNCTION()
	virtual void SetEatenTarget();
	UFUNCTION()
	virtual void LeaveHouse();
	UFUNCTION()
	void SetIsLeavingHouse(bool newIsLeavingHouse); 

	UPROPERTY(VisibleAnywhere)
	bool bIsInHouse;
	UPROPERTY(VisibleAnywhere)
	bool bIsLeavingHouse;


	//used to flip the direction of the ghost on state changes
	void flipDirection();

	//random direction generator

	struct FRandomStream RandomGenerator;

	int32 RandomSeed;
	int32 RandMIN;
	int32 RandMAX;

	TStaticArray<FVector, 4> Direction_vector;

	//functions for flashing mode
	void VisibleWhite();

	void VisibleBlue();

	void ResetOriginalColor();



};
