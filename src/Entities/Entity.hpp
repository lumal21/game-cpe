/*
 * Entity.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ENTITIES_ENTITY_HPP_
#define SRC_ENTITIES_ENTITY_HPP_

#include "../Items/Item.hpp"

namespace Entities {

class Entity {
public:
	Entity();
	virtual void serialize(char*);
	static Entity* unserialize(char*);
	void move(float,float,float);
	void setAngle(float,float);
	void setMoving(char);
	bool processAttack(Items::Item*,Entities::Entity*);
	void processMoving();
	virtual void render();
	virtual ~Entity();
protected:
	unsigned char m_id;
	long long m_UIN;
	unsigned char m_life;
	float m_x;
	float m_y;
	float m_z;
	float m_h;
	float m_v;
	char m_velocityX=0;
	char m_velocityY=0;
	char m_velocityZ=0;
	char m_moving=0;
};

} /* namespace Entities */

#endif /* SRC_ENTITIES_ENTITY_HPP_ */
