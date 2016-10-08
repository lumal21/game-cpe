/*
 * Protocol.h
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_PROTOCOL_HPP_
#define SRC_PROTOCOL_PROTOCOL_HPP_

namespace Protocol {

class Protocol {
public:
	Protocol();
	virtual void serialize(char*,int&) = 0;
	virtual ~Protocol();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_PROTOCOL_HPP_ */
