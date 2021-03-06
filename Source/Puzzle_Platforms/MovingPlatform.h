// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLE_PLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()


	
public: 

	AMovingPlatform();

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float MoveSpeed = 20;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	FVector TargetLocation;

	void SetMobility(bool isActive);

private:

	FVector WorldTargetLocation, WorldStartLocation;
	bool bIsActivated = true;


};
