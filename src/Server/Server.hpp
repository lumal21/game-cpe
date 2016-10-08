/*
 * Server.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_SERVER_SERVER_HPP_
#define SRC_SERVER_SERVER_HPP_

#include <thread>
#include <queue>
#include <openssl/ssl.h>
#include <openssl/err.h>

#include "Connection.hpp";
#include "../Protocol/Protocol.hpp"

namespace Server {

class Server {
public:
	Server();
	virtual ~Server();
protected:
	void theMainLoop();
	void initOpenSSL();
	void createSSLContext();
	void configureSSLContext();
	void cleanupOpenSSL();
	void openSocket();
	void bindSocket();
	void listenSocket();
	void acceptConnection();
	void readConnection();
	void writeConnection();
	void readConsole();
	int m_socket;
	bool m_isRunning = true;
	SSL_CTX* m_openSSL_CTX;
	std::queue<Connection*> m_connections;
	std::queue<Protocol::Protocol*> m_messagesToSend;
	std::thread* m_threads;
};

} /* namespace Server */

#endif /* SRC_SERVER_SERVER_HPP_ */
