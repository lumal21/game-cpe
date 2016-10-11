/*
 * Chunk.cpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#include "Chunk.hpp"

namespace Worlds {

Chunk::Chunk(int x,int y) {
	m_x = x;
	m_y = y;
}

int Chunk::serialize(char* return_serialized)
{
	const int size = 16 * 16 * 256;
	return_serialized = new char[size];

	return size;
}

Blocks::Block* Chunk::getBlock(int x, int y, int z)
{
	return m_blocks[x][y][z];
}

void Chunk::setBlock(int x, int y, int z, Blocks::Block* block)
{
	if(m_blocks[x][y][z])
		delete m_blocks[x][y][z];
	m_blocks[x][y][z] = block;
}

Chunk::~Chunk() {
	for(int x = 0; x < 16 ; x++)
		for(int y = 0; y < 16 ; y++)
			for(int z = 0; z < 256 ; z++)
				delete m_blocks[x][y][z];
}

} /* namespace Protocol */
