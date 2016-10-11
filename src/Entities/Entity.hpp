/*
 * Entity.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ENTITIES_ENTITY_HPP_
#define SRC_ENTITIES_ENTITY_HPP_

#include "../Serializable.hpp"
#include "../Renderable.hpp"
#include "../Items/Item.hpp"

namespace Entities {

class Entity:public Serializable, public Renderable {
public:
	Entity(float,float,float,float,float);
	static Entity* unserialize(char*);
	virtual bool processAttack(Items::Item*,Entities::Entity*) = 0;
	virtual void processMoving() = 0;
protected:
	const unsigned char m_id;
	unsigned char m_life=0xFF;
	float m_x;
	float m_y;
	float m_z;
	float m_h;
	float m_v;
};

} /* namespace Entities */

#endif /* SRC_ENTITIES_ENTITY_HPP_ */
