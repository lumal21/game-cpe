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
	void setMove(char);
	bool processAttack(Items::Item*,Entities::Entity*);
	void processMoving();
protected:
	const unsigned char id=0x00;

};

} /* namespace Entities */

#endif /* SRC_ENTITIES_PLAYER_HPP_ */
