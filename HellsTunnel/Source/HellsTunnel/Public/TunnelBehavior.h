// Copyright (c) 2024 Honour Bound Game Studios Inc.
// All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunnelBehavior.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HELLSTUNNEL_API UTunnelBehavior : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTunnelBehavior();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AActor> GemClass;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 NumGemsPerRow;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 NumRows;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	float GapBetweenRows;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
