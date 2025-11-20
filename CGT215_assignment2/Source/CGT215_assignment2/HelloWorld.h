// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HelloWorld.generated.h"

/**
 * 
 */
UCLASS()
class CGT215_ASSIGNMENT2_API UHelloWorld : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "HelloWorld")
	static UE::String HelloWorld();
	static FString HelloWorld(FString name);

};
