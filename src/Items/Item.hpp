/*
 * Item.hpp
 *
 *  Created on: 8 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_ITEMS_ITEM_HPP_
#define SRC_ITEMS_ITEM_HPP_

namespace Items {

class Item {
public:
	Item(char);
	virtual void render();
	virtual ~Item();
protected:
	char m_id;
};

} /* namespace Items */

#endif /* SRC_ITEMS_ITEM_HPP_ */
