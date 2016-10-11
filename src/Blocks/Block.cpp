/*
 * Block.cpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#include "Block.hpp"
#include "Air.hpp"

namespace Blocks {

int Block::serialize(char* data)
{
	data = new char[2];
	data[0] = m_id;
	data[1] = m_subid;
	return 2;
}

Block* Block::unserialize(char* data)
{
	Block* return_block;
	switch(data[0])
	{
		case AIR:
			return_block = new Air();
			break;
		default:
			return_block = 0;
	}
	delete[] data;
	return return_block;
}

} /* namespace Blocks */
