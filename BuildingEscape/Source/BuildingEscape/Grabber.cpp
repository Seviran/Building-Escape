// Copyright Arnout Schepens 2017

#include "Grabber.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"
#include "Engine/World.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Grabber reporting for duty"));

}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);

	// TODO Log out to test
	UE_LOG(LogTemp, Warning, TEXT("Location: %s; Rotation: %s"),
		*PlayerViewPointLocation.ToString(),
		*PlayerViewPointRotation.ToString()
	);

	// Get the player viewpoint

	// Ray-cast out to reach distance

	// See what we hit
}

