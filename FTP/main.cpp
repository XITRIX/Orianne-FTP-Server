//
//  main.cpp
//  FTP
//
//  Created by Daniil Vinogradov on 23.05.2018.
//  Copyright © 2018 NoNameDude. All rights reserved.
//

#include "stdafx.h"

#include "ftp_server.h"

int main() {
	try {
		boost::asio::io_service io_service;
		orianne::ftp_server server(io_service, 8080, "/Users/xitrix/Library/Developer/Xcode/DerivedData/FTP-hkdxebewxjmpxjbyxbkxeycpxpjp/Build");
		io_service.run();
		
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
