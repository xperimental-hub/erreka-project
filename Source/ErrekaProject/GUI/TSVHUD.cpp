// Fill out your copyright notice in the Description page of Project Settings.


#include "TSVHUD.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

ATSVHUD::ATSVHUD()
{

}

void ATSVHUD::BeginPlay()
{
	Super::BeginPlay();
	
	/*if (PlayScreenClass)
	{
		PlayScreen = CreateWidget<UPlayScreen>(GetWorld(), PlayScreenClass);
		if (PlayScreen)
		{
			PlayScreen->AddToViewport();
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			PlayerController->bShowMouseCursor = true;
		}
	}*/
	
	if (MainScreenClass)
	{
		MainScreen = CreateWidget<UMainScreen>(GetWorld(),MainScreenClass);
		if(MainScreen)
		{
			MainScreen->AddToViewport();
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
			PlayerController->bShowMouseCursor = true;
		}
	}
	
		
}

void ATSVHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ATSVHUD::DrawHUD()
{
	Super::DrawHUD();
}

