// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Network/NetworkWorker.h"

void UMyGameInstance::Init()
{
	Super::Init();
}


void UMyGameInstance::ConnectToGameServer()
{
	TSharedPtr<asio::io_context> io_contextRef = MakeShared<asio::io_context>();

	//_sock = new tcp::socket(io_context);
	GameSession = MakeShared<PacketSession>(io_contextRef);
	
	GameSession->Connect(std::string("127.0.0.1"), 4242);
	GameSession->Run(io_contextRef);

	//std::thread t(boost::bind(&boost::asio::io_context::run, &io_context));

	//t.join();

	int count = GameSession.GetSharedReferenceCount();
	
}

void UMyGameInstance::DisconnectFromGameServer()
{
	
}

