/*
 * Protocol.h
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_PROTOCOL_HPP_
#define SRC_PROTOCOL_PROTOCOL_HPP_

#include <string>

namespace Protocol {

class Protocol {
public:
	Protocol(bool,int,std::string);
	virtual void serialize(char*,int*) = 0;
	virtual ~Protocol();
protected:
	bool m_broadcast=false;
	int m_broadcast_range=0;
	std::string m_to_player_name;
	char m_id;
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_PROTOCOL_HPP_ */
