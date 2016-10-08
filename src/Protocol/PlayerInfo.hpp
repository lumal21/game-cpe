/*
 * PlayerInfo.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_PLAYERINFO_HPP_
#define SRC_PROTOCOL_PLAYERINFO_HPP_

#include "Protocol.hpp"

namespace Protocol {

class PlayerInfo: public Protocol {
public:
	PlayerInfo();
	virtual ~PlayerInfo();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_PLAYERINFO_HPP_ */
