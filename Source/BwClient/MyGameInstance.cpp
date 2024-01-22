// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

using namespace boost;
using boost::asio::ip::tcp;

void UMyGameInstance::Init()
{
	Super::Init();
}

void UMyGameInstance::ConnectToGameServer()
{
	memset(_recvBuffer, 0, RecvBufferSize);
	boost::asio::io_context io_context;
	_socket = new tcp::socket(io_context);
	tcp::endpoint endpoint(asio::ip::make_address("127.0.0.1"), port);

	tcp::socket socket1(io_context);
	socket1.async_connect(endpoint, boost::bind(&UMyGameInstance::OnConnect, this, asio::placeholders::error));

	_socket->async_connect(endpoint, boost::bind(&UMyGameInstance::OnConnect, this, asio::placeholders::error));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Go")));
	std::thread t(boost::bind(&boost::asio::io_context::run, &io_context));
	t.join();
}

void UMyGameInstance::DisconnectFromGameServer()
{
}

void UMyGameInstance::OnConnect(const boost::system::error_code& err)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Success")));
	if (!err)
	{
		
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Fail")));
	}

}
