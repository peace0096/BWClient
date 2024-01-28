// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	Super::Init();
}

void UMyGameInstance::ConnectToGameServer()
{
	asio::io_context io_context;
	/*PacketSession* session = new PacketSession(io_context);
	GameSession = PacketSessionPtr(session);*/

	GameSession = MakeShared<PacketSession>(io_context);

	GameSession->Connect(std::string("127.0.0.1"), 4242);
	std::thread t(boost::bind(&boost::asio::io_context::run, &io_context));

	t.join();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Thread Done!")));

	// TODO : 현재 표준형 스레드를 사용하는지라 GameSession이 클라이언트가 종료되어도 살아있는 문제가 발생하고 있습니다. FRunnableThread로 교체하면 해결될 것으로 예상됩니다.
	GameSession = NULL;
}

void UMyGameInstance::DisconnectFromGameServer()
{
	
}

