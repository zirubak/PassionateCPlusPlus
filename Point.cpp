/*
 * Point.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#include <iostream>
#include "Point.h"

using namespace std;

//bool Point::InitMembers(int xpos, int ypos)
//{
//	if(xpos < 0 || ypos < 0)
//	{
//		cout << "input error!!!" << endl;
//		return false;
//	}
//
//	x = xpos;
//	y = ypos;
//	return true;
//}

Point::Point(const int &xpos, const int &ypos)
{
	x = xpos;
	y = ypos;
}

int Point::Getx() const // const function
{
	return x;
}

int Point::Gety() const
{
	return y;
}

bool Point::SetX(int xpos)
{
	if( 0 > xpos || xpos > 100)
	{
		cout << "input error!!" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if( 0 > ypos || ypos > 100)
	{
		cout << "input error !!" << endl;
		return false;
	}

	y = ypos;
	return true;
}






