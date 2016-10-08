/*
 * Block.h
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_BLOCK_HPP_
#define SRC_BLOCKS_BLOCK_HPP_

#include "../Items/Item.hpp"
#include "../Entities/Entity.hpp"

namespace Blocks {

class Block {
public:
	Block(int,int,char);
	void serialize(char*);
	static Block* serialize(char*);
	bool processAttack(Items::Item*,Entities::Entity*);
	virtual void render();
	virtual ~Block();
protected:
	int m_x;
	int m_y;
	char m_z;
	unsigned char m_id;
	unsigned char m_subid;
	unsigned char m_density;
	char m_life;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_BLOCK_HPP_ */
