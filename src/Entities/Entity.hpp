/*
 * Entity.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ENTITIES_ENTITY_HPP_
#define SRC_ENTITIES_ENTITY_HPP_

#include "../CoordinateSystem/CoordinateWithAngle.hpp"

namespace Entities {

class Entity {
public:
	Entity();
	void move(CoordinateSystem::CoordinateWithAngle);
	virtual ~Entity();
protected:
	unsigned char id;
	CoordinateSystem::CoordinateWithAngle m_coordinate;
	char m_velocityX=0;
	char m_velocityY=0;
	char m_velocityZ=0;
	char moving=0;
};

} /* namespace Entities */

#endif /* SRC_ENTITIES_ENTITY_HPP_ */
