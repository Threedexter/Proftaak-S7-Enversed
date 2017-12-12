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
	static TArray<AActor*> GetVRPlayers(UWorld* world);

	// Returns all the touch actors
	static TArray<AActor*> GetTouchActors(UWorld* world);

	// Gets all the scores
	static TArray<FScoreData*> GetAllScores(UWorld* world);

	// Gets all the touch scores
	static TArray<FScoreData*> GetTouchScores(UWorld* world);

	// Gets the winner of the touch players
	static FScoreData* GetTouchWinner(UWorld* world);

	// Gets the winner of all players
	static FScoreData* GetWinner(UWorld* world);
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