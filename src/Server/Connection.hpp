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

#include "../Entities/Player.hpp"
#include "../Messages/Message.hpp"
#include "SocketPortability.hpp"

namespace Server {

class Connection {
public:
	Connection(SOCKET,SSL_CTX*);
	Entities::Player* getPlayer();
	Connection* operator<<(Messages::Message*);
	Connection* operator>>(Messages::Message*);
	virtual ~Connection();
protected:
	Entities::Player* m_player;
	int m_remain_bytes_for_read;
};

} /* namespace Server */

#endif /* SRC_SERVER_CONNECTION_HPP_ */
