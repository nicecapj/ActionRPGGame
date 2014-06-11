// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "ActionRPGGame.h"
#include "AREffectType.h"

UAREffectType::UAREffectType(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

UWorld* UAREffectType::GetWorld() const
{
	if (EffectTarget.IsValid())
	{
		UWorld* const world = GEngine->GetWorldFromContextObject(EffectTarget.Get());
		return world ? world : NULL;
	}
	return NULL;
}