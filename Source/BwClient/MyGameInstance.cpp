// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

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
		//MakeLoginReq(1010);
		AsyncRead();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Fail")));
	}

}

void UMyGameInstance::AsyncRead()
{
	memset(_recvBuffer, 0, RecvBufferSize);
	_socket->async_read_some(
		asio::buffer(
			_recvBuffer, RecvBufferSize
		),
		boost::bind(
			&UMyGameInstance::OnRead,
			this,
			asio::placeholders::error,
			asio::placeholders::bytes_transferred
		)
	);
}

void UMyGameInstance::AsyncWrite(asio::mutable_buffer& buffer)
{
	asio::async_write(
		*_socket, 
		buffer,
		boost::bind(
			&UMyGameInstance::OnWrite, 
			this,
			asio::placeholders::error, 
			asio::placeholders::bytes_transferred
		)
	);
}

void UMyGameInstance::OnRead(const boost::system::error_code& err, size_t size)
{
	if (!err)
	{
		// TODO : 패킷 핸들 함수
		AsyncRead();
	}
	else
	{
		// TODO Error 메세지
	}
}

void UMyGameInstance::OnWrite(const boost::system::error_code& err, size_t size)
{
	if (!err)
	{

	}
	else
	{
		// TODO Error 메세지
	}
}

// Packet 클래스로 변환 후 Deserialize
void UMyGameInstance::HandlePacket(char* ptr, size_t size)
{
	asio::mutable_buffer buffer = asio::buffer(ptr, size);
	int offset = 0;
	PacketHeader header;
	PacketUtil::ParseHeader(buffer, &header, offset);

	// 헤더 코드 확인
	std::cout << "HandlePacket " << message::MessageCode_Name(header.Code) << '\n';

	switch (header.Code)
	{
	case message::MessageCode::LOGIN_RES:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Login Success!")));
		break;
	}
}

void UMyGameInstance::MakeLoginReq(const int id)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("LoginReq Go..")));
	message::LoginReq loginReq;
	loginReq.set_id(id);
	const size_t requiredSize = PacketUtil::RequiredSize(loginReq);
	char* rawBuffer = new char[requiredSize];
	auto buffer = asio::buffer(rawBuffer, requiredSize);

	//if (!PacketUtil::Serialize(buffer, message::MessageCode::LOGIN_REQ, loginReq));
	//{
	//	// TODO : 패킷 잘못 적을 경우
	//}
	this->AsyncWrite(buffer);
}

void UMyGameInstance::HandleLoginRes(asio::mutable_buffer& buffer, const PacketHeader& header, int& offset)
{
	message::LoginRes msg;
	PacketUtil::Parse(msg, buffer, buffer.size(), offset);

	// 사실 할 거 없음.
}
