#pragma once
#include "../pch.h"

using namespace std;
namespace net 
{
	enum CloseReason
	{
		ActiveClose = 0,
		Disconnected = 1,
		TimeOut
	};

	class Session
	{
	public:
		Session(const Session&) = delete; // prevent copy construct
		Session& operator=(const Session&) = delete; // prevent assignment operator

		virtual ~Session() {}

		virtual const int getId() const = 0;
		virtual bool getRemoteEndPoint(string& ip, uint16& port) = 0;
		virtual void start() = 0;
		virtual void stop() = 0;
		virtual void send(const byte* data, size_t size) = 0;
		virtual void read(const byte* data, size_t size) = 0;
		virtual const bool isOpen() const = 0;
	protected:
		Session() {}
	};

	using SessionOpenHandler = function<void(const Ptr<Session>&)>;
	using SessionCloseHandler = function<void(const Ptr<Session>&, const CloseReason& cr)>;
	using MessageHandler = function<void(const Ptr<Session>&)>;
}


