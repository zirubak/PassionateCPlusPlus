#include <iostream>
using namespace std;

class Point;	//point가 class의 이름임을 선언

class PointOP
{
private:
	int opcnt;

public:
	PointOP() : opcnt(0)
	{

	}

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);
	~PointOP()
	{
		cout << "Opereation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{

	}
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowpointPos(const Point&);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	//friend로 선언된 함수는 자신이 선언된 클래스의 private영역에 선언이 가능하다.
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	//friend로 선언된 함수는 자신이 선언된 클래스의 private영역에 선언이 가능하다.
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}


int main(void)
{
	Point pos1(1,2);
	Point pos2(2,4);
	PointOP op;
	ShowpointPos(op.PointAdd(pos1, pos2));
	ShowpointPos(op.PointSub(pos1, pos2));
	return 0;
}

void ShowpointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}





