/*
 * Point.h
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#ifndef POINT_H_
#define POINT_H_

class Point
{
private: // x, y라는 정보를 은닉한 상태
	int x;
	int y;

public:
//	bool InitMembers(int xpos, int ypos);
	Point(const int &xpos, const int &ypos);
	int Getx() const;
	int Gety() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif /* POINT_H_ */
