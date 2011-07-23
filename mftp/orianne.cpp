#include "stdafx.h"

#include "ftp_server.h"

int main() {
	try {
		boost::asio::io_service io_service;
		orianne::ftp_server server(io_service);
		io_service.run();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
