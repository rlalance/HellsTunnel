// Copyright (c) 2024 Honour Bound Game Studios Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GemActor.generated.h"

UCLASS()
class HELLSTUNNEL_API AGemActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Gem Color
	UPROPERTY(EditAnywhere, Category = "Gem")
	FLinearColor GemColor;
	
	// Set the color of the gem
	UFUNCTION(BlueprintCallable, Category = "Gem")
	void SetGemColor(FLinearColor Color);
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
