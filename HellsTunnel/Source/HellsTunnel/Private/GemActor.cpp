// Copyright (c) 2024 Honour Bound Game Studios Inc. All Rights Reserved.


#include "HellsTunnel/Public/GemActor.h"


// Sets default values
AGemActor::AGemActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGemActor::SetGemColor(FLinearColor Color)
{
	GemColor = Color;
	
	// Update the material contained in the static mesh component
	
	// Get the static mesh component
	UStaticMeshComponent* staticMeshComponent = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	
	if(staticMeshComponent)
	{
		// Get the material
		auto material = staticMeshComponent->GetMaterialSlotNames();
		
		if(not material.IsEmpty())
		{
			// Log the material name
			UE_LOG(LogTemp, Warning, TEXT("Material Name: %s"), *material[0].ToString());
		}
	}	
}

// Called every frame
void AGemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

