// project2024.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <boost/asio.hpp>

using namespace std;
using namespace boost::asio;

void handler(const boost::system::error_code& error)
{
	if (!error)
	{
		cout << "5 seconds past" << endl;
	}
	else
	{
		cout << "Error:" << error.message() << endl;
	}
}

int main(int argc, int argv[])
{
    std::cout << "Hello World!\n"; 
	cout << "second commit\n";
	cout << "test";

	io_service ios;
	
	boost::asio::steady_timer t(ios, boost::asio::chrono::seconds(5));
	t.async_wait(handler);
	cout << "before run" << endl;

	ios.run();
	return 0;
}
