// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <string>
#include <google/protobuf/port_def.inc>
#include <boost/asio.hpp>
#include <boost/bind/bind.hpp>
#include <boost/asio/buffer.hpp>
#include "MyGameInstance.generated.h"

using namespace boost;
using boost::asio::ip::tcp;

/**
 * 
 */
UCLASS()
class BWCLIENT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;

	UFUNCTION(BlueprintCallable)
	void ConnectToGameServer();

	UFUNCTION(BlueprintCallable)
	void DisconnectFromGameServer();

private:
	void OnConnect(const boost::system::error_code& err);

private:
	static const int port = 4242;
	static const int RecvBufferSize = 1024;
	tcp::socket* _socket;
	char _recvBuffer[RecvBufferSize];
	std::string _sendMsg;
};
