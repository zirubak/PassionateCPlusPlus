/*
 * Ring.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}

};

class Circle
{
private:
	Point circleCenterPos;
	int radius;

public:
	//반지름의 길이 정보를 저장
	void init(int x, int y, int r)
	{
		radius = r;
		circleCenterPos.Init(x,y);
	}

	//반지름의 길이 정보를 출력
	void ShowCircleInfo() const
	{
		cout << "반지름: " << radius  << endl;
		circleCenterPos.ShowPointInfo();
	}

};

class Ring
{
private:
	Circle inCircle;
	Circle outCircle;

public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inCircle.init(inX, inY, inR);
		outCircle.init(outX, outY, outR);
	}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();
		cout << "Outter Circle Infor..." << endl;
		outCircle.ShowCircleInfo();
	}
};


int main(void)
{
	Ring ring;
	ring.Init(1,1,4,2,2,9);
	ring.ShowRingInfo();
	return 0;
}












