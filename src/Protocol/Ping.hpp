/*
 * Ping.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_PING_HPP_
#define SRC_PROTOCOL_PING_HPP_

#include "Protocol.hpp"

namespace Protocol {

class Ping: public Protocol {
public:
	Ping();
	Ping(std::string);
	virtual ~Ping();
protected:
	char m_id = 0x00;
};

} /* namespace Entities */

#endif /* SRC_PROTOCOL_PING_HPP_ */
