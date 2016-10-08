/*
 * RegisterRequest.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_REGISTERREQUEST_HPP_
#define SRC_PROTOCOL_REGISTERREQUEST_HPP_

#include "Protocol.hpp"

namespace Protocol {

class RegisterRequest: public Protocol {
public:
	RegisterRequest();
	virtual ~RegisterRequest();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_REGISTERREQUEST_HPP_ */
