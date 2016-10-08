/*
 * LogonRequest.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_LOGONREQUEST_HPP_
#define SRC_PROTOCOL_LOGONREQUEST_HPP_

#include <string>

#include "Protocol.hpp"

namespace Protocol {

class LogonRequest: public Protocol {
public:
	LogonRequest(std::string,std::string);
	std::string getPlayerName();
	std::string getPassword();
	virtual ~LogonRequest();
protected:
	std::string m_player_name;
	std::string m_password;
	char m_id = 0x02;
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_LOGONREQUEST_HPP_ */
