// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScoreKeeper.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UScoreKeeper : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLACKOUTVR_API IScoreKeeper
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Score")
		void SetScore(int score);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Score")
		void AddToScore(int score);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Score")
		int GetScore();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Score")
		FString GetCName();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Score")
		void SetCName(int name);
};
