// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MainChar.generated.h"
#include "GameFramework/SpringArmComponent.h"

UCLASS()
class CMPM121_API AMainChar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MouseYaw(float axis);
	void MousePitch(float axis);

	//Vector
	FVector2D mouseInput;

	UPROPERTY(EditAnywhere)
		USpringArmComponent* springArm;
		UCameraComponent* camera;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh;
	

};
