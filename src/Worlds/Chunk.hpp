/*
 * Chunk.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_WORLD_CHUNK_HPP_
#define SRC_WORLD_CHUNK_HPP_

#include "../Serializable.hpp"
#include "../Blocks/Block.hpp"

namespace Worlds {

class Chunk: public Serializable {
public:
	Chunk(int,int);
	int serialize(char*);
	static Chunk* unserialize(char*);
	void setBlock(int,int,int,Blocks::Block*);
	Blocks::Block* getBlock(int,int,int);
	virtual ~Chunk();
protected:
	int m_x;
	int m_y;
	Blocks::Block* m_blocks[16][16][256];
};

} /* namespace Protocol */

#endif /* SRC_WORLD_CHUNK_HPP_ */
