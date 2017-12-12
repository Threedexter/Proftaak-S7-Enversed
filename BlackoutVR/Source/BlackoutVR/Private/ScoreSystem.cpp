// Fill out your copyright notice in the Description page of Project Settings.

#include "ScoreSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "TouchActor.h"
#include "BlackoutVRCharacter.h"

// Cache
static TArray<AActor*> VRPlayers;
static TArray<AActor*> TouchActors;

TArray<AActor*> UScoreSystem::GetVRPlayers(UWorld* world)
{
	if (VRPlayers.Num() == 0) {
		UGameplayStatics::GetAllActorsWithInterface(world, ABlackoutVRCharacter::StaticClass(), VRPlayers);
	}
	return VRPlayers;
}

TArray<AActor*> UScoreSystem::GetTouchActors(UWorld* world)
{
	if (TouchActors.Num() == 0) {
		UGameplayStatics::GetAllActorsWithInterface(world, UTouchActor::StaticClass(), TouchActors);
	}
	return TouchActors;
}

TArray<FScoreData*> UScoreSystem::GetAllScores(UWorld* world)
{
	// get all
	TArray<AActor*> vr = GetVRPlayers(world);
	TArray<AActor*> to = GetTouchActors(world);

	// create array with all
	to.Append(vr);
	TArray<FScoreData*> ret = TArray<FScoreData*>();
	for (AActor* scoreKeeper : to)
	{
		int score = IScoreKeeper::Execute_GetScore(scoreKeeper);
		FString name = IScoreKeeper::Execute_GetCName(scoreKeeper);
		ret.Add(new FScoreData(score, name));
	}

	return ret;
}

TArray<FScoreData*> UScoreSystem::GetTouchScores(UWorld* world)
{
	TArray<AActor*> to = GetTouchActors(world);
	TArray<FScoreData*> ret = TArray<FScoreData*>();
	for (AActor* scoreKeeper : to)
	{
		int score = IScoreKeeper::Execute_GetScore(scoreKeeper);
		FString name = IScoreKeeper::Execute_GetCName(scoreKeeper);
		ret.Add(new FScoreData(score, name));
	}

	return ret;
}

FScoreData* UScoreSystem::GetTouchWinner(UWorld* world)
{
	TArray<FScoreData*> scores = GetTouchScores(world);

	FScoreData* highest_score = nullptr;
	for (FScoreData *score : scores)
	{
		if (!highest_score || score->score > highest_score->score)
		{
			highest_score = score;
		}
	}

	return highest_score;
}

FScoreData* UScoreSystem::GetWinner(UWorld* world)
{
	TArray<FScoreData*> scores = GetAllScores(world);

	FScoreData* highest_score = nullptr;
	for (FScoreData *score : scores)
	{
		if (!highest_score || score->score > highest_score->score)
		{
			highest_score = score;
		}
	}

	return highest_score;
}
