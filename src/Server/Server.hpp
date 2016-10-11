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
#include <map>

#include "SocketPortability.hpp"
#include "Connection.hpp"
#include "../Worlds/World.hpp"
#include "../Messages/Message.hpp"
#include "../Entities/Entity.hpp"

namespace Server {

class Server {
public:
	Server();
	virtual ~Server();
protected:
	void createThreads();
	void theMainLoop();
	void initOpenSSL();
	void createSSLContext();
	void configureSSLContext();
	void cleanupOpenSSL();
	void openSocket();
	void acceptConnection();
	void readConnection();
	void writeConnection();
	void process();
	void save();
	void readConsole();
	SOCKET m_socket;
	bool m_isRunning = true;
	SSL_CTX* m_openSSL_CTX;
	std::queue<Connection*> m_connections;
	std::queue<Messages::Message*> m_messagesToSend;
	std::queue<Entities::Entity*> m_entities;
	typedef std::map<std::string,Worlds::World*> Worlds;
	Worlds m_world_list;
	int m_number_of_threads=1;
	std::thread* m_threads;
};

} /* namespace Server */

#endif /* SRC_SERVER_SERVER_HPP_ */
