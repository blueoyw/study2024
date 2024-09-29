#pragma once
#include "../pch.h"
#include <boost/asio/ip/tcp.hpp>

namespace net
{
	using tcp = boost::asio::ip::tcp;

	class TcpSession :
		public Session, public std::enable_shared_from_this<TcpSession>
	{
	public:
		TcpSession(const TcpSession& tcpSession) = delete;
		TcpSession& operator=(const TcpSession& tcpSession) = delete;
		TcpSession(tcp::socket socket, int id, ServerConfig& config);
		TcpSession(tcp::socket socket, int id, ClientConfig& config, tcp::endpoint& ep);
		
		virtual ~TcpSession() {}
	};
}

