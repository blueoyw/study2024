#pragma once
#include <../pch.h>

namespace net 
{
	using namespace std;

	class Server
	{
	public:
		enum class State
		{
			Ready = 0,
			Start,
			Stop
		};

		Server(const Server&) = delete;
		Server& operator=(const Server&) = delete;

		virtual ~Server() {}

		virtual void start(uint16 port) = 0;
		virtual void start(string addess, uint16 port) = 0;
		virtual void stop(uint16 port) = 0;

		virtual const State getState() const = 0;

	protected:
		Server() {}
	};
}