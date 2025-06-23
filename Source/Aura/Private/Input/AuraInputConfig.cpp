// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& Tag, bool bLogNotFound) const
{
	for (const FAuraInputAction& Action : InputActions)
	{
		if (Action.InputAction && Action.InputTag == Tag)
		{
			return Action.InputAction;
		}
	}
	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant find abilityinputaction for InputTag %s, on InputConfig %s"), *Tag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
