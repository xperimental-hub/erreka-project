// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainScreen.h"
#include "PlayScreen.h"
#include "TSVHUD.generated.h"

/**
 * 
 */
UCLASS()
class ERREKAPROJECT_API ATSVHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	ATSVHUD();
	virtual void DrawHUD() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, Category = "Widget")
		TSubclassOf<UUserWidget> MainScreenClass;
	UPROPERTY(EditDefaultsOnly, Category = "Widget")
		TSubclassOf<UUserWidget> PlayScreenClass;


private:
	UMainScreen* MainScreen;
	UPlayScreen* PlayScreen;

};
