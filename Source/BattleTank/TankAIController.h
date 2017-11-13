// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	// How close can the AI tank get to the player
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float AcceptanceRadius = 3000;
};
