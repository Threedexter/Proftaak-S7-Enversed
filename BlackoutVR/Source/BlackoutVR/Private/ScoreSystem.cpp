// Fill out your copyright notice in the Description page of Project Settings.

#include "ScoreSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "TouchActor.h"
#include "BlackoutVRCharacter.h"

TArray<AActor*> UScoreSystem::GetVRPlayers()
{
	if (VRPlayers.Num() == 0) {
		UGameplayStatics::GetAllActorsWithInterface(GEngine->GetWorld(), ABlackoutVRCharacter::StaticClass(), VRPlayers);
	}
	return VRPlayers;
}

TArray<AActor*> UScoreSystem::GetTouchActors()
{
	if (TouchActors.Num() == 0) {
		UGameplayStatics::GetAllActorsWithInterface(GEngine->GetWorld(), UTouchActor::StaticClass(), TouchActors);
	}
	return TouchActors;
}

TArray<FScoreData*> UScoreSystem::GetAllScores()
{
	// get all
	TArray<AActor*> vr = GetVRPlayers();
	TArray<AActor*> to = GetTouchActors();

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

TArray<FScoreData*> UScoreSystem::GetTouchScores()
{
	TArray<AActor*> to = GetTouchActors();
	TArray<FScoreData*> ret = TArray<FScoreData*>();
	for (AActor* scoreKeeper : to)
	{
		int score = IScoreKeeper::Execute_GetScore(scoreKeeper);
		FString name = IScoreKeeper::Execute_GetCName(scoreKeeper);
		ret.Add(new FScoreData(score, name));
	}

	return ret;
}

FScoreData* UScoreSystem::GetTouchWinner()
{
	TArray<FScoreData*> scores = GetTouchScores();

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

FScoreData* UScoreSystem::GetWinner()
{
	TArray<FScoreData*> scores = GetAllScores();

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
