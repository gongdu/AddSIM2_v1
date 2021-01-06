// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManagerBFL.generated.h"

/**
 * 
 */
UCLASS()
class ADDSIM2_V1_API UFileManagerBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		public:

	UFUNCTION(BlueprintPure, meta = (Keywords = "Load Text File"))
	static bool LoadTxt(FString FileNameA, FString& SaveTextA);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Save Text File"))
	static bool SaveTxt(FString SaveTextB, FString FileNameB);
	
};
