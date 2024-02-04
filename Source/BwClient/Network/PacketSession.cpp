// Fill out your copyright notice in the Description page of Project Settings.


#include "Network/PacketSession.h"
#include "NetworkWorker.h"



void PacketSession::Run(TSharedPtr<asio::io_context> io_context)
{
	NetworkThread = MakeShared<NetworkWorker>(io_context, AsShared());
}

void PacketSession::Connect(std::string host, int port)
{
	tcp::endpoint endpoint(asio::ip::make_address(host), port);
	_socket.async_connect(
		endpoint,
		boost::bind(
			&PacketSession::OnConnect,
			this,
			asio::placeholders::error
		)
	);
}

void PacketSession::AsyncWrite(asio::mutable_buffer& buffer)
{
	asio::async_write(
		_socket,
		buffer,
		boost::bind(
			&PacketSession::OnWrite,
			this,
			asio::placeholders::error,
			asio::placeholders::bytes_transferred
		)
	);
}

void PacketSession::OnConnect(const boost::system::error_code& err)
{
	if (!err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connection Success")));
		MakeLoginReq(1000);
	}
	else
	{
		// TODO : Error Code
		// Use FString::Printf with converted string
		FString formattedString = FString::Printf(TEXT("%s"), *FString(UTF8_TO_TCHAR(err.message().c_str())));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *formattedString);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, formattedString);
	}
}

void PacketSession::OnWrite(const boost::system::error_code& err, size_t size)
{
	if (!err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Write Size")));
	}
	else
	{
		// TODO : Error Code
	}
}

void PacketSession::AsyncRead()
{
	memset(_recvBuffer, 0, RecvBufferSize);
	_socket.async_read_some(
		asio::buffer(
			_recvBuffer,
			RecvBufferSize
		),
		boost::bind(
			&PacketSession::OnRead,
			this,
			asio::placeholders::error,
			asio::placeholders::bytes_transferred
		)
	);
}

void PacketSession::OnRead(const boost::system::error_code& err, size_t size)
{
	if (!err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Read")));
	}
	else
	{
		// TODO : Error
	}
}

void PacketSession::HandlePacket(char* ptr, size_t size)
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

void PacketSession::MakeLoginReq(const int id)
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
