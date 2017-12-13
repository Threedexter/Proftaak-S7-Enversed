// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScoreSystem.generated.h"

struct FScoreData;
/**
 * 
 */
class BLACKOUTVR_API UScoreSystem
{	
public :
	// Returns all the VR players
	TArray<AActor*> GetVRPlayers(UWorld* world);

	// Returns all the touch actors
	TArray<AActor*> GetTouchActors(UWorld* world);

	// Gets all the scores
	TArray<FScoreData*> GetAllScores(UWorld* world);

	// Gets all the touch scores
	TArray<FScoreData*> GetTouchScores(UWorld* world);

	// Gets the winner of the touch players
	FScoreData* GetTouchWinner(UWorld* world);

	// Gets the winner of all players
	FScoreData* GetWinner(UWorld* world);

	TArray<AActor*> VRPlayers;
	TArray<AActor*> TouchActors;
	UScoreSystem();
	~UScoreSystem();
};

USTRUCT(BlueprintType)
struct FScoreData
{
	GENERATED_BODY()

public:

	FScoreData() {}
	FScoreData(int score, FString name)
	{
		this->score = score;
		this->name = name;
	}

	int score;
	FString name;
};