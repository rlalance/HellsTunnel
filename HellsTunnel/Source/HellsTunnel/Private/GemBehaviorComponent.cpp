// Copyright (c) 2024 Honour Bound Game Studios Inc.
// All Rights Reserved.
			

#include "HellsTunnel/Public/GemBehaviorComponent.h"

// Sets default values for this component's properties
UGemBehaviorComponent::UGemBehaviorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGemBehaviorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGemBehaviorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

