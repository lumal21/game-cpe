/*
 * SocketPortability.hpp
 *
 *  Created on: 11 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_SERVER_SOCKETPORTABILITY_HPP_
#define SRC_SERVER_SOCKETPORTABILITY_HPP_

#ifdef WIN32
	#include <winsock2.h>
	#include <ws2tcpip.h>
	#define GET_SOCKET_ERROR_CODE WSAGetLastError()
#else
	#define GET_SOCKET_ERROR_CODE errno
	#define SOCKET int
	#define INVALID_SOCKET -1
	#define SOCKET_ERROR -1

	#include <sys/socket.h>
	#include <arpa/inet.h>
	#include <unistd.h>
#endif



#endif /* SRC_SERVER_SOCKETPORTABILITY_HPP_ */
