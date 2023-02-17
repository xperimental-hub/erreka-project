// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassWidget.h"

UClassWidget::UClassWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UClassWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
}

void UClassWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	Txt_BtnClass->SetText(BtnText);
	Img_Class->SetBrushFromTexture(ImgClass);
}

