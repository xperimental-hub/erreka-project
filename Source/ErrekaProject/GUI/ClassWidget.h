// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "ClassWidget.generated.h"

/**
 * 
 */
UCLASS()
class ERREKAPROJECT_API UClassWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UClassWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;
	virtual void NativePreConstruct() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindAction))
		UTextBlock* Txt_BtnClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindAction))
		UImage* Img_Class;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindAction))
		UImage* Img_Star;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true", OverrideNativeName = "BtnText"))
		FText BtnText = FText::FromString("Class X : This is Class X");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true", OverrideNativeName = "ImgClass"))
		UTexture2D* ImgClass;


};
