// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IWebSocket.h"
#include "WebSocketsModule.h"
#include "Engine.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MMDD_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	


	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void fun01()
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World!"));
	}
	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void fun02()
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World!"));
	}






	//WebSocketœ‡πÿ
	static TSharedPtr<IWebSocket> WebSocket;
	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void WebSocketInit(const FString & Address);

	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void WebSocketConnect();

	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void WebSocketSend(const FString &Message);

	UFUNCTION(BlueprintCallable, Category = "MMDD")
	static void WebSocketClose();



};
