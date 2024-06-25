// SADY.CO

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MOlyCharacterBace.generated.h"

UCLASS(Abstract)
class MOLY_API AMOlyCharacterBace : public ACharacter
{
	GENERATED_BODY()

public:

	AMOlyCharacterBace();

protected:

	virtual void BeginPlay() override;


};
