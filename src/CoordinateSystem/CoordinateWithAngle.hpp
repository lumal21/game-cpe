/*
 * CordinateWithAngle.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_COORDINATESYSTEM_COORDINATEWITHANGLE_HPP_
#define SRC_COORDINATESYSTEM_COORDINATEWITHANGLE_HPP_

#include "Coordinate.hpp"

namespace CoordinateSystem {

class CoordinateWithAngle: public Coordinate {
public:
	CoordinateWithAngle(short,short,char,float,float);
	CoordinateWithAngle operator=(const CoordinateWithAngle&);
	CoordinateWithAngle operator+(const Coordinate&);
	CoordinateWithAngle operator+=(const Coordinate&);
	virtual ~CoordinateWithAngle();
protected:
	float m_h;
	float m_v;
};

} /* namespace Client */

#endif /* SRC_COORDINATESYSTEM_COORDINATEWITHANGLE_HPP_ */
