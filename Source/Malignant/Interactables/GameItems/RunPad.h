// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RunPad.generated.h"

class UBoxComponent;

UCLASS()
class MALIGNANT_API ARunPad : public AActor
{
	GENERATED_BODY()
	

	// methods 
public:

	// Sets default values for this actor's properties
	ARunPad();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//members
public:


	//methods
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//members
protected:


	//methods
private:


	//members
private:

};