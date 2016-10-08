/*
 * Block.h
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_BLOCK_HPP_
#define SRC_BLOCKS_BLOCK_HPP_

#include "../CoordinateSystem/Coordinate.hpp"

namespace Blocks {

class Block {
public:
	Block(CoordinateSystem::Coordinate);
	void serialize(char[2]);
	virtual ~Block();
protected:
	unsigned char m_id;
	unsigned char m_subid;
	unsigned char m_density;
	CoordinateSystem::Coordinate m_coordinate;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_BLOCK_HPP_ */
