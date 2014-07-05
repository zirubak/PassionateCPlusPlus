/*
 * Rectangle.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */
#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
	if( ul.Getx() > lr.Getx() || ul.Gety() > lr.Gety() )
	{
		cout << " wrong position. " << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: [" << upLeft.Getx() << "," << upLeft.Gety() << "]" << endl;
	cout << "우 하단: [" << lowRight.Getx() << "," << lowRight.Gety() << "]" << endl;
}



