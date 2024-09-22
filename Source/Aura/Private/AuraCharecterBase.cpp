// Copywrite devxard.


#include "AuraCharecterBase.h"

// Sets default values
AAuraCharecterBase::AAuraCharecterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharecterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
