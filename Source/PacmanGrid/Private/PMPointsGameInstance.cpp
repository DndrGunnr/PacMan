// Fill out your copyright notice in the Description page of Project Settings.


#include "PMPointsGameInstance.h"

void UPMPointsGameInstance::Init()
{
	base_points = 10;
	ghost_points = 200;
	fruit_points = 100;
	power_points = 50;

	lives = 3;

	score = 0;

}

void UPMPointsGameInstance::add_powerPoints()
{
	score += power_points;
}

void UPMPointsGameInstance::add_basePoints()
{
	score += base_points;
}

void UPMPointsGameInstance::add_ghostPoints()
{
	score += ghost_points;
}

void UPMPointsGameInstance::add_fruitPoints()
{
	score += fruit_points;
}

void UPMPointsGameInstance::reset_score()
{
	score = 0;
}

void UPMPointsGameInstance::add_life()
{
	lives += 1;
}

void UPMPointsGameInstance::remove_life()
{
	lives -= 1;
}

void UPMPointsGameInstance::reset_lives()
{
	lives = 3;
}

int32 UPMPointsGameInstance::get_lives()
{
	return lives;
}
