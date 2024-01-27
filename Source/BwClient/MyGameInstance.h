// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <string>
#include <boost/asio.hpp>
#include <boost/bind/bind.hpp>
#include <boost/asio/buffer.hpp>
#include "Message.pb.h"
#include "Packet.h"
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
	void AsyncRead();
	void AsyncWrite(asio::mutable_buffer& buffer);
	void OnRead(const boost::system::error_code& err, size_t size);
	void OnWrite(const boost::system::error_code& err, size_t size);
	void HandlePacket(char* ptr, size_t size);

// 송신할 패킷 처리
private:
	void MakeLoginReq(const int id);

// 수신받는 패킷 처리
private:
	void HandleLoginRes(asio::mutable_buffer& buffer, const PacketHeader& header, int& offset);

private:
	static const int port = 4242;
	static const int RecvBufferSize = 1024;
	tcp::socket* _socket;
	char _recvBuffer[RecvBufferSize];
	std::string _sendMsg;
};
