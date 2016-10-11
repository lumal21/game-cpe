/*
 * Block.h
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_BLOCK_HPP_
#define SRC_BLOCKS_BLOCK_HPP_

#include "../Serializable.hpp"
#include "../Renderable.hpp"
#include "../Items/Item.hpp"
#include "../Entities/Entity.hpp"

namespace Blocks {

class Block:public Serializable, public Renderable {
public:
	Block(int,int,int);
	enum BLOCKS_TYPE
	{
		AIR,
		ROCK_MATRIX,
	};
	int serialize(char*);
	static Block* unserialize(char*);
	virtual bool processAttack(Items::Item*,Entities::Entity*) = 0;
protected:
	int m_x,m_y,m_z;
	const unsigned char m_id=0x00;
	const unsigned char m_subid=0x00;
	const unsigned char density=0x00;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_BLOCK_HPP_ */
