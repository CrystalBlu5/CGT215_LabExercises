// Fill out your copyright notice in the Description page of Project Settings.


#include "Sieve.h"

FString USieve::Sieve(FString number)
{
	FString prime_nums = FString("prime_nums");
	return prime_nums + number;
}

TArray<int32> USieve::FindPrimes(int32 HighValue)
{
	TArray<int32> Primes;

	//ensuring the high value is valid
	if (HighValue < 2)
	{
		return Primes; //returns empty array if no primes are possible

	}

	//creating a boolean array to identify the prime numbers
	TArray<bool> IsPrime;
	IsPrime.Init(true, HighValue + 1);

	IsPrime[0] = false;
	IsPrime[1] = false;

	//identifying the non-prime numbers
	for (int32 i = 2; i * i <= HighValue; ++i)
	{
		if (IsPrime[i])
		{
			for (int32 j = i * i; j <= HighValue; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}

	//Getting all prime numbers
	for (int32 i = 2; i <= HighValue; ++i)
	{
		if (IsPrime[i])
		{
			Primes.Add(i);
		}
	}

	return Primes;
}

