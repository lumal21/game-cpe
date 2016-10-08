/*
 * Player.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ENTITIES_PLAYER_HPP_
#define SRC_ENTITIES_PLAYER_HPP_

#include <string>

#include "Entity.hpp"

namespace Entities {

class Player: public Entity {
public:
	Player(std::string,long long);
	std::string getPlayerName();
	long long getUIN();
	virtual ~Player();
protected:
	unsigned char id=0x00;
	long long m_UIN;
	std::string m_playerName;
};

} /* namespace Entities */

#endif /* SRC_ENTITIES_PLAYER_HPP_ */
