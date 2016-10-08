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
#include "../Entities/Entity.hpp"

namespace Server {

class Server {
public:
	Server();
	void sendMessage(Protocol::Protocol*);
	virtual ~Server();
protected:
	void createThreads();
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
	void process();
	void save();
	void readConsole();
	int m_socket;
	bool m_isRunning = true;
	SSL_CTX* m_openSSL_CTX;
	std::queue<Connection*> m_connections;
	std::queue<Protocol::Protocol*> m_messagesToSend;
	std::queue<Protocol::Protocol*> m_messagesToProcess;
	std::queue<Entities::Entity*> m_entities;
	std::thread* m_threads;
};

} /* namespace Server */

#endif /* SRC_SERVER_SERVER_HPP_ */
