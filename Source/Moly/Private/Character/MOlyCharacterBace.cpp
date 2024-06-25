// SADY.CO


#include "Character/MOlyCharacterBace.h"


AMOlyCharacterBace::AMOlyCharacterBace()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon-> SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon-> SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMOlyCharacterBace::BeginPlay()
{
	Super::BeginPlay();
	
}


