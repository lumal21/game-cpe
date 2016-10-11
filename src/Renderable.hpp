/*
 * Renderable.hpp
 *
 *  Created on: 11 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_RENDERABLE_HPP_
#define SRC_RENDERABLE_HPP_

class Renderable {
public:
	virtual void render() = 0;
	virtual ~Renderable() {}
};

#endif /* SRC_RENDERABLE_HPP_ */
