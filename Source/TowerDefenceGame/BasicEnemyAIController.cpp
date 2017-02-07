// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerDefenceGame.h"
#include "BasicEnemyAIController.h"

int AAIController::MoveToLocation(const FVector &dest, float &rad, bool &overlapStop, bool &usePathfinding, bool &ProjNav, bool &strafe, bool &partialPath)
{
	dest = FVector(118,118,118);
	rad = 1.0f;
	overlapStop = true;
	usePathfinding = true;
	ProjNav = false;
	strafe = true;
	partialPath = false;
}

