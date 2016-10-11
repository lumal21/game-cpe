/*
 * Protocol.h
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_MESSAGES_MESSAGE_HPP_
#define SRC_MESSAGES_MESSAGE_HPP_

#include <string>
#include <vector>

#include "../Serializable.hpp"

namespace Messages {

class Message: public Serializable {
public:
	Message();
	Message(std::string);
	Message(int,std::string);
	Message(int,std::vector<std::string>);
	static Message* unserialize(char*);
	unsigned int getRange();
	std::vector<std::string> getToPlayerNames();
	virtual ~Message();
protected:
	unsigned int m_broadcast_range=0;
	std::vector<std::string> m_to_players;
};

} /* namespace Protocol */

#endif /* SRC_MESSAGES_MESSAGE_HPP_ */
