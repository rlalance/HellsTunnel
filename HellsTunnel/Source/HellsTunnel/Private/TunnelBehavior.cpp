// Copyright (c) 2024 Honour Bound Game Studios Inc.
// All Rights Reserved.

#include "HellsTunnel/Public/TunnelBehavior.h"

#include "GemActor.h"

// Sets default values for this component's properties
UTunnelBehavior::UTunnelBehavior()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UTunnelBehavior::BeginPlay()
{
	Super::BeginPlay();

	const float AngleIncrement = 360.0f / NumGemsPerRow;

	for(int32 j = 0; j < NumRows; ++j)
	{
		FVector Position = StartLocation + FVector(0.0f, j * GapBetweenRows, 0.0f);

		// Calculate the angle between each gem
		for(int32 i = 0; i < NumGemsPerRow; ++i)
		{
			float  Angle = FMath::DegreesToRadians(AngleIncrement * i);
			double CircleRadius = 255; // move to a UPROPERTY

			FRotator SpawnRotation = FRotator(-Angle * (180.0f / PI) + 180.0f, 0.0f, 0.0f);

			FVector SpawnLocation = Position + FVector(FMath::Sin(Angle) * CircleRadius, 0.0f, FMath::Cos(Angle) * CircleRadius);

			auto gem = GetWorld()->SpawnActor<AActor>(GemClass, SpawnLocation, SpawnRotation);

			if(gem)
			{
				FLinearColor GemColor = FLinearColor(FMath::FRand(), FMath::FRand(), FMath::FRand(), 1.0f);
			}
		}
	}
}

// Called every frame
void UTunnelBehavior::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
