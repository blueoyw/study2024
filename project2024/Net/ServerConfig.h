#pragma once
#include "../pch.h"

namespace net
{
	using namespace std;

	class ServerConfig
	{
	public:
		ServerConfig()
			: threadCount_(1), maxSession_(1024), noDelay_(true)
			, minReceive_(1024 * 4), maxReceiveBufferSize_(1024 * 10 * 10)
		{}

		const size_t getThreadCount() const { return threadCount_; }
		const size_t getMaxSession() const { return maxSession_; }
		const bool getNoDelay() const { return noDelay_; }
		const size_t getMinReceive() const { return minReceive_; }
		const size_t getMaxReceiveBufferSize() const { return maxReceiveBufferSize_; }

		const string toString()
		{
			string str;
			str.append("theadCount=%lu", threadCount_);
			str.append(", maxSession=%lu", maxSession_);
			str.append(", noDelay=%d", noDelay_);
			str.append(", minReceive_=%lu", minReceive_);
			str.append(", maxReceiveBufferSize_=%lu", maxReceiveBufferSize_);
			return str;
		}

	private:
		size_t threadCount_;
		size_t maxSession_;
		bool noDelay_;
		size_t minReceive_;
		size_t maxReceiveBufferSize_;
	};

}