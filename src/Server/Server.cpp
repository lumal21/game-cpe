/*
 * Server.cpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#include "Server.hpp"

#include "../ConsoleOutput.hpp"
#include "../Configuration.hpp"

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
	#ifdef WIN32
		closesocket(m_socket);
		WSACleanup();
	#else
		close(m_socket);
	#endif
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
		ConsoleOutput::registerFatalErrorWithOpenSSL("Context",ConsoleOutput::ErrorsCode::OPENSSL_CONTEXT);
	}
}

void Server::configureSSLContext()
{
    if (SSL_CTX_use_certificate_file(m_openSSL_CTX, ".\cert.pem", SSL_FILETYPE_PEM) < 0)
    	ConsoleOutput::registerFatalErrorWithOpenSSL("Certificate",ConsoleOutput::ErrorsCode::OPENSSL_CERTIFICATE);

    if (SSL_CTX_use_PrivateKey_file(m_openSSL_CTX, ".\key.pem", SSL_FILETYPE_PEM) < 0 )
    	ConsoleOutput::registerFatalErrorWithOpenSSL("Key",ConsoleOutput::ErrorsCode::OPENSSL_KEY);
}

void Server::openSocket()
{
    struct sockaddr_in6 addr;

    addr.sin6_family = AF_INET6;
    addr.sin6_port = Configuration::getServerPort();
    addr.sin6_addr = Configuration::getServerIP();

    m_socket = socket(AF_INET6, SOCK_STREAM, 0);
    if (m_socket == INVALID_SOCKET)
    	ConsoleOutput::registerFatalErrorWithErrno("Socket",ConsoleOutput::ErrorsCode::SOCKET_CREATE);

    if (bind(m_socket, (struct sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR)
    	ConsoleOutput::registerFatalErrorWithErrno("Bind",ConsoleOutput::ErrorsCode::SOCKET_BIND);

    if (listen(m_socket, Configuration::getListenQueue()) == SOCKET_ERROR)
    	ConsoleOutput::registerFatalErrorWithErrno("Listen",ConsoleOutput::ErrorsCode::SOCKET_LISTEN);
}

void Server::createThreads()
{
	int number_of_threads = std::thread::hardware_concurrency();
	if(number_of_threads > 1) m_number_of_threads = number_of_threads;
	m_threads = new std::thread[number_of_threads];
	for(int i = 0 ; i < m_number_of_threads ; i++)
		m_threads[i] = std::thread(&Server::theMainLoop,this);
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

void Server::acceptConnection()
{
	SOCKET connection_descriptor = accept(m_socket,NULL,NULL);
	if(connection_descriptor != INVALID_SOCKET){
		Connection* connection = new Connection(connection_descriptor,m_openSSL_CTX);

	}else{

	}
}

} /* namespace Server */
