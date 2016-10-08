/*
 * Pong.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_PONG_HPP_
#define SRC_PROTOCOL_PONG_HPP_

#include "Protocol.hpp"

namespace Protocol {

class Pong: public Protocol {
public:
	Pong();
	Pong(std::string);
	virtual ~Pong();
protected:
	char m_id = 0x01;
};

} /* namespace Entities */

#endif /* SRC_PROTOCOL_PONG_HPP_ */
