// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainScreen.generated.h"

/**
 * 
 */
UCLASS()
class ERREKAPROJECT_API UMainScreen : public UUserWidget
{
	GENERATED_BODY()

protected:

	UMainScreen(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
};


