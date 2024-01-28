// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BwClient.h"
/**
 * 
 */
class BWCLIENT_API PacketSession
{
public:
	PacketSession(asio::io_context& io_context) : _socket(io_context)
	{
		memset(_recvBuffer, 0, RecvBufferSize);
	}

	~PacketSession()
	{
	}

	void Connect(std::string host, int port);

	void AsyncWrite(asio::mutable_buffer& buffer);

private:
	// 접속 컨텐츠 코드
	void OnConnect(const boost::system::error_code& err);

	void OnWrite(const boost::system::error_code& err, size_t size);

	void AsyncRead();

	void OnRead(const boost::system::error_code& err, size_t size);

private:
	static const int RecvBufferSize = 1024;
	tcp::socket _socket;
	char _recvBuffer[RecvBufferSize];
	std::string _sendMsg;
};