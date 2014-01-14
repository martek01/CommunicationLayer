/*
 * main.cpp
 *
 *  Created on: 14.01.2014
 *      Author: martek01
 */
 
#include <iostream>
#include <comlayer.h>
 
int main (int argc, char **argv) {
	// create test server
	comlayer::Server testServer;
	if (!testServer.open(12345)) {
		std::cout << "Test server could not be opened on port 12345" << std::endl;
		return 1;
	}
	
	std::cout << "Opened test server on port " << testServer.getPort() << std::endl;
	
	// close server
	testServer.close();

	return 0;
}