/*
 * client.h
 *
 *  Created on: 01.10.2013
 *      Author: martek01
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <boost/asio/ip/address.hpp>
#include <boost/asio/ip/tcp.hpp>

namespace comlayer {

class Client {
protected:
	boost::asio::ip::tcp::socket *socket;

public:
	Client(::boost::asio::ip::address address, unsigned short port);
	virtual ~Client();

	bool connect(::boost::asio::ip::address address, unsigned short port);
	void disconnect();

	::boost::asio::ip::address getAddress();
	unsigned short getPort();
};

} /* namespace comlayer */

#endif /* CLIENT_H_ */
