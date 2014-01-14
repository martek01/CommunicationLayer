/*
 * server.h
 *
 *  Created on: 01.10.2013
 *      Author: martek01
 */

#ifndef SERVER_H_
#define SERVER_H_

#include <boost/asio/ip/tcp.hpp>

namespace comlayer {

class Server {
private:
	boost::asio::ip::tcp::socket *socket;

public:
	Server(unsigned short port = 0);
	virtual ~Server();

	bool open(unsigned short port);
	void close();

	unsigned short getPort();
};

} /* namespace comlayer */

#endif /* SERVER_H_ */
