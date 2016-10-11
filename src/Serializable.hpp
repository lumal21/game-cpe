/*
 * Serializable.hpp
 *
 *  Created on: 10 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_SERIALIZABLE_HPP_
#define SRC_SERIALIZABLE_HPP_

class Serializable {
public:
	virtual int serialize(char*) = 0;
	static Serializable* unserialize(char*);
	virtual ~Serializable(){};
};

#endif /* SRC_SERIALIZABLE_HPP_ */
