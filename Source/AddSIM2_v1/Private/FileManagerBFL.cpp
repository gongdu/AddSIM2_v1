// Fill out your copyright notice in the Description page of Project Settings.


#include "FileManagerBFL.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UFileManagerBFL::LoadTxt(FString FileNameA, FString& SaveTextA)
{
return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UFileManagerBFL::SaveTxt(FString SaveTextB, FString FileNameB)
{
return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

