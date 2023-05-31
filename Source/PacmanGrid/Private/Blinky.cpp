// Fill out your copyright notice in the Description page of Project Settings.


#include "Blinky.h"
#include "TestGridGameMode.h"

AGridBaseNode* ABlinky::GetPlayerRelativeTarget()
{
	return Super::GetPlayerRelativeTarget();
}

ABlinky::ABlinky()
{
	CurrentGridCoords = FVector2D(21,13);
	ScatterTarget = nullptr;
	bIsWaiting = false;
}

void ABlinky::BeginPlay()
{
	Super::BeginPlay();
	FVector2D BlinkyScatter = FVector2D(34, 25);
	ScatterTarget = *GridGenTMap.Find(BlinkyScatter);
	//SetNextNodeByDir(FVector(0, 0, 0), true);
}

void ABlinky::SetScatterTarget()
{
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Scatter target Function"));
	AGridBaseNode* PossibleNode = TheGridGen->GetClosestNodeFromMyCoordsToTargetCoords(this->GetLastNodeCoords(), ScatterTarget->GetGridPosition(), -(this->GetLastValidDirection()));

	const FVector Dimensions(60, 60, 20);
	DrawDebugBox(GetWorld(), PossibleNode->GetTileCoordinates(), Dimensions, FColor::Red);

	if (PossibleNode)
	{
		this->SetNextNodeByDir(TheGridGen->GetThreeDOfTwoDVector(PossibleNode->GetGridPosition() - this->GetLastNodeCoords()), true);
	}
}

void ABlinky::SetChaseTarget()
{
	const AGridBaseNode* Target = GetPlayerRelativeTarget();
	if (!Target)
	{
		Target = GetPlayer()->GetLastNode();
	}

	AGridBaseNode* PossibleNode = TheGridGen->GetClosestNodeFromMyCoordsToTargetCoords(this->GetLastNodeCoords(), Target->GetGridPosition(), -(this->GetLastValidDirection()));

	const FVector Dimensions(60, 60, 20);
	DrawDebugBox(GetWorld(), PossibleNode->GetTileCoordinates(), Dimensions, FColor::Red);

	if (PossibleNode)
	{
		this->SetNextNodeByDir(TheGridGen->GetThreeDOfTwoDVector(PossibleNode->GetGridPosition() - this->GetLastNodeCoords()), true);
	}
}
//function to allow eaten ghosts to respawn
void ABlinky::SetEatenTarget() {
	
	const AGridBaseNode* Target = *GridGenTMap.Find(FVector2D(21,13));


	//once outside, the ghost goes to the center of the ghost house
	if (CurrentGridCoords == FVector2D(21, 13))
	{			
		SetTargetNode(*GridGenTMap.Find(FVector2D(19, 13)));
		
	}
	//once inside, the ghost is respawned and instantly kicked out of the ghost house
	else if (CurrentGridCoords == FVector2D(19, 13))
	{
		ResetOriginalColor();
		SetTargetNode(*GridGenTMap.Find(FVector2D(21, 13)));
		bIsEaten = false;
	}
	//if the ghost is eaten, it will go to the ghost house
	else {
		AGridBaseNode* PossibleNode = TheGridGen->GetClosestNodeFromMyCoordsToTargetCoords(this->GetLastNodeCoords(), Target->GetGridPosition(), -(this->GetLastValidDirection()));
		const FVector Dimensions(60, 60, 20);
		DrawDebugBox(GetWorld(), PossibleNode->GetTileCoordinates(), Dimensions, FColor::Red);
		if (PossibleNode)
		{
			this->SetNextNodeByDir(TheGridGen->GetThreeDOfTwoDVector(PossibleNode->GetGridPosition() - this->GetLastNodeCoords()), true);
		}
	}

}

void ABlinky::resetGhost()
{
	const FVector2D BlinkySpawn = FVector2D(21, 13);
	CurrentGridCoords = BlinkySpawn;
	LastNode = *(GridGenTMap.Find(BlinkySpawn));
	NextNode = *(GridGenTMap.Find(BlinkySpawn));
	SetTargetNode(*(GridGenTMap.Find(BlinkySpawn)));
	SetActorLocation(FVector(2150.f,1350.f,5.f));
	bIsEaten = false;
}





