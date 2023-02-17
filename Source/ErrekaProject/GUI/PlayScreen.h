#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayScreen.generated.h"

UCLASS()
class ERREKAPROJECT_API UPlayScreen : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPlayScreen(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;
	virtual void NativePreConstruct() override;
};