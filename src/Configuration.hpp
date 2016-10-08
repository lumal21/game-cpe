/*
 * Configuration.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_CONFIGURATION_HPP_
#define SRC_CONFIGURATION_HPP_

#include <arpa/inet.h>

class Configuration {
public:
	static void load();
	static uint16_t getServerPort();
	static in6_addr getServerIP();
	static int getListenQueue();
};

#endif /* SRC_CONFIGURATION_HPP_ */
