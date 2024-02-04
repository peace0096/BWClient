// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
//#include <string>
//#include <boost/asio.hpp>
//#include <boost/bind/bind.hpp>
//#include <boost/asio/buffer.hpp>
//#include "Message.pb.h"
#include "PacketSession.h"
#include "BwClient.h"
#include "MyGameInstance.generated.h"

//using namespace boost;
//using boost::asio::ip::tcp;

/**
 * 
 */
UCLASS()
class BWCLIENT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
	~UMyGameInstance()
	{

	}

	// 접속 함수
	UFUNCTION(BlueprintCallable)
	void ConnectToGameServer();

	// 끊기
	UFUNCTION(BlueprintCallable)
	void DisconnectFromGameServer();

private:
	PacketSessionRef GameSession;
	PacketSession* session;
};
