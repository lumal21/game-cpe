/*
 * Chunk.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_WORLD_CHUNK_HPP_
#define SRC_WORLD_CHUNK_HPP_

#include "../Blocks/Block.hpp"
#include "../CoordinateSystem/Coordinate.hpp"

namespace Protocol {

class Chunk {
public:
	Chunk(int,int);
	void serialize(char*);
	void setBlock(Blocks::Block*,CoordinateSystem::Coordinate);
	Blocks::Block* getBlock(CoordinateSystem::Coordinate);
	virtual ~Chunk();
protected:
	int m_x;
	int m_y;
	Blocks::Block* m_blocks[16][16][256];
};

} /* namespace Protocol */

#endif /* SRC_WORLD_CHUNK_HPP_ */
