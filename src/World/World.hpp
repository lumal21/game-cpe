/*
 * World.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_WORLD_WORLD_HPP_
#define SRC_WORLD_WORLD_HPP_

#include <vector>
#include <string>

#include "Chunk.hpp"

namespace World {

class World {
public:
	World(std::string);
	void loadChunkFromFile(int,int);
	void unloadChunk(int,int);
	void loadChunkFromNet(char*);
	std::string getWorldName();
	virtual ~World();
protected:
	std::string m_world_name;
	typedef std::vector<Chunk> ChunkList;
	std::vector<ChunkList> m_chunks;
};

} /* namespace World */

#endif /* SRC_WORLD_WORLD_HPP_ */
