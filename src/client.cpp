/*
 * client.cpp
 *
 *  Created on: 01.10.2013
 *      Author: martek01
 */

#include "client.h"

namespace comlayer {

Client::Client(::boost::asio::ip::address address, unsigned short port) {

}

Client::~Client() {

}

bool Client::connect(::boost::asio::ip::address address, unsigned short port) {

}

void Client::disconnect() {

}

::boost::asio::ip::address Client::getAddress() {

}

unsigned short Client::getPort() {

}

} /* namespace comlayer */
