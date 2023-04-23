// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}
