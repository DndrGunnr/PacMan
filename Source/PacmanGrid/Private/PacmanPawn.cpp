// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanPawn.h"
#include "TestGridGameMode.h"	
#include "PacmanWidget.h"
#include "Kismet/GameplayStatics.h"


APacmanPawn::APacmanPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	//// vettore di direzione inizializzato con zero (il pawn non si muove allo start del gioco fino a che non
	//   viene premuto uno dei tasti W-A-S-D )
	LastInputDirection = FVector(0, 0, 0);
	LastValidInputDirection = FVector(0, 0, 0);
	////posizione iniziale  del pawn nelle coordinate di griglia (9,13)
	CurrentGridCoords = FVector2D(9, 13);
	PacmanNormalSpeed = 800.f;
	PacmanPowerSpeed = 900.f;
	DotsCount = 0;
	PowerDotsCount = 0;

	UIClass = nullptr;
	UIWidget = nullptr;

	
	DeathTimer = 5.0f;
}


void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GameMode->CurrentState == EState::Scatter || GameMode->CurrentState == EState::Chase)
		CurrentMovementSpeed = PacmanNormalSpeed;


}

void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();
	//// posizione iniziale del pawn
	FVector2D StartNode = TheGridGen->GetXYPositionByRelativeLocation(GetActorLocation());
	LastNode = TheGridGen->TileMap[StartNode];

	CurrentMovementSpeed = PacmanNormalSpeed;

	if (IsValid(UIClass))
	{
		UIWidget = Cast<UPacmanWidget>(CreateWidget(GetWorld(), UIClass));
		if (UIWidget != nullptr)
			UIWidget->AddToViewport();
	}

	UIWidget->DisplayLives(PointsGameInstance->lives);
	UIWidget->DisplayScore(PointsGameInstance->score);
	FruitCount = 0;
	
}


void APacmanPawn::SetVerticalInput(float AxisValue)
{
	if (AxisValue == 0) return;
	const FVector Dir = (GetActorForwardVector() * AxisValue).GetSafeNormal();
	LastInputDirection = Dir.GetSafeNormal();
	SetNextNodeByDir(LastInputDirection);
}

void APacmanPawn::SetHorizontalInput(float AxisValue)
{
	if (AxisValue == 0) return;
	const FVector Dir = (GetActorRightVector() * AxisValue).GetSafeNormal();
	LastInputDirection = Dir;
	SetNextNodeByDir(LastInputDirection);
}

void APacmanPawn::OnClick()
{
	FHitResult Hit = FHitResult(ForceInit);
	GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursor(ECollisionChannel::ECC_Pawn, true, Hit);
	if (AGridBaseNode* CurrTile = Cast<AGridBaseNode>(Hit.GetActor()))
	{
		FVector2D CurrCoords = CurrTile->GetGridPosition();
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Position x=%f  Y=%f "), CurrCoords.X, CurrCoords.Y));
	}
}

void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Bind Actions here
	InputComponent->BindAxis(TEXT("MoveForward"), this, &APacmanPawn::SetVerticalInput);
	InputComponent->BindAxis(TEXT("MoveRight"), this, &APacmanPawn::SetHorizontalInput);
	// bind the OnClick function to InputComponent for test purpose
	InputComponent->BindAction("Click", IE_Pressed, this, &APacmanPawn::OnClick);
}

void APacmanPawn::resetLevel()
{
	//reset the level
	DotsCount = 0;
	PowerDotsCount = 0;
	FruitCount = 0;
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}



void APacmanPawn::HandleMovement()
{
	Super::HandleMovement();
	// si muove autonomamente fino a che il next node è walkable
	if (!TargetNode && !NextNode)
	{
		if (TheGridGen->IsNodeValidForWalk(TheGridGen->GetNextNode(CurrentGridCoords, LastInputDirection)))
		{
			SetLastValidDirection(LastInputDirection);
		}
		SetNodeGeneric(LastValidInputDirection);
	}
}

void APacmanPawn::SetTargetNode(AGridBaseNode* Node)
{
	Super::SetTargetNode(Node);
}

void APacmanPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	const auto PointNode = Cast<APointNode>(OtherActor);
	//overlapping of point node
	if (PointNode && (PointNode->get_EEatable_id() == Point) && !(PointNode->get_isEaten())) {

		PointNode->Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			PointNode->Point_Mesh->SetVisibility(false);
			PointNode->set_isEaten();

			PointsGameInstance->add_basePoints();
			UIWidget->DisplayScore(PointsGameInstance->score);
			DotsCount++;
			if (DotsCount > 70 && FruitCount == 0) {
				FruitCount++;
				GameMode->FruitSpawn();
			}
			else if (DotsCount > 170 && FruitCount == 1) {
				FruitCount++;
				GameMode->FruitSpawn();
			}
			else if (DotsCount == 240 && PowerDotsCount == 4) {
				GetWorld()->GetTimerManager().SetTimer(DeathTimerHandle, this, &APacmanPawn::resetLevel, DeathTimer, false);

				//pacman stops moving
				CanMove = false;
				//ghosts stop moving
				GameMode->BlinkyPtr->CanMove = false;
				GameMode->PinkyPtr->CanMove = false;
				GameMode->InkyPtr->CanMove = false;
				GameMode->ClydePtr->CanMove = false;

			}
		
			
	}

	const auto PowerNode = Cast<APowerNode>(OtherActor);
	//overlapping of power node
	if (PowerNode && (PowerNode->get_EEatable_id() == Power) && !(PowerNode->get_isEaten())) {
		PowerNode->Point_Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		PowerNode->Point_Mesh->SetVisibility(false);
		PowerNode->set_isEaten();

		PointsGameInstance->add_powerPoints();
		UIWidget->DisplayScore(PointsGameInstance->score);
		SetCurrentSpeed(PacmanPowerSpeed);
		PowerDotsCount++;


		//asyncronous state change 
		GameMode->FrightenedMode();
	}
	//overlapping of ghost node
	const auto PhantomPawn = Cast<APhantomPawn>(OtherActor);
	const FVector PacmanSpawn(950.f, 1350.f, GetActorLocation().Z);

	if (PhantomPawn && (GameMode->CurrentState == Chase || GameMode->CurrentState == Scatter) && !(PhantomPawn->GetIsEaten())) {
		Collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetWorld()->GetTimerManager().SetTimer(CollisionTimerHandle, this, &APacmanPawn::ActivateCollision, CollisionTimer, false);
		
		PointsGameInstance->remove_life();
		UIWidget->DisplayLives(PointsGameInstance->lives);
		if ((PointsGameInstance->get_lives())==0)
		{
			//GAME OVER
			GameOverText = "GAME OVER";
			UIWidget->DisplayGameOver("GAME OVER");
			PointsGameInstance->reset_lives();	
			PointsGameInstance->reset_score();
			GetWorld()->GetTimerManager().SetTimer(DeathTimerHandle, this, &APacmanPawn::resetLevel, DeathTimer, false);

			//pacman stops moving
			CanMove = false;
			//ghosts stop moving
			GameMode->BlinkyPtr->CanMove = false;
			GameMode->PinkyPtr->CanMove = false;
			GameMode->InkyPtr->CanMove = false;
			GameMode->ClydePtr->CanMove = false;

			
		}
		SetLastValidDirection(FVector(0, 0, 0));
		SetLastValidDirection(FVector(0, 0, 0));
		CurrentGridCoords=FVector2D(9,13);

		//PACMAN RESET
		// set lastnode
		LastNode=(*(GridGenTMap.Find(FVector2D(9, 13))));
		// set nextnode to the same as last node as pacman starts still
		SetNextNode(*(GridGenTMap.Find(FVector2D(9, 13))));
		// set targetnode to the same as prevoius nodes as pacman starts still
		SetTargetNode(*(GridGenTMap.Find(FVector2D(9, 13))));
		// teleport pacman to (9,13)
		SetActorLocation(PacmanSpawn);
		//GHOST RESET
		GameMode->BlinkyPtr->resetGhost();
		GameMode->PinkyPtr->resetGhost();
		GameMode->InkyPtr->resetGhost();
		GameMode->ClydePtr->resetGhost();
		PointsGameInstance->reset_partialScore();
		GetWorld()->GetTimerManager().SetTimer(GameMode->HouseTimer, GameMode->PinkyPtr, &APinky::ghostWait, 4.f, false);
		

	}
	else if (PhantomPawn && (GameMode->CurrentState == Frightened) && !(PhantomPawn->GetIsEaten())) {
		PhantomPawn->SetIsEaten(true);
		PhantomPawn->EatenMode();
		//the score obtained by eating a ghost is 200,400,800,1600. This is
		GameMode->EatenGhostCounter++;
		PointsGameInstance->add_ghostPoints(GameMode->EatenGhostCounter);
		UIWidget->DisplayScore(PointsGameInstance->score);
		
	}

	const auto FruitNode = Cast<AFruitNode>(OtherActor);
	if (FruitNode && FruitNode->FruitMesh->IsVisible()) {
		FruitNode->FruitMesh->SetVisibility(false);
		PointsGameInstance->add_fruitPoints();
		UIWidget->DisplayScore(PointsGameInstance->score);
		GameMode->FruitDestroy();
	}
	
}
