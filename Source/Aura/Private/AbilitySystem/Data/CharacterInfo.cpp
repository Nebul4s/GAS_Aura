// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Data/CharacterInfo.h"

FCharacterClassDefaultInfo UCharacterInfo::GetClassDefaultInfo(ECharacterClass CharacterClass)
{
	return CharacterClassInformation.FindChecked(CharacterClass);
}
