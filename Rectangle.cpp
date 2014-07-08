/*
 * Rectangle.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */
#include <iostream>
#include "Rectangle.h"

using namespace std;

//bool Rectangle::InitMembers(const Point &ul, const Point &lr)
//{
//	if( ul.Getx() > lr.Getx() || ul.Gety() > lr.Gety() )
//	{
//		cout << " wrong position. " << endl;
//		return false;
//	}
//
//	upLeft = ul;
//	lowRight = lr;
//	return true;
//}

//객체 upLeft의 생성과정에서 x1과 y1을 인자로 전달하는 생성자를 호출하라.
//객체 lowRight의 생성과정에서 x2와 y2를 인자로 전달하는 생성자를 호출하라.
Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
	:upLeft(x1,y1), lowRight(x2, y2)	//member initializer
{
	//empty
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: [" << upLeft.Getx() << "," << upLeft.Gety() << "]" << endl;
	cout << "우 하단: [" << lowRight.Getx() << "," << lowRight.Gety() << "]" << endl;
}



