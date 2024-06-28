// SADY.CO

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MolyPlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class MOLY_API AMolyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMolyPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<UInputMappingContext> MolyContext;
	
};
