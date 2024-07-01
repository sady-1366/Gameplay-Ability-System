// SADY.CO

#pragma once

#include "CoreMinimal.h"
#include "Character/MOlyCharacterBace.h"
#include "Interaction/EnemyInterface.h"
#include "MOlyEnemy.generated.h"

/**
 * 
 */
UCLASS()
class MOLY_API AMOlyEnemy : public AMOlyCharacterBace , public IEnemyInterface
{
	GENERATED_BODY()

public:
	AMOlyEnemy();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	
	
};
