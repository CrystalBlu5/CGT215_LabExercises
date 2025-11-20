// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sieve.generated.h"


/**
 * 
 */
UCLASS()
class ASSIGNMENT2_API USieve : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Sieve")
    static TArray<int32> FindPrimes(int32 HighValue);
    static FString Sieve(FString number);
    //returns all prime numbers

    
    }
};
