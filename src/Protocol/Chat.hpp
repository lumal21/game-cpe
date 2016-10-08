/*
 * Chat.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_CHAT_HPP_
#define SRC_PROTOCOL_CHAT_HPP_

#include "Protocol.hpp"

namespace Protocol {

class Chat: public Protocol {
public:
	Chat();
	virtual ~Chat();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_CHAT_HPP_ */
