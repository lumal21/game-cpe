/*
 * BedRock.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_BLOCKS_BEDROCK_HPP_
#define SRC_BLOCKS_BEDROCK_HPP_

#include "Block.hpp"

namespace Blocks {

class BedRock: public Block {
public:
	BedRock();
	virtual ~BedRock();
protected:
	unsigned char m_id=0;
	unsigned char m_id=1;
	unsigned char m_density = 0xFF;
};

} /* namespace Blocks */

#endif /* SRC_BLOCKS_BEDROCK_HPP_ */
