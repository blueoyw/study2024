#pragma once
#include "../pch.h"

namespace net
{
	using namespace std;

	class ClientConfig
	{
	public:
		ClientConfig()
			: noDelay_(true)
			, minReceive_(1024 * 4)
			, maxReceiveBufferSize_(1024 * 10 * 10)
		{}

		const bool getNoDelay() const { return noDelay_;  }
		const size_t getMinReceive() const { return minReceive_; }
		const size_t getMaxReceiveBufferSize() const { return maxReceiveBufferSize_; }

		const string toString()
		{
			string str;
			str.append(", noDelay=%d", noDelay_);
			str.append(", minReceive_=%lu", minReceive_);
			str.append(", maxReceiveBufferSize_=%lu", maxReceiveBufferSize_);
			return str;
		}

	private:
		bool noDelay_;
		size_t minReceive_;
		size_t maxReceiveBufferSize_;
	};

}