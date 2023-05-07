// Fill out your copyright notice in the Description page of Project Settings.


#include "Pinky.h"

AGridBaseNode* APinky::GetPlayerRelativeTarget()
{
	return Super::GetPlayerRelativeTarget();
}

APinky::APinky()
{
	CurrentGridCoords = FVector2D(18, 14);
	ScatterTarget = nullptr;
}

void APinky::BeginPlay()
{
	Super::BeginPlay();
	FVector2D BlinkyScatter = FVector2D(35, 2);
	ScatterTarget = *GridGenTMap.Find(BlinkyScatter);
	//SetNextNodeByDir(FVector(0, 0, 0), true);
	//TODO: Set RespawnTarget


}

void APinky::SetScatterTarget()
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

void APinky::SetChaseTarget()
{
	const AGridBaseNode* Target;
	FVector inputdir = GetPlayer()->GetLastValidDirection();
	FVector2D sum = FVector2D(4 * inputdir.X, 4 * inputdir.Y);

	if (inputdir == FVector(1, 0, 0))
		sum = FVector2D(4, -4);
	FVector2D CurrentPCoords = GetPlayerRelativeTarget()->GetGridPosition();
	FVector2D PossibleCoords= FVector2D(CurrentPCoords.X + sum.X, CurrentPCoords.Y+ sum.Y);

	const float ClampedX = FMath::Clamp(PossibleCoords.X, 0, 35);
	const float ClampedY = FMath::Clamp(PossibleCoords.Y, 0, 27);

	Target = *(GridGenTMap.Find(FVector2D(ClampedX, ClampedY)));
	if (Target != nullptr) {

		AGridBaseNode* PossibleNode = TheGridGen->GetClosestNodeFromMyCoordsToTargetCoords(this->GetLastNodeCoords(), Target->GetGridPosition(), -(this->GetLastValidDirection()));

		const FVector Dimensions(60, 60, 20);
		DrawDebugBox(GetWorld(), PossibleNode->GetTileCoordinates(), Dimensions, FColor::Red);

		if (PossibleNode)
		{
			this->SetNextNodeByDir(TheGridGen->GetThreeDOfTwoDVector(PossibleNode->GetGridPosition() - this->GetLastNodeCoords()), true);
		}
	}


}

void APinky::SetEatenTarget() {

	AGridBaseNode* PossibleNode = TheGridGen->GetClosestNodeFromMyCoordsToTargetCoords(this->GetLastNodeCoords(), RespawnTarget->GetGridPosition(), -(this->GetLastValidDirection()));

	const FVector Dimensions(60, 60, 20);
	DrawDebugBox(GetWorld(), PossibleNode->GetTileCoordinates(), Dimensions, FColor::Red);

	if (PossibleNode)
	{
		this->SetNextNodeByDir(TheGridGen->GetThreeDOfTwoDVector(PossibleNode->GetGridPosition() - this->GetLastNodeCoords()), true);
	}

}