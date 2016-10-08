/*
 * Chunk.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_PROTOCOL_CHUNK_HPP_
#define SRC_PROTOCOL_CHUNK_HPP_

#include "Protocol.hpp"

namespace Protocol {

class Chunk: public Protocol {
public:
	Chunk();
	virtual ~Chunk();
};

} /* namespace Protocol */

#endif /* SRC_PROTOCOL_CHUNK_HPP_ */
