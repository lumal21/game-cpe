/*
 * Connection.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_SERVER_CONNECTION_HPP_
#define SRC_SERVER_CONNECTION_HPP_

#include <openssl/ssl.h>
#include <openssl/err.h>

#include "../Protocol/Protocol.hpp"
#include "../Entities/Player.hpp"

namespace Server {

class Connection {
public:
	Connection(int,SSL_CTX*);
	bool write(Protocol::Protocol*);
	Protocol::Protocol* read();
	Entities::Player* getPlayer();
	virtual ~Connection();
};

} /* namespace Server */

#endif /* SRC_SERVER_CONNECTION_HPP_ */
