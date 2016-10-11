/*
 * Item.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ITEMS_ITEM_HPP_
#define SRC_ITEMS_ITEM_HPP_

#include "../Serializable.hpp"
#include "../Renderable.hpp"

namespace Items {

class Item: public Serializable,public Renderable {
public:
	int serialize(char*);
	static Item* unserialize(char*);

};

} /* namespace Items */

#endif /* SRC_ITEMS_ITEM_HPP_ */
