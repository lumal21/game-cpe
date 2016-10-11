/*
 * Air.hpp
 *
 *  Created on: 11 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_AIR_HPP_
#define SRC_BLOCKS_AIR_HPP_

#include "Block.hpp"

namespace Blocks {

class Air: public Block {
public:
	bool processAttack(Items::Item*,Entities::Entity*);
	void render();
protected:
	const unsigned char m_id=AIR;
	const unsigned char m_subid=0x00;
	const unsigned char density=0x00;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_AIR_HPP_ */
