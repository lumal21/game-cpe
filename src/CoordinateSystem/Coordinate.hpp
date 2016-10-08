/*
 * Coordinate.hpp
 *
 *  Created on: 7 de out de 2016
 *      Author: lumal21
 */

#ifndef SRC_COORDINATESYSTEM_COORDINATE_HPP_
#define SRC_COORDINATESYSTEM_COORDINATE_HPP_

namespace CoordinateSystem {

class Coordinate {
public:
	Coordinate(short,short,char);
	Coordinate operator=(const Coordinate&);
	Coordinate operator+(const Coordinate&);
	Coordinate operator+=(const Coordinate&);
	virtual ~Coordinate();
protected:
	short m_x;
	short m_y;
	char m_z;
};

} /* namespace Client */

#endif /* SRC_COORDINATESYSTEM_COORDINATE_HPP_ */
