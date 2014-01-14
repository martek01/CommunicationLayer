/*
 * httpclient.h
 *
 *  Created on: 01.10.2013
 *      Author: martek01
 */

#ifndef HTTPCLIENT_H_
#define HTTPCLIENT_H_

#include <boost/asio/ip/address.hpp>
#include <boost/asio/ip/tcp.hpp>

namespace comlayer {

class HTTPClient {
protected:
	boost::asio::ip::tcp::socket *socket;

public:
	HTTPClient(::boost::asio::ip::address address, unsigned short port = 80);
	virtual ~HTTPClient();

	bool connect(::boost::asio::ip::address address, unsigned short port = 80);
	void disconnect();


};

} /* namespace comlayer */

#endif /* HTTPCLIENT_H_ */
