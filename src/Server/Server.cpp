/*
 * Server.cpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#include "Server.hpp"

#include <unistd.h>
#include "../ConsoleOutput.hpp"
#include <sys/socket.h>
#include <arpa/inet.h>

namespace Server {

Server::Server()
{
	initOpenSSL();
	createSSLContext();
	configureSSLContext();
	openSocket();
	createThreads();
}

Server::~Server()
{
	close(m_socket);
	cleanupOpenSSL();
}

void Server::initOpenSSL()
{
    SSL_load_error_strings();
    OpenSSL_add_ssl_algorithms();
}

void Server::createSSLContext()
{
	m_openSSL_CTX = SSL_CTX_new(TLSv1_2_server_method());
	if (!m_openSSL_CTX) {
		ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_CONTEXT);
	}
}

void Server::configureSSLContext()
{
    if (SSL_CTX_use_certificate_file(m_openSSL_CTX, "cert.pem", SSL_FILETYPE_PEM) < 0)
    	ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_CERTIFICATE);

    if (SSL_CTX_use_PrivateKey_file(m_openSSL_CTX, "key.pem", SSL_FILETYPE_PEM) < 0 )
    	ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_KEY);
}

void Server::openSocket()
{
    struct sockaddr_in6 addr;

    addr.sin6_family = AF_INET;
    addr.sin6_port = htons(6000);
    addr.sin6_addr.s_addr = htonl(INADDR_ANY);

    m_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (m_socket)
    	ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_KEY);

    if (bind(m_socket, (struct sockaddr*)&addr, sizeof(addr)) < 0)
    	ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_KEY);

    if (listen(m_socket, 1) < 0)
    	ConsoleOutput::registerFatalError(ERR_error_string(ERR_get_error(),NULL),ConsoleOutput::ErrorsCode::OPENSSL_KEY);
}

void Server::createThreads()
{
	int number_of_threads = std::thread::hardware_concurrency();
	if(number_of_threads > 1) m_number_of_threads = number_of_threads;
	m_threads = new std::thread[number_of_threads];
	for(int i = 0 ; i < m_number_of_threads ; i++)
		m_threads[i] = std::thread(theMainLoop);
	readConsole();
	for(int i = 0 ; i < m_number_of_threads ; i++)
		m_threads[i].join();
	delete[] m_threads;
}

void Server::theMainLoop()
{
	while(m_isRunning)
	{
		acceptConnection();
		readConnection();
		process();
		writeConnection();
		save();
	}
	save();
}

} /* namespace Server */
