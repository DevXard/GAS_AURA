// Copywrite devxard.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharecterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharecterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharecterBase();

protected:
	virtual void BeginPlay() override;
};