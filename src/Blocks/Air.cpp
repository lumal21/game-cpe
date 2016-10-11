/*
 * Air.cpp
 *
 *  Created on: 11 de out de 2016
 *      Author: lumal21
 */

#include "Air.hpp"

namespace Blocks {

bool Air::processAttack(Items::Item* item,Entities::Entity* entity)
{
	(void) item;
	(void) entity;
	return false;
}

void Air::render(){}

} /* namespace Blocks */
