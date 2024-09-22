// Copywrite devxard.


#include "AuraCharecterBase.h"

// Sets default values
AAuraCharecterBase::AAuraCharecterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAuraCharecterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraCharecterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAuraCharecterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

