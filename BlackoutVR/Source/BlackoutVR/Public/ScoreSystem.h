// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScoreSystem.generated.h"

struct FScoreData;
/**
 * 
 */
UCLASS()
class BLACKOUTVR_API UScoreSystem : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// Returns all the VR players
	TArray<AActor*> GetVRPlayers();

	// Returns all the touch actors
	TArray<AActor*> GetTouchActors();

	// Gets all the scores
	TArray<FScoreData*> GetAllScores();

	// Gets all the touch scores
	TArray<FScoreData*> GetTouchScores();

	// Gets the winner of the touch players
	FScoreData* GetTouchWinner();

	// Gets the winner of all players
	FScoreData* GetWinner();

	// Cache
	TArray<AActor*> VRPlayers;
	TArray<AActor*> TouchActors;
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