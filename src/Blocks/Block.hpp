/*
 * Block.h
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_BLOCK_HPP_
#define SRC_BLOCKS_BLOCK_HPP_

namespace Blocks {

class Block {
public:
	Block();
	void serialize(char*);
	static Block* serialize(char*);
	virtual ~Block();
protected:
	unsigned char m_id;
	unsigned char m_subid;
	unsigned char m_density;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_BLOCK_HPP_ */
