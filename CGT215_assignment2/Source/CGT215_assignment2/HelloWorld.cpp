// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloWorld.h"

FString UHelloWorld::HelloWorld(FString name)

{
	FString hello = FString("Hello");
	return hello + name;
}