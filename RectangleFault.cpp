/*
 * RectangleFault.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#include <iostream>
using namespace std;

class Point
{
public:
	int x;	//x좌표의 범위는 0 이상 100 이하
	int y;	//y좌표의 범위는 0 이상 100 이하
};

class Rectabgle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "좌 상단: [" << upLeft.x << "," << upLeft.y << "]" << endl;
		cout << "우 하단: [" << lowRight.x << "," << lowRight.y <<  "]" << endl;
	}
};

int main(void)
{
	Point pos1 = {-2,4};
	Point pos2 = {5,9};

	Rectabgle rec = {pos1, pos2};
	rec.ShowRecInfo();
	return 0;
}


