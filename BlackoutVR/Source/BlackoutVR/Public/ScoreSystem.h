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
	
public :
	// Returns all the VR players
	static TArray<AActor*> GetVRPlayers();

	// Returns all the touch actors
	static TArray<AActor*> GetTouchActors();

	// Gets all the scores
	static TArray<FScoreData*> GetAllScores();

	// Gets all the touch scores
	static TArray<FScoreData*> GetTouchScores();

	// Gets the winner of the touch players
	static FScoreData* GetTouchWinner();

	// Gets the winner of all players
	static FScoreData* GetWinner();
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