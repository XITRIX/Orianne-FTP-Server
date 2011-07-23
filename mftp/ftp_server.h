#pragma once

#include "stdafx.h"

namespace orianne {

class ftp_server {
public:
	ftp_server(boost::asio::io_service& io_service);
	void start();

private:
	
	boost::asio::ip::tcp::acceptor acceptor;
};

}