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

namespace Worlds {

class World {
public:
	World(std::string);
	void loadChunkFromFile(int,int);
	void saveChunkToFile(int,int);
	void unloadChunk(int,int);
	void loadChunkFromNet(char*);
	void saveWorld();
	std::string getWorldName();
	virtual ~World();
protected:
	std::string m_world_name;
	typedef std::vector<std::vector<Chunk*>> ChunkList;
	ChunkList m_chunks;
};

} /* namespace World */

#endif /* SRC_WORLD_WORLD_HPP_ */
