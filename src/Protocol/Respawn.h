/*
 * Respawn.h
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_RESPAWN_H_
#define SRC_PROTOCOL_RESPAWN_H_

#include "Protocol.hpp"

namespace Protocol {

class Respawn: public Protocol {
public:
	Respawn();
	virtual ~Respawn();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_RESPAWN_H_ */
