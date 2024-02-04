// Fill out your copyright notice in the Description page of Project Settings.


#include "Network/NetworkWorker.h"


NetworkWorker::NetworkWorker(asio::io_context& io_context, TSharedPtr<PacketSession> Session)
	: _io_context(io_context), SessionRef(Session)
{
	Thread = FRunnableThread::Create(this, TEXT("NetworkWorker"));
}

NetworkWorker::~NetworkWorker()
{
}

bool NetworkWorker::Init()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Network Thread Init")));

	return true;
}

uint32 NetworkWorker::Run()
{
	try
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Network Thread Running")));

		_io_context.run();
		while (true)
		{
		}
;		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Network Thread Done")));
		
	}
	catch (const std::exception&)
	{
		
	}
	return 0;
}

void NetworkWorker::Exit()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Network Thread Exited")));
}

void NetworkWorker::Stop()
{
	
}

void NetworkWorker::Destroy()
{
	Running = false;
}
