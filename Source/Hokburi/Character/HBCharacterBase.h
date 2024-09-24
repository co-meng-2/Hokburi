// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/HBSelectableInterface.h"
#include "HBCharacterBase.generated.h"

UCLASS()
class HOKBURI_API AHBCharacterBase : public ACharacter, public IHBSelectableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHBCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// Command Handler
public:
	UFUNCTION(BlueprintCallable)
	virtual UHBCommandHandler* GetCommandHandler() override;
private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UHBCommandHandler> CommandHandler;
};
