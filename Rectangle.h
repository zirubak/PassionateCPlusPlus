/*
 * Rectangle.h
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point &ul, const Point &lr);
	void ShowRecInfo() const;
};

#endif /* RECTANGLE_H_ */
