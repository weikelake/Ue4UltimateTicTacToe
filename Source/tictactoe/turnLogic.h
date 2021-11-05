// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "turnLogic.generated.h"

/**
 * 
 */
UCLASS()
class TICTACTOE_API UturnLogic : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "turn Logic")
		static void getCellWin(TArray<int> cellsXO, int& whoIsWin); 

	
};
